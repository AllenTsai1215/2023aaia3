///week06-1.cpp std 出現好多次 stdio.h stdlib
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a;
    a.push_back(20);
    a.push_back(30);
    a.push_back(50);
    a.push_back(10);
    for(int i=0;i<a.size();i++){
        cout << a[i] << "\n";
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++) cout << a[i] << ' ';
}
