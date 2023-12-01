#include <iostream>
#include <vector>
#include <set>
using namespace std;

string organizingContainers(vector<vector<int>> container) {
    set<int> row,column;
    for(int i=0; i<(int)container.size(); i++){
        int c=0, r=0;
        for(int j=0;j<(int)container.size();j++){
            r+=container[i][j];
            c+=container[j][i];
        }
        row.insert(r);
        column.insert(c);
    }
    if(row==column){
        return "Possible";
    }
    else{
        return "Impossible";
    }
}

int main(){
    int q;
    cin >> q;
    while(q-- >0){
        int n;
        cin >> n;
        vector<vector<int>> container(n, vector<int>(n,0));
        for(int i=0; i<n; i++){
            for(int j=0;j<n;j++){
                int x; 
                cin >> x;
                container[i][j] = x;
            }
        }
        /*for(int i=0; i<n; i++){
            for(int j=0;j<n;j++){
                cout << container[i][j] << " ";
            }
            cout << endl;
        }*/
        cout << organizingContainers(container) << endl;
    }
    return 0;
}