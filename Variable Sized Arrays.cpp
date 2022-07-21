Problem Statement-
Consider an n-element array,a, where each index i in the array contains a reference to an array of ki integers (where the value of ki varies from array to array). See 
the Explanation section below for a diagram.

Given a, you must answer q queries. Each query is in the format i j, where i denotes an index in array a and j denotes an index in the array located at a[i]. For each 
query, find and print the value of element j in the array at location a[i] on a new line.

Click here to know more about how to create variable sized arrays in C++.

Input Format-
The first line contains two space-separated integers denoting the respective values of n (the number of variable-length arrays) and q (the number of queries).
Each line i of the n subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the k-element array located at a[i].
Each of the q subsequent lines contains two space-separated integers describing the respective values of i (an index in array a) and j (an index in the array 
referenced by a[i]) for a query.

Constraints-
>  1 <= n <= 10^5
>  1 <= q <= 10^5
>  1 <= k <= 3*10^5
>  n <= k <= 3*10^5
>  0 <= i < n
>  0 <= j < k
>  All indices in this challenge are zero-based.
>  All the given numbers are non negative and are not greater than 10^6

Output Format-
For each pair of i and j values (i.e., for each query), print a single integer that denotes the element located at index j of the array referenced by a[i]. There 
should be a total of q lines of output.

Sample Input-
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
  
Sample Output-
5
9
  
Explanation-
The diagram below depicts our assembled Sample Input:


We perform the following q=2 queries:

1. Find the array located at index i=0, which corresponds to a[0]=[1,5,4]. We must print the value at index j=1 of this array which, as you can see, is 5.
2. Find the array located at index i=1, which corresponds to a[1]=[1,2,,8,9,3]. We must print the value at index j=3 of this array which, as you can see, is 9.

  -----------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
    vector<vector<int>> v;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        vector<int> v1;
        for(int j=0;j<m;j++)
        {
            int d;
            cin>>d;
            v1.push_back(d);
        }
        v.push_back(v1);
    }   
    for(int k=0;k<q;k++)
    {
        int i,j;
        cin>>i>>j;
        cout<<v[i][j]<<endl;
    }
    return 0;
}
