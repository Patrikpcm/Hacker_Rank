#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int> &a, int pos){
    int temp = a[pos + 1];
    a[pos + 1] = a[pos];
    a[pos] = temp;
}

int main(){
    vector<int> a;
    int n;
    cin >> n;
    while(n-- > 0){
        int x;
        cin >> x;
        a.push_back(x);
    }

    int swaps = 0;
    for(unsigned int i=0; i<a.size(); i++){
        for(unsigned int j=0; j<a.size()-1; j++){
            if(a[j]>a[j+1]){
                swap(a,j);
                swaps++;
            }
        }
    }
    cout <<"Array is sorted in " << swaps << " swaps." << endl;
    cout << "First Element: " << a.front() << endl;
    cout << "Last Element: " << a.back() << endl;
    
return 0;
}