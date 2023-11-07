#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//SOLUÇÃO EXEMPLO, SEM REGEX
/*
int main(){
    vector<string> emails, names;
    vector<string>::iterator it;
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(N_temp);
   
    while(N-- > 0){
        string c;
        getline(cin,c);
        emails.push_back(c);
    }

    for(it = emails.begin(); it != emails.end(); it++){
        string s = *it;
        if(s.find("@gmail.com")!=std::string::npos){
            string c;
            for(int i=0; i<s.find(" "); i++ )
                c+=s[i];
            names.push_back(c);
        }
    }
    sort(names.begin(), names.end());

    for(it = names.begin(); it != names.end(); it++)
        cout << *it << endl;

return 0;
}
*/


//SOLUÇÃO PARA O EXERCÍCIO
int main(){
    string N_temp;
    getline(cin, N_temp);
    vector<string> names;
    regex pattern ("[a-z.]+@gmail\\.com");

    int N = stoi(ltrim(rtrim(N_temp)));

    for (int N_itr = 0; N_itr < N; N_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);
        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
        string firstName = first_multiple_input[0];
        string emailID = first_multiple_input[1];
        
        if(regex_match(emailID, pattern)){
            names.push_back(firstName);
        }
        
    }
    sort(names.begin(), names.end());
    
    for(int i = 0; i < names.size(); ++i){
        cout << names[i] << endl;
    }

    return 0;
}