#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> cavityMap(vector<string> grid){
   
    for(int i=1; i<(int)grid.size() - 1; i++){
        for(int j=1; j<(int)grid.size() - 1; j++){
            if (grid[i][j-1]<grid[i][j] && 
                grid[i][j+1]<grid[i][j] &&
                grid[i-1][j]<grid[i][j] &&
                grid[i+1][j]<grid[i][j])
                {
                    grid[i].replace(j,1,1,'X');              
                }        
        }
    }
    return grid;
}

int main(){
    vector<string> grid;
    string N;
    getline(cin,N);
    int n = stoi(N);
    while(n-- >0){
        string x;
        getline(cin,x);
        grid.push_back(x);
    }
   //cout <<"Cavities"<<endl;
    grid = cavityMap(grid);
    for(int i=0; i<(int)grid.size(); i++)
        cout << grid[i] << endl;

    return 0;
}