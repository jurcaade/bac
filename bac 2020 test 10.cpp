sub 1.
1. d
2.  f(19,20)=f(18,21)=f(15,22)=f(8,23)=f(-7,24)=24
  b
3. {cal/,câine,papagal/,porumbel,ponei/}
cal caine
cal porumbel -- pt cuvant cu restrictii 2
caine caine
caine cal
caine papagal
caine porumbel
caine ponei  -- pt cuvant fara restrictii sunt 5
2+5+2+5+2=14
  d
4.a
5.a

  sub 2
1. i=7 j=16 s=16
   i=8 j=15 s=24
   i=9 j=14 s=38
   i=10 j=13 s=48
   i=11 j=12 s=60
   t=12 j=11
  tip 60
  i=10 j=21 s=10
  i=11 j=20 s=30
  i=12 j=19 s=42
  i=13 j=18 s=60
  i=14 j=17 s=74
  i=15 j=16 s=90

  21,20
  i=10 j=20 s=30
  i=12 j=18 s=60
  i=14 j=16 s=90
  i=16 j=14

c.
#include <iostream>

using namespace std;

int main() {
    int x,y,s,i,j;
  cin>>x>>y;
  if (x>y)
  {    
     
       x=x-y;
       y=y+x;
       x=y-x;
      
  }
i=x; j=y; s=0;
do
{
    s+=i%2*j+j%2*i;
    i++; j--;
    
    
}while(i<=j);

cout<<s;


    return 0;
}

d.
  citește x,y
 (numere naturale nenule)
┌dacă x>y atunci
| x→y
└■
ix; jy; s0

ss+(i%2)*j+(j%2)*i
 ii+1; jj-1
  
┌cat timp i<=j executa
|ss+(i%2)*j+(j%2)*i
│ ii+1; jj-1
└
scrie s





  
  
