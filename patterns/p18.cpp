//Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
//E 
//D E 
//C D E 
//B C D E 
//A B C D E
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern18(int n) {
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<=i;j++){
                int l=n-1-i+j;
                char k='A'+l;
                cout<<k<<' ';
            }
            cout<<endl;
        }

    }
};
int main() {
    Solution obj;
    int n;
    cin >> n;
    obj.pattern18(n);
    return 0;
}