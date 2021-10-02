/*
Collatz Conjecture in C++
C++によるコラッツ数列の計算
https://neguse-atama.hatenablog.com
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> collatz(int n){
    vector<int> r;
    r.push_back(n);
    while(n!=1){
        if(n%2==0){
            n/=2;
        }else{
            n*=3;
            n+=1;
        }
        r.push_back(n);
    }
    return r;
}
int main(void){
    int n;
    cin>>n;
    vector<int> v=collatz(n);
    int vs=v.size()-0;
    for(int i=0;i<vs;i++){
        cout<<v[i]<<((i==vs-1) ? "\n" : " ");
    }
    return 0;
}