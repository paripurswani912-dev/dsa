//Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
//*****
//*****
//*****
//*****
//*****
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern1(int n) {
        int i;
        for(i=0;i<n;i++){
            cout<<"*****"<<endl;
        }

    }
};
int main() {
    Solution obj;
    int n;
    cin>>n;
    obj.pattern1(n);
    return 0;
}