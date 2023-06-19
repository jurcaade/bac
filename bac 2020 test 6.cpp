sub 1
  1.c
  2.c
  3.a
  4.d
  5.b
 
sub 2
  1. r= -1 4 -6 20 -32 72 -x x -x x
  a) n=7
  i=1 x=0 y=1 j=1 1>0 nr=1
  i=2 r=-1 x=1 y=-1 j=2 -1>0 F
  i=3 r=-1 x=1 y=-1 j=2 r=4 x=-1 y=4 j=3 4>0 nr=2
  i=4 r=-1 x=1 y=-1 j=2 r=4 x=-1 y=4 j=3 r=-2-4=-6
  nr creste la i nr impar
  la 1,3,5,7 => nr=4
  tip 4
  
  b) 19,20
  
  c)#include <iostream>

using namespace std;

int main() {
   int n,nr,x,y,j,r,i;
   cin>>n;
   nr=0; i=1;
   while(i<=n)
   {
       x=0; y=1; j=1;
       while(j<i)
       {
           r=2*x-y;
           x=y;
           y=r;
           j++;
           
       }
       i++;
       if (y>0)
       nr++;

       
   }
   cout<<nr;
}
  
