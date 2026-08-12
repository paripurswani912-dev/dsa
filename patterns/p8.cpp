//Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
//*********
// *******
//  *****
//   ***
//    *
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern8(int n) {
        int i, j;

        for (i = 0; i < n; i++) {

            for (j = 0; j < i; j++) {
                cout << " ";
            }

            for (j = 0; j < 2*(n-i)-1; j++) {
                cout << "*";
            }

            cout << endl;
        }

    }
};
int main() {
    Solution obj;
    int n;
    cin >> n;
    obj.pattern8(n);
    return 0;
}