//Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
//*****
//*   *
//*   *
//*   *
//*****
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern21(int n) {
        int i, j;

        for(i = 1; i <= n; i++) {

            if(i == 1 || i == n) {
                for(j = 1; j <= n; j++) {
                    cout << "*";
                }
            }
            else {
                cout << "*";

                for(j = 1; j <= n - 2; j++) {
                    cout << " ";
                }

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
    obj.pattern21(n);
}