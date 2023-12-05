#include <iostream>
using namespace std;

int howManyGames(int p, int d, int m, int s){
    //p firt game; d decrease price; m min value; s my wallet
    int count=0, wallet = s, gameValue = p;

    while(true){
        wallet-=gameValue;
        if (wallet >= 0)
            count++;
        else
            break;

        gameValue-d >= m ? gameValue-=d : gameValue=m;      
    }
    return count;
}

int main(){
    int p, d, m, s;
    cin >> p >> d >> m >> s;
    cout << howManyGames(p, d, m, s) << endl;
    return 0;    
}