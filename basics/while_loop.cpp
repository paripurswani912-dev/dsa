//Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.
#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int whileLoop(int d) {
        int sum=0,i=0,count=0;
        while(count<50){
            i=i+1;
            if(i%10==d){
                sum+=i;
                count+=1;
            }
            
        }
        return sum;
        // Your code goes here  
    }
};
int main() {
    Solution obj;
    int d;
    cin>>d;
    cout<<obj.whileLoop(d);
    return 0;
}