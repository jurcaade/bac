sub 1
  1.d
  2. 32100100
  f(3) tip 3 f(2) x=2 f(1) tip 1 x=0
  f(2) tip 2 f(1) x=1 f(0) tip 0
  f(1) tip 1 f(0) x=0 
  f(0) tip 0
b
3.c
4.a
5.b

sub 2
  1. n=2754578
  s=1
  c1=7 c2=5
  c1=5 c2=4
  c1=4 c2=5
  2-5<0 
  tip 1 275
  
  b) 2345 5432
  c) #include <iostream>

using namespace std;

int main() {
    int n,c1,c2,s;
    cin>>n;
    c1=n%10; n/=10; c2=n%10;
    if (c1==c2)
    s=0;
    else
    if (c1>c2)
    s=1;
    else
    s=-1;
    
    do
    {
        c1=n%10;
        n/=10;
        c2=n%10;
    }while((c1-c2)*s>0);
    
    cout<<s<<" "<<n;
    return 0;
}

d)
  citeşte n (număr natural, n>9)
c1n%10; n[n/10]; c2n%10
┌dacă c1=c2 atunci s0
│altfel
│┌dacă c1>c2 atunci s1
││altfel s-1
│└■
└■
c1n%10; n[n/10]; c2n%10
┌cat timp (c1-c2)*>0 executa
│ c1n%10; n[n/10]; c2n%10
└
scrie s,' ',n
