sub 1
  1. d
  2. a 14 28
  b 11 19 5
  c citeşte m,n,x
 (numere natural nenule, m<n)
 p0
// daca m<n si p=0 atunci
┌repeta 
│┌dacă m%x=0 şi n%x=0 atunci
││ px
││altfel
││┌dacă m%x=0 atunci
│││ nn-1
│││altfel
│││ mm+1
││└■
│└■
└pana cand m>=n sau p!=0
 scrie m,’ ’,n 

d#include <iostream>

using namespace std;

int main() {
   int m,n,x,p;
   p=0;
   cin>>m>>n>>x;
   while (m<n && p==0)
   {
       if (m%x==0 && n%x==0)
       p=x;
       else
       if (m%x==0)
       n--;
       else
       m++;
   }
   
   cout<<m<<" "<<n;
}
