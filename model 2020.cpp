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
