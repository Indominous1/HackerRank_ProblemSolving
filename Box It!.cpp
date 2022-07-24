Problem Statement-
Design a class named Box whose dimensions are integers and private to the class. The dimensions are labelled: length l, breadth b, and height h.

The default constructor of the class should initialize l, b, and h to 0.

The parameterized constructor Box(int length, int breadth, int height) should initialize Box's l, b, and h to length, breadth and height.

The copy constructor Box(Box B) should set l, b, and h, to B's l, b, and h, respectively.

Apart from the above, the class should have 4 functions:

> int getLength() - Return box's length
> int getBreadth() - Return box's breadth
> int getHeight() - Return box's height
> long long CalculateVolume() - Return the volume of the box

Overload the operator < for the class Box. Box A < Box B if:
 > A.l < B.l
 > A.b < B.b and A.l == B.l
 > A.h < B.h and A.b == B.b and A.l == B.l
 
Overload operator << for the class Box().
  
If B is an object of class Box:
cout << B should print B.l, B.b and B.h on a single line separated by spaces.

For example,

              Box b1;                  // Should set b1.l = b1.b = b1.h = 0;
              Box b2(2, 3, 4);         // Should set b1.l = 2, b1.b = 3, b1.h = 4;
              b2.getLength();	         // Should return 2
              b2.getBreadth();         // Should return 3
              b2.getheight();	         // Should return 4
              b2.CalculateVolume();    // Should return 24
              bool x = (b1 < b2);	     // Should return true based on the conditions given
              cout<<b2;                // Should print 2 3 4 in order.

Constraints-
0 <= l, b, h <=10^5
Two boxes being compared using the < operator will not have all three dimensions equal.
  
  --------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
#include<bits/stdc++.h>......
  
class Box {
 private:
  int l, b, h;
 public:
  Box() {
    l= 0;
    b= 0;
    h= 0;
  }
  Box(int len, int bre, int hei) {
    l = len;
    b = bre;
    h = hei;
  }
  Box(const Box &B) {
    l = B.l;
    b = B.b;
    h = B.h;
  }
  int getLength() {
    return l;
  }
  int getBreadth() {
    return b;
  }
  int getHeight() {
    return h;
  }
  long long CalculateVolume() {
    return (long long)(b) * l * h;
  }
  bool operator<(Box &B) {
    if (l < B.l)
     {
      return true;
     } 
    else if (l == B.l && b < B.b)
        return true;
     else if (b < B.b && b == B.b && h < B.h) 
      {
          return true;
      }
    return false;
  }
};

ostream &operator<<(ostream &out, Box &B) {
  out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
  return out;
};

.......
