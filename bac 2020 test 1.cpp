sub 1
  1.a
  2.f(102030)=20+f(10203)=2100
  f(10203)=20+f(1020)=2080
  f(1020)=20+f(102)=2060
  f(102)=20+f(10)=2040
  f(10)=2020
  c
  3. (0,1,2,3)
  8: 123
  9: 13
  10: 131
  11: 133
  12: 201 d
  4.b
  5.c
  
    sub 2
    1. a) n=12345
          p=1 m=0 k=0
    
    x=780
    c=0
    m=0*1+0=0 n=1234 p=10; k=1;

    x=921
    x=92
    c=2
    m=20 n=123 p=100 k=2
   
    x=4013
    x=40
    c=0
    m=20 n=12 p=1000 k=3
    
    x=75
    x=0
    c=2
    m=2020 n=1 p=10000 k=4
    
    x=100214
    x=10
    c=0
    m=2020 n=0 p=100000 k=5
      
      tip 2020
     
      b)   49 19 4
           49 29 1
      
      c)#include <iostream>

using namespace std;

int main() {
    int n,p,m,k,c,i,x;
    cin>>n;
    p=1; m=0; k=0;
    while(n!=0)
    {
        cin>>x;
        for (i=1;i<=k;i++)
        x/=10;
        
        if (x!=0)
        c=x%10;
        else
        c=n%10;
        
        m=c*p+m;
        n/=10;
        p*=10;
        k++;
        
        
    }
    cout<<m;
    return 0;
}
