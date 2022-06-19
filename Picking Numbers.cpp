Problem Statement-
Given an array of integers, find the longest subarray where the absolute difference between any two elements is less than or equal to 1.

Example-
a=[1,1,2,2,4,4,5,5,5]
There are two subarrays meeting the criterion:[1,1,2,2] and [4,4,5,5,5]. The maximum length subarray has 5 elements.

Function Description-
Complete the pickingNumbers function in the editor below.

pickingNumbers has the following parameter(s):
int a[n]: an array of integers

Returns-
int: the length of the longest subarray that meets the criterion

Input Format-
The first line contains a single integer n, the size of the array a.
The second line contains n space-separated integers, each an a[i].

Constraints-
2<=n<=100
0<a[i]<100
The answer will be >=2.
  
Sample Input 0-
6
4 6 5 3 3 1
Sample Output 0-
3

Explanation 0-
We choose the following multiset of integers from the array:{4,3,3}. Each pair in the multiset has an absolute difference <=1 (i.e.,|4-3|=1 and |3-3|=0),
so we print thenumber of chosen integers,3, as our answer.

Sample Input 1-
6
1 2 2 3 1 2
Sample Output 1-
5
  
Explanation 1-
We choose the following multiset of integers from the array:{1,2,2,1,2}. Each pair in the multiset has an absolute difference <=1(i.e.,|1-2|=1,|1-1|=0, and |2-2|=0), 
so we print the number of chosen integers,5, as our answer.
 ----------------------------------------------------------------------------------------------------------------------------------------------------------------
  
Solutiom-
#include <iostream>
#include <algorithm>
#include <vector>

int picking_numbers(std::vector<int>& array)
{
    std::sort(array.begin(), array.end());

    int result = 0;
    int count = 1;
    int subarray_first_element = array[0];

    for (int i = 1; i < array.size(); ++i)
    {
        if (subarray_first_element == array[i] || subarray_first_element + 1 == array[i])
        {
            count++;
        }
        else
        {
            if (count > result)
            {
                result = count;
            }
            count = 1;
            subarray_first_element = array[i];
        }
    }

    if (count > result)
    {
        result = count;
    }
    return result;
}

int main()
{
    int size_of_array;
    std::cin >> size_of_array;
    std::vector<int> array(size_of_array);

    for (int i = 0; i < size_of_array; ++i)
    {
        std::cin >> array[i];
    }

    int max_count = picking_numbers(array);
    std::cout << max_count << "\n";
}
