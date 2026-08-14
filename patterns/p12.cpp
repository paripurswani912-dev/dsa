//Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
//1        1
//12      21
//123    321
//1234  4321
//1234554321
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern12(int n) {
        int i,j,k=2*(n-1);
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                cout<<j;}
            for(j=1;j<=k;j++){
                cout<<" ";}
            for(j=i;j>=1;j--){
                cout<<j;
            }     
            cout<<endl;
            k-=2;   
            
        }

    }
};
int main() {
    Solution obj;
    int n;
    cin>>n;
    obj.pattern12(n);
    return 0;
}