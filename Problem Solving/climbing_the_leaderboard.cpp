#include <iostream>
#include <vector>
#include <set>
#include <bits/stdc++.h>
using namespace std;

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    static set<int, greater<int>> rk(ranked.begin(), ranked.end());
    set<int>::reverse_iterator sit;
    vector<int>::iterator it;
    vector<int> result;
    
    int rank = rk.size()+1;
    sit = rk.rbegin();
    
    for(it=player.begin(); it!=player.end(); it++){
        
        while(true && sit!=rk.rend()){
            if(*sit > *it){
                result.push_back(rank);
                break;
            }
            else{
                sit++;
                rank--;
            }
        }
        if(sit==rk.rend())
            result.push_back(1);
    }
    return result;
}


int main(){
    vector<int> ranked, player, result;
    int n, m;
    cin >> n;
    while(n-- >0){
        int x;
        cin >> x;
        ranked.push_back(x);
    }
    cin >> m;
    while(m-- >0){
        int x;
        cin >> x;
        player.push_back(x);
    }
   
    result = climbingLeaderboard(ranked, player);
    vector<int>::iterator it;
    for(it=result.begin(); it!=result.end(); it++)
        cout << *it << endl;

return 0;
}

/*
    static set<int, greater<int>> rk(ranked.begin(), ranked.end());
    set<int>::iterator ita, itb, itt;
    vector<int>::iterator it;
    vector<int> result;

 for(it=player.begin(); it!=player.end(); it++){
        ranked.push_back(*it);
        sort(ranked.begin(), ranked.end(), greater<int>());
        rtemp = 0;
        for(it2=ranked.begin(); it2!=ranked.end(); it2++){
            rtemp++;
            if(it2+1 == ranked.end()){
                if(*it2 == *it){
                    if (rtemp == 0)
                        rtemp++;
                    result.push_back(rtemp);
                    break;
                }
            }
            else{
                if(*it2 == *it){
                    result.push_back(rtemp);
                    break;
                }
                if(*it2 == *(it2+1))
                    rtemp--;
            }
        }
        for(it3=ranked.begin(); it3!=ranked.end(); it3++){
            if(*it == *it3){
                ranked.erase(it3);
                break;
            }
        }
    }
       return result;
       
       */

      /*
      vector<int> result;
    vector<int>::iterator it, it2;
    int rtemp;

    for(it=player.begin(); it!=player.end(); it++){
        rtemp = 0;

        for(it2=ranked.begin(); it2!=ranked.end(); it2++){
            rtemp++;
            if(*it >= *it2){
                result.push_back(rtemp);
                break;
            }
            else{
                if(it2+1 == ranked.end()){
                    if(*it == *it2){
                        result.push_back(rtemp);
                        break;
                    }
                    else{
                        rtemp++;
                        result.push_back(rtemp);
                        break;
                    }
                }
                if(*it2 == *(it2+1))
                     rtemp--;
            }
        }
    }
    return result;
      */

/*
     itb = rk.end(); itb--;
    for(it=player.begin(); it!=player.end(); it++){
        
        ita = rk.begin();
        while(true){
            if(*it >= *ita){
                result.push_back(distance(rk.begin(), ita)+1);
                break;
            }
            else if(*it <= *itb){
                if(*it == *itb)
                    result.push_back(distance(rk.begin(),itb)+1);
                else
                    result.push_back(distance(rk.begin(),itb)+2);
                break;
            }
            else{
                int split = (distance(rk.begin(),ita) + distance(rk.begin(),itb));
                split = (split/2)+(split%2);
                itt = rk.begin();
                advance(itt,split);
                
                if(*it == *itt){
                    result.push_back(split+1);
                    break;
                }
                else if(ita == prev(itb, 1)){
                    result.push_back(split+1);
                    break;
                }
                else if(*it > *itt){
                    itb = rk.begin();
                    advance(itb,split);
                }
                else{
                    ita = rk.begin();
                    advance(ita,split);
                }
            }
        }
    }
    return result;
    */