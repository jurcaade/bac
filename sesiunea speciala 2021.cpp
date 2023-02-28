sub 1.
  1. c
  2. b
  3. a
  4. c
  5. d
  
  2. a ****
     b 1, 158
     c #include <iostream>

using namespace std;

int main() {
    unsigned int m,n;
    int aux;
    cin>>m>>n;
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
        m=m+2;
        cout<<'*';
    }
    return 0;
}
d.
  citește m,n
 (numere naturale)
┌dacă m>n atunci
│ n→m
└■
┌dacă m%2=0 atunci
│ mm+1
└■
┌repeta 
│ mm+2
│ scrie ‘*’
└pana cand m>n

