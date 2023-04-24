sub 1
1.a
2.f(6)=f(5)-f(4)=5
  f(5)=f(3)-f(4)=2
  f(4)=(3)-f(2)=-3
  f(3)=f(1)-f(2)=-1
  f(2)=2
  f(1)=1
=> b
3.b
4.b
5. n(n-1)/2=m
  5 noduri pt un graf complet cu 10 muchii
  => raman 15 noduri + 1 =16 componente conexe
  c
 
 sub 2
  1. a) M3= 12/ 15 18 21 24/
        M4= 12/ 16 20 24/
     p=11
     p=12 s2=1
     p=15 s1=1
     p=16 s1=2
     p=18 s1=3
     p=20 s1=4
     p=21 s1=5
     p=24 s2=2
  s=5-2*2=1
  tip 1
  
  b) M3= (3,6,9,12,15/,18,21,24,27,30/)
     M5= (5,10,15/,20,25,30/,35,40,45..)
  pana la 25 s1=11 s2=1
  pana la 27 s1=12 s2=1 => rasp 27,28,29
  
  c
  #include <iostream>

using namespace std;

int main() {
    int m,n,p,q,s1,s2,s;
    cin>>m>>n>>p>>q;
    s1=0; s2=0;
    while (p<=q)
    {
        if (p%m==0 || p%n==0)
        s1++;
        
         if (p%m==0 && p%n==0)
        s2++;
        
        p++;
    }
    s=s1-2*s2;
    cout<<s;
}
  
