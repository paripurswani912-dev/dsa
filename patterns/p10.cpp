//Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
//*
//**
//***
//****
//*****
//****
//***
//**
//*
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern10(int n) {
        int i, j;

        for (i = 0; i < 2 * n - 1; i++) {

            int stars = i + 1;

            if (i >= n) {
                stars = 2 * n - i - 1;
            }

            for (j = 0; j < stars; j++) {
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
    obj.pattern10(n);
    return 0;
}