#include <iostream>
#include <string>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    
    if(x1<=x2 && v1<=v2)
        return("NO");
    else if(x1<x2 && v1>v2){
        int c1 = x1+v1;
        int c2 = x2+v2;
        while(c1<=c2){
            if(c1==c2)
                return "YES";
            c1+=v1;
            c2+=v2;
        }
        return("NO");    
    }
    else if(x2<=x1 && v2<=v1)
        return("NO");
        
    else if(x2<x1 && v2>v1){
        int c2 = x2+v2;
        int c1 = x1+v1;
        while(c2<=c1){
            if(c2==c1)
                return "YES";
            c2+=v2;
            c1+=v1;
        }
        return("NO");    
    }
    if(x1==x2 && v1!=v2)
        return("NO");
    else
        return "IMPUT ERROR";

}

int main(){
    
    int x1,x2,v1,v2;
    cin >> x1;
    cin >> v1;
    cin >> x2;
    cin >> v2;
    cout << kangaroo(x1,v1,x2,v2) << endl;

    return 0;
}