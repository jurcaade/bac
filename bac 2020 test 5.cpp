sub 1.
  1.a
  2. 121131211212111
  f(3) - f(2) 1211 tip 3 f(1) 1 tip 2 f(0) tip 1
  f(2) f(1) tip 1211
  f(1) f(0) tip 1
  => a
  3. {cămașă, cravată, pantaloni, pantofi, sacou, șosete}
camasa <- cravata
cravata <- sacou
sosete, pantaloni <- pantofi

prima :(cămașă, cravată, pantaloni, sacou, șosete, pantofi)
a 2 a: (cămașă, cravată, pantaloni, șosete, pantofi, sacou)
a 3 a: (cămașă, cravată, pantaloni, șosete, sacou, pantofi)
a 4 a: (cămașă, cravată, sacou, pantaloni, sosete, pantofi) 
a 5 a: (cămașă, cravată, sacou, șosete, pantaloni, pantofi)  
a 6 a: (cămașă, cravată, șosete, pantaloni, pantofi, sacou)
=> c

4. b
5.2020 noduri 200 elem nenule => 100 muchii
 n(n-1)/2=m
 n=15 folosim toate muchiile 
 2020-15=2005+1=2006
  => a
  
sub 2
  1. a n=100
  1<100 x=2 y=50
  2<50 x=4 y=25
  4<25 x=5 y=20
  5<20 x=10 y=10
  10=10 A
  tip D10
  // verfifica daca e patrat perfect
  
  
  b) 2,3,5,6,7
  c) #include <iostream>

using namespace std;

int main() {
   int n,x,y,d;
   cin>>n;
   x=1; y=n; d=2;
   while(x<y)
   {
       if (n%d==0)
       {
           x=d;
           y=n/d;
       }
       d++;
   }
   
   if (x==y)
   cout<<'D'<<x;
   else
   cout<<'N';
   return 0;
}

d)
  citește n
 (număr natural nenul)
x1; yn; d2
┌dacă sqrt(n)=int(sqrt(n)) atunci
│ scrie 'D',x
│altfel scrie 'N'
└■
  
  