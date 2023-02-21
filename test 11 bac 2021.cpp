sub 1
  1.c
  2.b
  3.a
  4.c
  5.d
 
  
  sub 2
  a. m=2
  n=9
  m=3
  m=5 *
  m=7 *
  m=9 *
  m=11 *
  tip ****
  b 1, 157
  c.
  #include <iostream>

using namespace std;

int main() {
    unsigned int m,n;
    cin>>m>>n;
    int aux;
    if (m>n)
    {
        aux=m;
        m=n;
        n=aux;
    }
    
    if (m%2==0)
    m=m+1;
    
    while (m<=n)
    {
        m+=2;
        cout<<"*";
    }
    return 0;
}
d. citește m,n
 (numere naturale)
┌dacă m>n atunci
│ n→m
└■
┌dacă m%2=0 atunci
│ mm+1
└■

repeta
│mm+2
│ scrie ‘*’
pana cand m>n


