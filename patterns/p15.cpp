//Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
//ABCDE
//ABCD
//ABC
//AB
//A
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern15(int n) {
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<n-i;j++){
                char k='A'+j;
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
    obj.pattern15(n);
    return 0;
}