
  #3009.cpp
  algoalgo

  Created by yujeong on 2021/05/09.


#include <iostream>
using namespace std;

int main(){
    int x[3];
    int y[3];
    int x4;
    int y4;

    for (int i=0; i<3; i++) {
        cin >> x[i] >> y[i];
    }

    if (x[0] == x[1]) {
        x4 = x[2];
    }else if (x[0] == x[2])
        x4 = x[1];
    else x4 = x[0];

    if (y[0] == y[1]) {
        y4 = y[2];
    }else if (y[0] == y[2])
        y4 = y[1];
    else y4 = y[0];

    cout << x4 << " " << y4;
}
