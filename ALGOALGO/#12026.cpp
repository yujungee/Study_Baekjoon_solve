//
//  #12026.cpp
//  algo_21_2
//
//  Created by yujeong on 2021/11/03.
//

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int N;

int dp[1001];
char arr[1001];


void dfs(){

    for (int i=0; i<N; i++) {
        
        if (arr[i] == 'B'){
            for (int j = i+1; j<N; j++) {
                if (arr[j] == 'O') {
                    int n = j-i;
                    dp[j] = min(dp[j], dp[i] + n*n);
                    
                }
            }
        }
        else if(arr[i] == 'O'){
            for (int j = i+1; j<N; j++) {
                if (arr[j] == 'J'){
                    int n = j-i;
                    dp[j] = min(dp[j], dp[i] + n*n);
                    
                }
            }
        }
        else if (arr[i] == 'J'){
            for (int j = i+1; j<N; j++) {
                if (arr[j] == 'B') {
                    int n = j-i;
                    dp[j] = min(dp[j], dp[i] + n*n);
                }
            }
        }
    }
    
    if (dp[N-1] == 9999999)
        cout << -1 << '\n';
    else
        cout << dp[N-1] << '\n';
    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }
//    memset(dp, 4096, sizeof(dp));
    fill(dp, dp + 1001, 9999999);
    dp[0] = 0;
    dfs();
    
}
