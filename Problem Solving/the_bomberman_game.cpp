#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

vector<string> bomberMan(int n, vector<string> grid){
    if(n==0 || n ==1)
        return grid;
    else if(n%2==0)
        n = 2;
    else if((n+1)%4 == 0)
        n = 3;
    else if((n-1)%4 == 0)
        n = 4;
    
    int r = grid.size()+2, c = grid[0].size()+2;
    vector<string> new_grid(r);
    
    for(int i=0; i<r; i++){
        string s(c,'.');
        new_grid[i] = s;
    }

    for(int i=1; i<r-1; i++){
        for(int j=1; j<c-1; j++){
            new_grid[i][j] = grid[i-1][j-1];
        }
    }

    int time=2;
    if (time <= n){
        for(int i=1; i<r-1; i++){
            replace(new_grid[i].begin()+1, new_grid[i].end()-1, 'O', 'x');
            replace(new_grid[i].begin()+1, new_grid[i].end()-1, '.', 'O');
        }
    }
    //cout << "time 2\n";
    //for(int i=0; i<r; i++){
       // cout << new_grid[i] << endl;
   // }
    //cout << "\n";
       
    while(time <= n){
        time++;
        if (time <= n){
            //explode as bombas colocadas antes
            for(int i=1; i<r-1; i++){
                size_t pos = new_grid[i].find('x');
                while(pos != std::string::npos){
                    //cout << "em i:" << i << " find:" << pos << endl;
                    if(pos != std::string::npos){
                        new_grid[i][pos] = '.';
                        new_grid[i-1][pos] = '.';           
                        if(new_grid[i+1][pos] != 'x')
                            new_grid[i+1][pos] = '.';
                        new_grid[i][pos-1] = '.';
                        if(new_grid[i][pos+1] != 'x')
                            new_grid[i][pos+1] = '.';   
                    }
                    pos = new_grid[i].find('x', pos+1);
                }
            }
        }
        else
            break;
        
        //cout << "time 3\n";
        //for(int i=0; i<r; i++){
          //  cout << new_grid[i] << endl;
       // }
        //cout << "\n";

        time++;
        if (time <= n){
            //planta bombas nas posicoes vazias novamente 
            for(int i=1; i<r-1; i++){
               replace(new_grid[i].begin()+1, new_grid[i].end()-1, 'O', 'x');
               replace(new_grid[i].begin()+1, new_grid[i].end()-1, '.', 'O');
            }
        }
        else
            break;
        
        //cout << "time 4\n";
        //for(int i=0; i<r; i++){
         //   cout << new_grid[i] << endl;
        //}
        //cout << "\n";
    }

    for(int i=1; i<r-1; i++){
        for(int j=1; j<c-1; j++)
            new_grid[i][j] == 'x' ? grid[i-1][j-1] = 'O': grid[i-1][j-1] = new_grid[i][j];
    }

    return grid;
}

int main(){
    //linhas, colunas e os segundos 
    int r, c, n;
    cin >> r >> c >> n;
    cin.ignore();
    vector<string> grid(r);
    for(int i=0; i<r; i++){
        string x;
        getline(cin,x);
        grid[i] = x;
    }

    grid = bomberMan(n,grid);
    cout << "SOLUTION\n";
    for(int i=0; i<r; i++){
        cout << grid[i] << endl;
    }
    cout << "\n";
    
}