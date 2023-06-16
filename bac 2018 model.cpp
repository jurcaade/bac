sub 1
  1.a
  2. z=3 c=1 a=0 b=1 c=1
             a=1 b=1 c=2
             a=1 b=2 c=3
     3=3 tip 3
     z=4 c=3 a=2 b=3 c=5
    tip 5
     z=5 
     z=6 c=8
     z=7 
     z=8
  tip 8
     
  tip 3 5 8 
  
  b) sirul e 1 2 3 5 8 13 21 34 55 89..
  cea mai mica valorare: 21
  cea mai mare valoare: 33
    
  c)citeşte x,y

(numere naturale, x≤y)
b<-0
c<-1
┌pentru z<-x,y execută
│┌daca c<z atunci
|| repeta
││ a<-b
││ b<-c
││ c<-a+b
│└pana cand c>=z
│┌dacă z=c atunci
││ scrie z,’ ’
│└■
└■

d)#include <iostream>

using namespace std;

int main() {
    int x,y,b,c,z,a;
    cin>>x>>y;
    b=0; c=1;
    for (z=x;z<=y;z++)
    {
        while(c<z)
        {
            a=b;
            b=c;
            c=a+b;
        }
        if (z==c)
        cout<<z<<" ";
        
        
    }
}
  
