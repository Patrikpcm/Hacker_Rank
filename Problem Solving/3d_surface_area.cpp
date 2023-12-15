#include <iostream>
#include <vector>
using namespace std;

int surfaceArea(vector<vector<int>> A){
    int area = (int)(A.size() * A[0].size()) * 2; //A.size() retorna o número de linhas
    
    //Soma da primeira e última coluna
    for(int i=0; i<(int)A.size(); i++){
        area += A[i][0];
        area += A[i][(int)A[i].size()-1];
    }

    //soma da primeira e última linha
    for(int i=0; i<(int)A[0].size(); i++){
        area += A[0][i];
        area += A[(int)A.size()-1][i];
    }
  
    //soma das diferenças das linhas
    for(int i=0; i<(int)A.size(); i++){
        for(int j=0; j<(int)A[0].size()-1; j++){
            area += abs(A[i][j] - A[i][j+1]);
        }
    }

    //soma das diferenças das colunas
    for(int j=0; j<(int)A[0].size(); j++){
        for(int i=0; i<(int)A.size()-1; i++){
            area += abs(A[i][j] - A[i+1][j]);
        }
    }

    return area;
}

int main(){
    
    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H);
    for(int i=0; i<H; i++)
        A[i].resize(W);

    for (int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            int x;
            cin >> x;
            A[i][j] = x;
        }
    }

    cout << surfaceArea(A) << endl;

    return 0;
}