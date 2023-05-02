sub 1
  1. c
  2.
  a)
  x=8 s=8*8=64
    x=1 s=1*1=65
  x=0
  x=2 s=2*2=69
  tip 69
  b) 9 - 81
    8 - 64
    7 - 49
    6 -36
    s= 100
  86, 68, 860, 680 
  c)
  citeşte n
 (număr întreg nenul)
┌dacă n<0 atunci
│ n-n
└■
 s0
┌repetă
│ xn%10
│ sx*x
│ n[n/10]
└până când n=0
scrie s

d)
  #include <iostream>

using namespace std;

int main() {
    int n,s,x;
    cin>>n;
    if (n<0)
    n=-n;
    
    s=0;
    do {
        x=n%10;
        for (int i=1;i<=x;i++)
        s+=x;
        
        n/=10;
        
    }while (n!=0);
    cout<<s;
    return 0;
}
