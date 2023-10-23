#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string S;
    getline(cin, S);

    try{
        int n = stoi(S);
        cout << n << endl;
    }
    catch(std::invalid_argument){
        cout << "Bad String" << endl;
    }

    /*
    Para entender melhor o funcionamento de catch e do erro retornado, utilize o código abaixo

    catch (std::invalid_argument const &ex){
        cout << "Erro 1: " << ex.what() << endl;
    }
    */
    
    return 0;
}