sub 1
  1.d
  2. f(2020,15) =f(2005,10)
  f(2005,10)=f(1995,5)
  f(1995,5)=f(1990,0)
  f(1990,0)=1990
c
3.{bentiță 40 , fileu 400, grip 30, manșete 30, mingi 10, rachetă 400, racordaj 70, șapcă 60}
1: (bentiță, fileu, grip, manșete)
2: (bentiță, fileu, șapcă)
3: (bentiță, grip, manșete, rachetă)
4: (bentita, racheta, sapca)
5: (fileu, grip, mingi, sapca)
b

4.b
5.a (6,2)

sub 2
  1. a) m=20950
  b) 40602 80204 20604
  c)#include <iostream>

using namespace std;

int main() {
    int n,m,c;
    cin>>n;
    m=0;
    do
    {
        c=n%10;
        n/=10;
        if (c==0)
        c=2;
        else
        {
            if (c%2==0)
            c=0;
        }
        m=m*10+c;
    }while(n!=0);
    
    cout<<m;
    return 0;
}

d)citeşte n (număr natural)
m0
n%10; n[n/10]
│┌dacă c=0 atunci c2
││altfel
││┌dacă c%2=0 atunci
│││c0
││└■
│└■
│ mm*10+c
┌cat timp (n!=0) executa
│ cn%10; n[n/10]
│┌dacă c=0 atunci c2
││altfel
││┌dacă c%2=0 atunci
│││c0
││└■
│└■
│ mm*10+c
└
scrie m


2. struct specie
{
  unsigned int cod;
  unsigned int nrExemplare;
  unsigned int varsta[10];
}s[20];
