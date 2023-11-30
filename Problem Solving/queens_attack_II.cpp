#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Coordenada{
public:
    int x;
    int y;
};

int horizontais(int n, int r_q, int c_q, vector<Coordenada> obst){
    int delimitadorDir = n;
    int delimitadorEsq = 1;

    for(int i=0; i<(int)obst.size(); i++){
        if(obst[i].x == r_q){
            obst[i].y > c_q ? delimitadorDir = obst[i].y - 1 : delimitadorEsq = obst[i].y + 1;
            obst.erase(obst.begin()+i);
            i--;
        }
    }
    		
    cout << "A rainha se move horizontalmente " << (delimitadorDir - c_q) + (c_q - delimitadorEsq) << endl;   
    return (delimitadorDir - c_q) + (c_q - delimitadorEsq);
}

int verticais(int n, int r_q, int c_q, vector<Coordenada> obst){
    int delimitadorTop = n;
    int delimitadorBot = 1;
    
    for(int i=0; i<(int)obst.size(); i++){
        if(obst[i].y == c_q){
            obst[i].x > r_q ? delimitadorTop = obst[i].x - 1 : delimitadorBot = obst[i].x + 1;
            obst.erase(obst.begin()+i);
            i--;
        }
    }		
    cout << "A rainha se move verticalmente "<<(delimitadorTop - c_q) + (c_q - delimitadorBot) << endl;   
    return (delimitadorTop - c_q) + (c_q - delimitadorBot);
}

int diagonais(int n, int r_q, int c_q, vector<Coordenada> obst){
    int dtd=0, dte=0, dbd=0, dbe=0;

    int r_q_temp = r_q+1, c_q_temp = c_q+1;
    while(r_q_temp<=n && c_q_temp<=n){ // diagonal top direita
        bool obs = false;
        for(int i=0; i<(int)obst.size(); i++){
            if(obst[i].y == c_q_temp && obst[i].x == r_q_temp){
                obs = true;
                obst.erase(obst.begin()+i);
                break;
            }
        }
        if(obs)
            break;
        else
            dtd++;
        
        r_q_temp++; c_q_temp++;
    }

    r_q_temp = r_q+1, c_q_temp = c_q-1;
    while(r_q_temp<=n && c_q_temp>0){ // diagonal top esquerda
        bool obs = false;
        for(int i=0; i<(int)obst.size(); i++){
            if(obst[i].y == c_q_temp && obst[i].x == r_q_temp){
                obs = true;
                obst.erase(obst.begin()+i);
                break;
            }
        }       
        if(obs)
            break;
        else
            dte++;
        
        r_q_temp++; c_q_temp--;
    }

    r_q_temp = r_q-1, c_q_temp = c_q+1;
    while(r_q_temp>0 && c_q_temp<=n){ // diagonal bot direita
        bool obs = false;
        for(int i = 0; i<obst.size(); i++){
            if(obst[i].y == c_q_temp && obst[i].x == r_q_temp){
                obs = true;
                obst.erase(obst.begin()+i);
                break;
            }
        }
        if (obs)
            break;
        else
            dbd++;
        r_q_temp--; c_q_temp++;
    }

    r_q_temp = r_q-1, c_q_temp = c_q-1;
    while(r_q_temp>0 && c_q_temp>0){ // diagonal bot esquerda
        bool obs = false;
        for(int i =0; i<obst.size(); i++){
            if(obst[i].y == c_q_temp && obst[i].x == r_q_temp){
                obs = true;
                obst.erase(obst.begin()+i);
                break;
            }   
        }
        if (obs)
            break;
        else
            dbe++;
        r_q_temp--; c_q_temp--;
    }
    cout << "A rainha se moveu para DTD:" << dtd << endl;
    cout << "A rainha se moveu para DTE:" << dte << endl;
    cout << "A rainha se moveu para DBD:" << dbd << endl;
    cout << "A rainha se moveu para DBE:" << dbe << endl;
    cout << "A rainha se moveu diagonalmente:" << dtd+dte+dbd+dbe << endl;
    return (dtd+dte+dbd+dbe);
}//

