sub 1
  1.a
  2.  f(6)--f(5)-f(4)=5
      f(5)--f(3)-f(4)=2
      f(4)--f(3)-f(2)=-3
      f(3)--f(1)-f(2)=-1
      f(2)=2
      f(1)=1
=> b
3.b
4.b
5. 5 noduri pt o componenta conexa- restul de noduri sunt izolate 
15+1=16 c

sub 2
  a. m=4 n=3 
  p=11 
  p=12 s2=1 s1=1
  p=15 s1=2
  p=16 s1=3
  p=18 s1=4
  p=20 s1=5
  p=21 s1=6
  p=24 s2=2 s1=7
  p=25 
  s=7-2*2=3
  
  b s1: pt 3 5 6 9 10 12 15 18 20 21 24 25
    s2: pt 15
   s1 =12 s2=1
      s=12-2*1=10

      => pana la 25,26
      
      c.#include <iostream>

using namespace std;

int main() {
    int m,n,p,q,s1,s2,s;
    cin>>m>>n>>p>>q;
    s1=0; s2=0;
    while (p<=q)
    {
        if (p%m==0 || p%n==0)
        s1=s1+1; 
      if (p%m==0 && p%n==0)
        s2=s2+1;
       
    
        
        p++;
    }
  s=s1-2*s2;
    cout<<s;
    return 0;
}

d.
  citeşte m,n,p,q
 (numere naturale nenule, p≤q)
 s10; s20
┌pentru i<-p,q execută
│┌dacă p%m=0 sau p%n=0 atunci
││ s1s1+1
│└■
│┌dacă p%m=0 şi p%n=0 atunci
││ s2s2+1
│└■
│ 
└■
 ss1-2*s2
 scrie s
