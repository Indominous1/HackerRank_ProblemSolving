Problem Statement-
HackerLand University has the following grading policy:
Every student receives a grade in the inclusive range from 0 to 100.
Any  less than 40 is a failing grade.
  
Sam is a professor at the university and likes to round each student's grade according to these rules:
->If the difference between the grade and the next multiple of 5 is less than 3, round grade up to the next multiple of 5.
->If the value of  is less than 38, no rounding occurs as the result will still be a failing grade.
  
Examples-
->grade=84 round to  (85 - 84 is less than 3)
->grade=29 do not round (result is less than 40)
->grade=27 do not round (60 - 57 is 3 or higher)
Given the initial value of grade for each of Sam's n students, write code to automate the rounding process.

Function Description-
Complete the function gradingStudents in the editor below.
  
gradingStudents has the following parameter(s):
int grades[n]: the grades before rounding

Returns-
int[n]: the grades after rounding as appropriate

Input Format-
The first line contains a single integer, n, the number of students.
Each line i of the n subsequent lines contains a single integer, grade[i].

Constraints-
1<=n<=60
0<=grade[i]<=100

Sample Input 0:
4
73
67
38
33
Sample Output 0:
75
67
40
33
Explanation 0:
Student  received a , and the next multiple of  from  is . Since , the student's grade is rounded to .
Student  received a , and the next multiple of  from  is . Since , the grade will not be modified and the student's final grade is .
Student  received a , and the next multiple of  from  is . Since , the student's grade will be rounded to .
Student  received a grade below , so the grade will not be modified and the student's final grade is .
  
Solution-
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,op,diff;
    cin>>n;
    int gr[n];
    for (int i=0;i<n;i++)
    {
        cin>>gr[i];
    }
    for (int i=0;i<n;i++)
{   op=gr[i]/5;
    op+=1;
    diff=(op*5)-gr[i];
    if(gr[i]>=38 && diff<3)
    {
        cout<<(op*5)<<endl;
    }
    else if(gr[i]<38)
    {
        cout<<gr[i]<<endl;
    }
    else if(diff>=3)
    {
        cout<<gr[i]<<endl;
    }
}
    return 0;
}
