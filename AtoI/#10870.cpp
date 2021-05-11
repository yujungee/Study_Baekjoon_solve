
  #10870.cpp
  algoalgo

  Created by yujeong on 2021/05/09.


#include <iostream>
using namespace std;

int fivonacci(int n){

    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fivonacci(n-2) + fivonacci(n-1);

}

int main(){
    unsigned short int n;
    cin >>n;
    
    // S(n) = S(n-1) + S(n-2)
   cout << fivonacci(n);

    
    return 0;
    
}
