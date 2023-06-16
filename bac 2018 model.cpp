sub 1
  1.a
  2. z=3 c=1 a=0 b=1 c=1
             a=1 b=1 c=2
             a=1 b=2 c=3
     3=3 tip 3
     z=4 c=3 a=2 b=3 c=5
     z=5 c=5 a=3 b=5 c=8
     
  tip 3
  
  b) sirul e 1 2 3 5 8 12 20 32 52 84..
  cea mai mica valorare: 20
  cea mai mare valoare: 31
    
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
  
