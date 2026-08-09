//Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
//1
//22
//333
//4444
//55555
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern4(int n) {
        int i,j;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                cout<<i;
            }
            cout<<endl;
        }

    }
};
int main() {
    Solution obj;
    int n;
    cin>>n;
    obj.pattern4(n);
    return 0;
}