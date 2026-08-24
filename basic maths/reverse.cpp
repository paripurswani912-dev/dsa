//You are given an integer n. Return the integer formed by placing the digits of n in reverse order.
#include <iostream>
using namespace std;
class Solution {
public:
    int reverseNumber(int n) {
         int revNum = 0;

        // Loop until all digits are processed
        while (n > 0) {
            // Get the last digit
            int lastDigit = n % 10;

            // Append it to the reversed number
            revNum = revNum * 10 + lastDigit;

            // Remove the last digit from n
            n = n / 10;
        }

        // Return the reversed number
        return revNum;
    }
};
int main() {
    int n;
    cin >> n;

    Solution obj;
    cout << obj.reverseNumber(n);

    return 0;
}