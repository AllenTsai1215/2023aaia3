///week03-1.cpp �F��"��k�}"range-based for�j�� �b2011�~��C++�~���
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
