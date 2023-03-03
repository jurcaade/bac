sub 1
  1. c
  2. d
  3. c
  4. b
  5. b
  
 sub 2
  1. a 120
  b 2020, 4039
  c. #include <iostream>

using namespace std;

int main() {
    unsigned int m,n,x;
    cin>>m>>n>>x;
    int s,pm,pn;
    s=0; pm=1; pn=1;
    do 
    {
        if (m%x==0)
     {   s+=m;
        pm=x;
    }
    if ((n%x==0) && (m!=n))
    {
        s+=n;
        pn=x;
    }
        m=m+pm;
        n=n-pn;
    }while (m>n);
    
    cout<<s;
    
    return 0;
}
d. citește m,n,x
 (numere naturale nenule, m≤n)
 s0; pm1; pn1
┌executa
│┌dacă m%x=0 atunci
││ ss+m; pmx
│└■
│┌dacă n%x=0 şi m≠n atunci
││ ss+n; pnx
│└■
│ mm+pm
│ nn-pn
└cat timp m<=n
 scrie s

2. struct parcare
{
  unsigned int id,numar,pret;
}p[20];

3. for (i=0;i<5;i++)
    if ((a[i][0]==2020) || (a[i][6]==2020))
      cout<<i<<" ";

sub 3
  1.
#include <iostream>

using namespace std;
void duplicare (int n, int &d)
{
    int p=1,s=0,ok=0;
    
    while (n>0)
    {
        if ((n%10)%2!=0)
        {
        s=s+(n%10*10+n%10)*p;
        p*=100;
        ok=1;
        }
        else
    {    s=s+n%10*p;
        p*=10;
    }
     
        n/=10;
        
    }
    if (ok==1)
    d=s;
    else
    d=-1;
    
}
int main() {
    int n,d;
    cin>>n;
    duplicare(n,d);
    cout<<d;
    return 0;
}




      






