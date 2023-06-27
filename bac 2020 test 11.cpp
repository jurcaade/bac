sub 1
1.d
2. {azalea/, begonia/, vriesea/, busuioc, ferigă}
a 6 a: (begonia, busuioc, vriesea)
a 7 a: (begonia, feriga, azalea)
a 8 a: (begonia, feriga, vrisea)
a 9 a: (vrisea, busuioc, azalea)
  => d
  3.f2020,2=1+f1010,2=2022
  f1010,2=1+f505,2=2021
  f505,2=2020
  => a

  4.b
  5. ne trb 5 noduri sa folosim toate muchiile
restul nodurilor componente conexe=> 16 c)

sub 2
1. n=45530 tip 10
  b) 111, 110, 100
  c)#include <iostream>

using namespace std;

int main() {
    int m,n,c;
    cin>>n;
    m=0;
    if (n==0)
        m=10;
    else
    do
    {
        c=n%10; n/=10;
        if (c>=m)
        m=c;
        else
        m=10;
        
    }while(n!=0);
        
        cout<<m;
        
    
    return 0;
}

d) citeşte n (număr natural)
m0
┌dacă n=0 atunci
│ m10
│altfel
│┌cat timp n!=0 executa
││ cn%10; n[n/10]
││┌dacă c≥m atunci
│││ mc
│││altfel
│││ m10
││└■
│└
└■
scrie m
