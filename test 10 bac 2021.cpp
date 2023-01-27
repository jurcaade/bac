sub 1
  1. b
  2.++++12+12345+ => c
  afis(12345)
  tip +
  12345>0
  afis(12)----------> tip +
  tip 12345          12>0 A
   tip +             afis(0)----------> tip +
                      tip 12             0>0 F
                      tip +              tip +
  
3. b
4. d
5. c

sub 2.
1. a. x=2 y=9
2<9 A
x=-7 y=2 x=9
9>=2 A
tip A
x=7
tip B
tip A
tip B
tip A
tip B
tip A
tip B
1>=2 F
tip ABABABAB

b. 13, 14

c. #include <iostream>

using namespace std;

int main() {
    unsigned int x,y;
    cin>>x>>y;
    if (x<y)
    {
        x=x-y;
        y=x+y;
        x=y-x;
    }
    
    while (x>=y)
    {
        cout<<'A';
        x=x-y;
        if (x%2==0)
        cout<<'A';
        else
        cout<<'B';
        
    }
    return 0;
}

d.citeşte x,y (numere naturale)
┌dacă x<y atunci
│ xx-y; yx+y; xy-x
└■
┌repeta 
│ scrie ’A’
│ xx-y
│┌dacă x%2=0 atunci scrie ’A’
││altfel scrie ’B’
│└■
|pana cand x<y
└■

  
