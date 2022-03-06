Problem Statement-
Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

Example-
-> S='12:01:00PM'
Return '12:01:00'.

->S='12:01:00AM'
Return '00:01:00'.

Function Description-
Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.

timeConversion has the following parameter(s):

string s: a time in 12 hour format

Returns-
string: the time in 24 hour format

Input Format-
A single string  that represents a time in 12-hour clock format (i.e.: hh:mm:ssAM or hh:mm:ssPM).

Constraints-
All input times are valid

Sample Input 0
07:05:45PM

Sample Output 0
19:05:45
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hr,min,sec;
    string s;
    getline(cin,s);
    string Hr=s.substr(0,2);
    string Min=s.substr(3,2);
    string Sec=s.substr(6,2);
    string ap=s.substr(8,2);
    hr=stoi(Hr);

    if(ap=="PM")
    {
        if(hr!=12){
        cout<<hr+12<<":"<<Min<<":"<<Sec;
    }
    else{
        cout<<"12:"<<Min<<":"<<Sec;
    }
    }
    else if (ap=="AM") {
        if(hr!=12){   
      cout<<Hr<<":"<<Min<<":"<<Sec;
    }
    else {
    cout<<"00:"<<Min<<":"<<Sec;
    }
    }
        return 0;
}
