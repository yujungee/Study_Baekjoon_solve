#include <iostream>
#include <string>
using namespace std;
int main() {
    string words="";
    getline(cin, words);
    int count = 1;
    if(words.length() == 1 && words[0] == ' ') {count = 0; }
    if(words[0] == ' ') words = words.substr(1);     // 시작 공백
    if(words[words.length()-1] == ' ') words = words.substr(0, words.length()-1); // 끝 공백
    for(int i = 0; i < words.length(); i++)
    {
        if(words[i] == ' ')
            count++;
    }
    cout << count;
    return 0;
}
