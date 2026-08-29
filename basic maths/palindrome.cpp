//You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int n) {
        int revNum = 0;
        int dup = n;

        while (n > 0) {
            int ld = n % 10;
            revNum = (revNum * 10) + ld;
            n = n / 10;
        }

        return dup == revNum;
    }
};
int main() {
    Solution sol;
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (sol.isPalindrome(n)) {
        cout << n << " is a palindrome number." << endl;
    } else {
        cout << n << " is not a palindrome number." << endl;
    }

    return 0;
}