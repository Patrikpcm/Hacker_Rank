#include <iostream>
#include <string>
using namespace std;

int countingValleys(int steps, string path){
    int gps = 0, valleys = 0;
    bool vly = false;
    
    for(int i=0; i<steps; i++){
        path[i] == 'U' ? gps++ : gps--;
        if(vly == true){
            if (gps == 0){
                valleys++;
                vly = false;
            }
        }
        vly = gps<0 ? true : false;
    }
    return valleys;
}

int main(){
    string step;
    string path;
    int steps;
    cin >> steps;
    //getline(cin,step);
    getline(cin,path);
    //steps = stoi(step);
    cout << countingValleys(steps, path);
    return 0;
}