sub 1
  1.a
  2.  a)
      x=1 y=2 z=6 
          y=3 z=5 tip 135* 
      x=2 y=3 z=4 tip 234*
      x=3 
  tip #
135*234*#
b) 6
c) citeşte n
 (număr natural)
 
┌pentru x<-1,[n/3] executa
│ yx+1
│┌cât timp y≤[n/3] execută
││ zn-x-y
││┌dacă z%2=x%2 atunci
│││ scrie x,y,z,’*’
││└■
││ yy+1
│└■
└■
scrie ’#’

d)#include <iostream>

using namespace std;

int main() {
   int n,x,y,z;
   cin>>n;
   x=1;
   while(x<=n/3)
    {   y=x+1;
       while(y<=n/3)
       {   z=n-x-y;
               if(z%2==x%2)
               cout<<x<<y<<z<<'*';
           y++;
       }
       x++;
}
cout<<'#';
}


sub 2
  1.d
  2.b
  3. struct meteo
  {
    unsigned int luna;
    unsigned int an;
    float temperatura[15];
  }m;

4.
   for(i=0;i<9;i++)
     for(j=0;j<9;j++) 
     if (i+j==8 || i+j==7 || i+j==9)
     a[i][j]=8;
    else
    a[i][j]=1;
    
    
