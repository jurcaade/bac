sub 1
  1. c
  2. f2(41382) = f1(2)+f2(4138)=8
     f1(2)=2
     f2(4138)=f1(8)+f2(413)=6
     f1(8)=2
     f2(413)=f1(3)+f2(41)=4
     f1(3)=1 
     f2(41)=f1(1)+f(4)=3
     f(1)=1
     f(4)=2
  b
  3. bine -> b e i n
     4 bine 
     5 bnei
     6 bnie
     7 ebin
     d
 4. a
 5. b

sub 2
  1 a 27596
    b 572 352 10 0
    c #include <iostream>

using namespace std;

int main() {
    unsigned int x;
    cin>>x;
    int n=0,y,c;
    while (x!=0)
    {
        y=x; c=0;
        while (y>0)
        {
            if (y%10>c)
                c=y%10;
            
            y/=10;
        }
        n=n*10+c;
        cin>>x;
        
    }
    cout<<n;
    return 0;
}
