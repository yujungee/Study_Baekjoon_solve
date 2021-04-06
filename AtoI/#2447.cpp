//
//  2447.cpp
//  algoalgo
//
//  Created by yujeong on 2021/04/06.
//

#include <iostream>
using namespace std;

void star(int x, int y, int N)
{
    if((x/N) % 3 == 1 && (y/N) % 3 == 1) {
        cout << ' ';
    }
    else
    {
        if(N / 3 == 0)
            cout <<'*';
        else
            star(x, y, N/3);
    }
}


int main(){
    int N;
    cin >> N;
    for(int x = 0; x < N; x++)
    {
        for(int y = 0; y < N; y++)
            star(x,y,N);
        cout << endl;
    }
}




