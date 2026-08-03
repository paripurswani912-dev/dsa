//Given an integer marks, print the grade of the student based on the following criteria:
//Grade A: marks >= 90  
//Grade B: marks >= 70 and marks < 90
//Grade C: marks >= 50 and marks < 70       
//Grade D: marks >= 35 and marks < 50
//Fail: marks < 35
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void studentGrade(int marks) {

        if(marks>=90){
            cout<<"Grade A";
        }
        else if(marks>=70){
            cout<<"Grade B";
        }
        else if(marks>=50){
            cout<<"Grade C";
        }
          else if(marks>=35){
            cout<<"Grade D";
        }
        else{
            cout<<"Fail";
        }


    }
};
int main() {
    Solution obj;
    int marks;
    cin>>marks;
    obj.studentGrade(marks);
    return 0;
}