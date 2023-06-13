sub 1
  1. a
  2. f(20,2020)=1+f(20,f(20,101))=1+f(20,1)=1
     f(20,101)=1+f(20,f(20,5))=1+f(20,1)=1
    f(20,5)=1+f(f(4,5),5)=1+f(1,5)=1
  f(4,5)=1+f(4,f(4,1))=1+f(4,0)=1
  f(4,1)=0
  f(4,0)=0
  f(1,5)=0
  f(20,1)=0
  f(20,1)=0
  9 ori b)
  
  3. toate {făină, lapte, ouă}
    {ciocolată, dulceață, urdă}
 {cașcaval/, mărar/, frișcă//}

frisca cu ciocolata si dulceata
marar si cascaval doar cu urda

    a 5 a:  (făină, ouă, lapte, ciocolată, frișcă)
  a 6 a: (făină, ouă, lapte, dulceata, frișcă)
  a 7 a: (făină, ouă, lapte, urda, cascaval)
  => d
    
   4.c
    5.b
    
  sub 2
    1. n= 49335
    3<5 
    tip 3 
    3<9
    tip 3 3
    4<9
    tip 4 
    3 3 3 4 
    
    b) 1014, 1015, 1016, 1017
    
    c)
    #include <iostream>

using namespace std;

int main() {
    int n,c1,c2;
    cin>>n;
    do
    {
        c1=n%10; n/=10; c2=n%10;
        if (c1>c2)
        {
            c2=c1;
            c1=n%10;
        }
        while(c1<c2)
     {   cout<<c1;
        c2/=2;
    }
    }while(n>9);
    
    return 0;
}
  d)
    citeşte n (număr natural)
┌repetă
│ c1n%10; n[n/10]; c2n%10
│┌dacă c1>c2 atunci
││ c2c1; c1n%10
│└■
|  daca c1<c2 atunci
│┌repeta 
││ scrie c1
││ c2[c2/2]
│└pana cand c1>=c2
└până când n≤9

  2. struct poliedru
  {
    unsigned int NrVarfuri;
    float Muchie;
    struct FaraNume
    {
      float FataMuchie;
      float FataFata;
    }unghi;
  }p;
  
  
  3.s=optsprezece
    i=0 j=10
    s=opusprezdce
    s=opusqrdzdce

    
    sub 3
    1.#include <iostream>

using namespace std;
void generatoare(int n)
{
    int ok=0;
    for (int i=2;i<=n;i+=2)
    for (int j=1;j<=n;j++)
    if (i*j+i/j==n)
 {   cout<<i<<'-'<<j<<" ";
    ok=1;
}

if (ok==0)
cout<<"nu exista";
    
    
}
int main() {
    int n;
    cin>>n;
    generatoare(n);
    return 0;
}
