#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'bitwiseAnd' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER N
 *  2. INTEGER K
 */

int bitwiseAnd(int N, int K) {
    int a;int b;
    int max = 0;
    for (a=1;a<N;a++){
        for (b = 2; b <= N; b++){
            if(a<b & (a&b)<K){
                max = (a & b) > max ? a & b : max;
            }
        }
    }
    return max;

}

int main(){
    int T;
    cin >> T;
    while(T-- > 0){
        int N, K;
        cin >> N;
        cin >> K;
        cout << bitwiseAnd(N,K) << endl;
    }
    return 0;
}