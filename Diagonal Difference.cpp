Problem Statement-
Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix arr is shown below:
1 2 3
4 5 6
9 8 9  

The left-to-right diagonal = . The right to left diagonal = . Their absolute difference is .

Function description-

Complete the diagonalDifference function in the editor below.
diagonalDifference takes the following parameter:

int arr[n][m]: an array of integers
Return-
int: the absolute diagonal difference

Input Format-
The first line contains a single integer,n, the number of rows and columns in the square matrix arr.
Each of the next n lines describes a row,arr[i], and consists of  space-separated integers arr[i][j].

Constraints-
-100<=arr[i][j]<=100

Output Format-
Return the absolute difference between the sums of the matrix's two diagonals as a single integer.

Sample Input-
3
11 2 4
4 5 6
10 8 -12

Sample Output-
15

Explanation-
The primary diagonal is:

11
   5
     -12
Sum across the primary diagonal: 11 + 5 - 12 = 4

The secondary diagonal is:

     4
   5
10
Sum across the secondary diagonal: 4 + 5 + 10 = 19
Difference: |4 - 19| = 15
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,s1=0,s2=0;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
            s1+=a[i][i];
    }
    int t=0,s=n-1;
    while(t<n && s>=0)
    {
        s2+=a[t][s];
        t++;
        s--;
    }
    s=abs(s1-s2);
    cout<<s;
}
