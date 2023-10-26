#include <iostream>
using namespace std;

string dayOfProgrammer(int year){
   
    if(year < 1917){ //julian calendar
        if(year%4 == 0) //if leap year
            //day = 12;
            return ("12.09."+to_string(year));
        else
            //day = 13; 
            return ("13.09."+to_string(year));
    }

    else if (year == 1918){
        //day = 26; 
        return ("26.09.1918");
    }
    
    else{ //gregorian calendar
    
        if((year%400 == 0) || (year%4 == 0 && year%100 != 0)) //leap year
            //day = 12;
            return ("12.09."+to_string(year));
        else
            //day = 13;
            return("13.09."+to_string(year));
    } 
}

int main(){
    int y;
    cin >> y;
    cout << dayOfProgrammer(y) << endl;

return 0;
}