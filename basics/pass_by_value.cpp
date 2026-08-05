//Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    void reverse(vector<int>& arr){
        int left=0;
        int right=arr.size()-1;
        while (left < right){
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
            
        }
        
        
    }
};
int main() {
    Solution obj;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    obj.reverse(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}