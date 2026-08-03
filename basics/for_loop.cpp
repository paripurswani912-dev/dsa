//Given two integers low and high, return the sum of all integers from low to high inclusive.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int forLoop(int low, int high) {
        int i,sum=0;
        for(i=low;i<=high;i++){
            sum+=i;}
        return sum;
        
    }
};
int main() {
    Solution obj;
    int low=0,high=0;
    cin>>low>>high;
    cout<<obj.forLoop(low,high);
    return 0;
}