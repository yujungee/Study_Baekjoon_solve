//
//  #11651.cpp
//
//  Created by yujeong on 2021/04/06.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    vector<pair<int, int>> v;
    for (int i=0; i<N; i++) {
        int a,b;
        cin >> a >> b;
        v.push_back(pair<int, int>(b, a));
    }// y << x
    sort(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); i++){
            cout << v[i].second << " " << v[i].first <<'\n';
        }
 
}
