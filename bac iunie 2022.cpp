sub 1.
  1.c
  2.d
  3.a
  4.b
  5.c

  
  sub 2
  1.a) n=56
  i=2 k=0
 pt i=2
  n=56 k=1
  n=28 k=2
  n=14 k=3
  n=7 
 pt i=7
  k=4
  tip 4
  
  b) 11,13
 c) #include <iostream>

using namespace std;

int main() {
   int n,i,k;
   cin>>n;
   i=2; k=0;
   while(n>=i)
 {  while(n%i==0)
     {  k++;
       n/=i;
     }
        if (i==2)
        i++;
        else
        i+=2;
    }
   cout<<k;
}
