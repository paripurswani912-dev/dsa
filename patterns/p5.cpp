//Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
//*****
//****
//***
//**
//*
#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    void pattern5(int n) {
        int i;
        int j;
        for(i=1;i<=n;i++){
            for(j=1;j<=n+1-i;j++){
                cout<<"*";
            }
            cout<<endl;
        }


    }
};
int main() {
    Solution obj;
    int n;
    cin>>n;
    obj.pattern5(n);
    return 0;
}