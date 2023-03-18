sub 1.
  1.a
  2. f(4)=1/f(3)-2*f(2)=0-6=-6
     f(3)=1/f(2)-2*f(1)=0-2=-2
     f(2)=1/f(1)-2*f(0)=1+2=3
     f(1)=1/f(0)-2*f(-1)=1/-1-2*-1=-1+2=1
     f(0)=f(-1)=-1
=> d
  3.a
  4.c
  5.b
  
  sub 2.
  1. a 1535
     b 2399
     c#include <iostream>

using namespace std;

int main() {
    int x,y,z,a;
    cin>>x;
    y=0; z=1;
    do {
        a=x%10;
        
        if (a>5)
        y=y+z*5;
        else
        y=y+z*a;
        
        x/=10;
        z*=10;
        
    }while (x!=0);
    cout<<y;
    return 0;
}

d.
  citește x (nr natural)
y0
z1
-cat timp x!=0 executa
 ax%10
 -dacă a>5 atunci
 yy+z5
 altfel
 yy+za
 -
 x[x/10]
 zz10
-- sfarsit cat timp
scrie y
