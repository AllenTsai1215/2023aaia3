//Leetcode 幫你寫好 #include <iostream> 跟 #include <vector> 還有 using namespace std; 了
int main() {
    vector<int> A,B;
    int a,b;
    while(cin >> a >> b){
        A.push_back(a);
        B.push_back(b);
    }
    for(int i=0;i<A.size();i++){
        cout << A[i] << " ";
    }
}