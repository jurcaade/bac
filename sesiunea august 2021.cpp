sub 1.
  1. d
  2. f(1234) r 0*4*f(123) =0
  a.
  3. a 5 a 123
     a 6 a 1230 ---a
  4.b
  5.c
 
  sub 2
  1. a 3 4 6 8 15 
  b 4 2 3 
  c
  #include <iostream>

using namespace std;

int main() {
   unsigned int n,x,y;
   cin>>n>>x>>y;
   int ok,i;
   ok=0;
   for (i=1;i<=n;i++)
   {
       if ((i%x==0 && i%y!=0) || (i%x!=0 && i%y==0))
    {   cout<<i<<" ";
       ok=1;
   }
       
   }
   if (ok==0)
   cout<<0;
}

d.
  citește n,x,y
 (numere naturale nenule, x≤n, y≤n)
 ok0 i=1
┌cat timp i<=n executa
│┌dacă (i%x=0 și i%y≠0) sau
││ (i%x≠0 și i%y=0) atunci
││ scrie i, ' '
││ ok1
│└■
| i=i+1
└■
┌dacă ok=0 atunci scrie 0
└■
