#include <iostream>
#include <map>
#include <string>
using namespace std;

string timeInWords(int h, int m){
    map<int, string> mapa = {
                            {1, "one"},
                            {2, "two"},
                            {3, "three"},
                            {4, "four"},
                            {5,  "five"},
                            {6,  "six"},
                            {7,  "seven"},
                            {8,  "eight"},
                            {9,  "nine"},
                            {10, "ten"},
                            {11, "eleven"},
                            {12, "twelve"},
                            {13, "thirteen"},
                            {14, "fourteen"},
                            {15, "quarter"},
                            {16, "sixteen"},
                            {17, "seventeen"},
                            {18, "eighteen"},
                            {19, "nineteen"},
                            {20, "twenty"},
                            {21, "twenty one"},
                            {22, "twenty two"},
                            {23, "twenty three"},
                            {24, "twenty four"},
                            {25, "twenty five"},
                            {26, "twenty six"},
                            {27, "twenty seven"},
                            {28, "twenty eight"},
                            {29, "twenty nine"},
                            {30, "half"}
    };
    map<int,string>::iterator hr, min;
    hr = mapa.find(h);
    min = mapa.find(m);
    string inwords, minute, hour, time;

    minute = m==1 ? " minute" : " minutes";
    if(m>30){
        time = " to ";
        hr++;
    } 
    else
        time = " past ";
    
    if(min == mapa.end())
        min = mapa.find(60 - m);
    
    if(m == 0)
        inwords = hr->second + " o' clock";
    
    else if(m>=1 && m<=30)
        if(m==15 || m == 30)
            inwords = min->second + time + hr->second;
        else
            inwords = min->second + minute + time + hr->second;

    else{
        if(m == 45)
            inwords = min->second + time + hr->second;
        else
            inwords = min->second + minute + time + hr->second;
    }

    return inwords;
}

int main(){
    int h,m;
    cin >> h >> m;
    cout << timeInWords(h,m) << endl;
    return 0;
}