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
  b) 1110, 1100, 1000
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

2.  struct sera
{ unsigned int specie;
struct FaraNume
  {
char denumireStiintifica[21];
char denumirePopularea[21];
}specie[100];


}s;

3.
  #include <iostream>

using namespace std;

int main() {
    int a[8][8];
    
    for(int i=1;i<=7;i++)
    for (int j=1;j<=7;j++)
    cin>>a[i][j];
    
    int p=1;
     for (int j=1;j<=7;j++)
      p*=a[j][j];
      
      for(int i=7;i>=1;i--)
{    cout<<p<<" ";
     p=p/a[i][i];
       
}
    
    
    return 0;
}
