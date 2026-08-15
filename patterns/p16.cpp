//Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// A
// BB
// CCC
// DDDD
// EEEEE
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern16(int n) {
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<=i;j++){
                char k='A'+i;
                cout<<k;
            }
            cout<<endl;
        }

    }
};
int main() {
    Solution obj;
    int n;
    cin>>n;
    obj.pattern16(n);
    return 0;
}

