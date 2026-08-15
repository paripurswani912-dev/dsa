//Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
//    A
//   ABA
//  ABCBA
// ABCDCBA
//ABCDEDCBA
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern17(int n) {
        int i, j;

        for(i = 1; i <= n; i++) {

            // spaces
            for(j = 1; j <= n-i; j++) {
                cout << " ";
            }

            char k = 'A';

            // alphabets
            for(j = 1; j <= 2*i-1; j++) {

                cout << k;

                if(j < i) {
                    k++;
                }
                else {
                    k--;
                }
            }

            cout << endl;
        }
    }
};
int main() {
    Solution obj;
    int n;
    cin >> n;
    obj.pattern17(n);
    return 0;
}