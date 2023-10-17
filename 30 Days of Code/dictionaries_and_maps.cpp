#include <iostream>
#include <map>
using namespace std;

int main(){

    map<string, unsigned int> mapa;
    unsigned int n;

    cin >> n;
    for(unsigned int i=1; i<=n; i++){
        string s;
        cin >> s;
        
        unsigned int num;
        cin >> num;
        mapa.insert({s, num});
    }

    while(true){
        string s;
        map<string, unsigned int>::iterator it;
        cin >> s;
      
        if(s != ""){
            it = mapa.find(s);
        
            if( it == mapa.end() )
                cout << "Not found" << endl;
            else{
                cout << it->first << "=" << it->second << endl;
            }    
        }
        else
            break;
    }
   
return 0;
}