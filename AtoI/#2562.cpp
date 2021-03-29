//
//  #2562.cpp
//  study6
//
//  Created by yujeong on 2021/03/28.
//

#include <iostream>
using namespace std;

int main(){
    int arr[101] = {0};
    int n=0, m=0;
    for (int i=1; i<=9; i++) {
        cin >> n;
        arr[n] = i;
    }
    
    for (int i=1; i<101; i++) {
        if (arr[i] > 0) {
            m = i;
        }
    }
    cout << m << endl;
    cout << arr[m];

}
