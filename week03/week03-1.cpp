///week03-1.cpp 了解"文法糖"range-based for迴圈 在2011年的C++才能用
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(char c:s){
        if(c !='2'){
        cout << c <<"\n";
        }
    }
}
