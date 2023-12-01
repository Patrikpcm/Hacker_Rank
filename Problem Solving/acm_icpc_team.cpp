#include <iostream>
#include <vector>
using namespace std;


vector<int> acmTeam(vector<string> topic){
    int n_topics=0, n_teams=0;

    for(int i=0; i<topic.size()-1; i++){
        string s1 = topic[i];
        for(int j=i+1; j<topic.size(); j++){
            string s2 = topic[j];
            string result;
            int nt=0;
            for(int k=0; k<s1.size(); k++){
                //cout << "s1[" << k <<"]="<<s1[k]<<" s2[" << k <<"]="<<s2[k]<<endl;
                if(s1[k]=='1' || s2[k]=='1')
                    nt++;
            }
           // cout << "nt=" << nt << endl;
            if(nt > n_topics){
                n_topics=nt; n_teams=1;
            }
            else if(nt == n_topics)
                n_teams++;
            
            cout << endl;
        }
    }
    vector<int> result{n_topics, n_teams};
    return result;
}

int main(){
    vector<string> topic;
    vector<int> result;
    int n, t;
    cin >> n >> t;
    while(n-- >0){
        string s;
        cin >> s;
        topic.push_back(s);
    }
    result = acmTeam(topic);
    for(int x : result)
        cout << x << endl;

    return 0;
}