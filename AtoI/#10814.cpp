//
//  #10814.cpp
//  algoalgo
//
//  Created by yujeong on 2021/05/24.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;



bool cmp(pair<int,string> a, pair<int,string> b){
    return a.first < b.first;
}
int main(){
    int n;
    cin >> n;
    vector<pair<int, string>> v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    stable_sort(v.begin(), v.end(), cmp);
    for (int i=0; i<n; i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
}
