sub 1
  1.b
  2.d
  3.b
  4.c
  5.a

  sub 2
  1.a 1203
    b 231
  c
  #include <iostream>

using namespace std;

int main() {
    int n,m,p,u;
    cin>>n;
    m=0; p=1;
    while (n>0)
    {
        u=n%10;
        if (u<=3)
   {     m=u*p+m;
        p*=10;
    }
    n/=10;
    }
    cout<<m;
    return 0;
}

d.
  Citește n (numar natural)
m0; p1;
executa
 un%10
 dacă u<=3 atunci mu*p+m
 pp*10
cat timp n>0
 n[n/10]

Scrie m;
