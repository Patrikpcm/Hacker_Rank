#include <iostream>
#include <vector>
using namespace std;

void printMatrix(vector<vector<int>> arr){
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

void readMatrix(vector<vector<int>> &arr){
    for(int i=0; i<6; i++){
        arr[i].resize(6);
        for(int j=0; j<6; j++){
            int val;
            cin >> val;
            arr[i][j] = val;
        }
    }
}

int sumHourGlass(vector<vector<int>> arr){
    int sum, max_sum;
    
    for(int line=0; line<=3; line++){ //anda nas ampulhetas da matriz
        for(int col=0; col<=3; col++){ //anda nas ampulhetas da matriz
            sum = 0;
            for(int hg_line=line; hg_line<=(line+2); hg_line++){ //soma a ampulheta atual
                for(int hg_col=col; hg_col<=(col+2); hg_col++){ //soma a ampulheta atual
                    if(hg_line == line+1){
                        if(hg_col == col+1)
                            sum +=arr[hg_line][hg_col];
                    }
                    else
                        sum +=arr[hg_line][hg_col];
                }
            }
            //cout << "Valor ampulheta: " << sum << endl;
            if(line == 0 && col == 0)
                max_sum = sum;
            else if(sum > max_sum)
                max_sum = sum;
        }    
    }
    return max_sum;
}

int main(){
    vector<vector<int>> arr(6);
    readMatrix(arr);
    printMatrix(arr);
    cout << sumHourGlass(arr) << endl;
return 0;
}