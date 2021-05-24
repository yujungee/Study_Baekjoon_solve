#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int N, a, b;   
    cin >> N ;
    vector<vector<int> > v(N, vector<int>(2,0));

    for(int i=0; i<N; i++){
        cin >> a >> b;
        v[i][1] = a;
        v[i][0] = b;
        }
    
    sort(v.begin(), v.end());

    int count = 0;
    int time = 0;
    for (int i = 0; i < N; i++) {
        if (time <= v[i][1]) {
            time = v[i][0];
            count++;
        }
    }
    
    cout << count << endl;
}
