//
//  #2609.cpp
//  algoalgo
//
//  Created by yujeong on 2021/05/24.
//

#include <iostream>
#include <cmath>
using namespace std;

int maxEqual=1;
void cal(int n1, int n2){
    for (int i=2; i<= min(n1, n2); i++) {
        if (n1%i ==0 && n2%i==0) {
            maxEqual = i;
        }
    }
    
    int minEqual = maxEqual * (n1/maxEqual) * (n2/maxEqual);
    
    cout << maxEqual << endl;
    cout << minEqual;
}

int main(){
    int a, b;
    cin >> a >> b;
    
    cal(a, b);
    
}
