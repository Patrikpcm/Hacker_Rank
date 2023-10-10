#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

/*
 * Complete the 'breakingRecords' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY scores as parameter.
 */

vector<int> breakingRecords(vector<int> scores) {
    vector<int> result(2);
    vector<int>::iterator it;
    int min=0, max=0, minv = *scores.begin(), maxv = *scores.begin();

    for(it = scores.begin(); it < scores.end(); it++){
        if(*it<minv){
            min++;
            minv = *it;
        }
        else if(*it>maxv){
            max++;
            maxv = *it;
        }
    }
    result[0] = max;
    result[1] = min;
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<int> scores(n);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        scores[i] = x;
    }

    vector<int> result = breakingRecords(scores);
    for (int i = 0; i < 2; i++)
        cout << result[i] << " ";
    
    return 0;
}