int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles){
    vector<vector<int>>::iterator it;
    vector<Coordenada> obst(k);
   
    int i = 0;
    for(it=obstacles.begin();it!=obstacles.end();it++){
        //cout << *it->begin() << " " << *(it->begin()+1) << endl;;
        obst[i].x = *it->begin();
        obst[i].y = *(it->begin()+1);
        i++;
	}				
    //for (int i=0; i<k; i++)
      //  cout << obst[i].x << " " << obst[i].y << endl;
    
    
    return( horizontais(n, r_q, c_q, obst) +
            verticais(n, r_q, c_q, obst) +
            diagonais(n, r_q, c_q, obst)    );
   
}


int main(){
    vector<vector<int>> obstacles;
    int n, k, r_q, c_q;
    cin >> n >> k >> r_q >> c_q;
    for(int i=0; i<k; i++){
        int x, y;
        cin >> x >> y;
        obstacles.push_back({x, y});
    }
   
    cout << queensAttack(n, k, r_q, c_q, obstacles) << endl;
    return 0;
}

/*
            SOLUTION 

            int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles) {
    vector<vector<int>> block(8);
    int count = 0;
    
    for (auto it: obstacles) {
        if (it[0] < r_q && it[1] < c_q && (r_q - it[0] == c_q - it[1])) {
            if (block[0].size() == 0 || block[0][0] < it[0]) {
                block[0] = it;
            }
        }
        // top
        else if (it[0] < r_q && it[1] == c_q) {
            if (block[1].size() == 0 || block[1][0] < it[0]) {
                block[1] = it;    
            }
        }
        else if (it[0] < r_q && it[1] > c_q && (r_q - it[0] == it[1] - c_q)) {
            if (block[2].size() == 0 || block[2][0] < it[0]) {
                block[2] = it;
            }
        }
        // right
        else if (it[0] == r_q && it[1] > c_q) {
            if (block[3].size() == 0 || block[3][1] < it[1]) {
                block[3] = it;
            }
        }
        else if (it[0] > r_q && it[1] > c_q && (it[0] - r_q == it[1] - c_q)) {
            if (block[4].size() == 0 || block[4][0] > it[0]) {
                block[4] = it;
            }
        }
        // bottom
        else if (it[0] > r_q && it[1] == c_q) {
            if (block[5].size() == 0 || block[5][1] > it[0]) {
                block[5] = it;
            }
        }
        else if (it[0] > r_q && it[1] < c_q && (it[0] - r_q == c_q - it[1]))  {
            if (block[6].size() == 0 || block[6][0] > it[0]) {
                block[6] = it;
            }
        }
        // left
        else if (it[0] == r_q && it[1] < c_q) {
            if (block[7].size() == 0 || block[7][1] < it[1]) {
                block[7] = it;
            }
        }
    }
    
    vector<int> sub = block[0].size() == 0 ? vector<int>{0,0} : block[0];
    int t = min(r_q - sub[0], c_q -  sub[1]) - 1;
    count += t > 0 ? t : 0; 
    cout << count << endl; 
    
    // top
    sub = block[1].size() == 0 ? vector<int> {0,0} : block[1];
    t = r_q - sub[0] - 1;
    count += t > 0 ? t : 0;
    cout << count << endl; 
    
    sub = block[2].size() == 0 ? vector<int> {0,n + 1} : block[2];
    t = min(r_q - sub[0], sub[1] - c_q) - 1;
    count += t > 0 ? t : 0;
    cout << count << endl; 
    
    // right
    sub = block[3].size() == 0 ? vector<int>{0, n + 1} : block[3];
    t = (sub[1] - c_q) - 1;
    count += t > 0 ? t : 0;
    cout << count << endl; 
    
    sub = block[4].size() == 0 ? vector<int> {n + 1,n + 1} : block[4];
    t = min(sub[0] - r_q, sub[1] - c_q) -1;
    count += t > 0 ? t : 0;
    cout << count << endl; 
    
    // bottom
    sub = block[5].size() ==0 ? vector<int>{n + 1,n + 1} : block[5];
    t = (sub[0] - r_q) - 1;
    count += t > 0 ? t : 0;
    cout << count << endl; 
    
    sub = block[6].size() == 0 ? vector<int> {n + 1, 0} : block[6];
    t = min(sub[0] - r_q, c_q - sub[1]) - 1; 
    count += t > 0 ? t : 0;
    cout << count << endl; 
    
    // left
    sub = block[7].size() == 0 ? vector<int> {0,0} : block[7];    
    t = c_q - sub[1]- 1;
    count += t > 0 ? t : 0;
    cout << count << endl; 
    
    return count;
}
*/