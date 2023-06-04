sub 1
  1.a
  2.f(102030)=20+f(10203)=2100
  f(10203)=20+f(1020)=2080
  f(1020)=20+f(102)=2060
  f(102)=20+f(10)=2040
  f(10)=2020
  c
  3. (0,1,2,3)
  8: 123
  9: 13
  10: 131
  11: 133
  12: 201 d
  4.b
  5.c
  
    sub 2
    1. a) n=12345
          p=1 m=0 k=0
    
    x=780
    c=0
    m=0*1+0=0 n=1234 p=10; k=1;

    x=921
    x=92
    c=2
    m=20 n=123 p=100 k=2
   
    x=4013
    x=40
    c=0
    m=20 n=12 p=1000 k=3
    
    x=75
    x=0
    c=2
    m=2020 n=1 p=10000 k=4
    
    x=100214
    x=10
    c=0
    m=2020 n=0 p=100000 k=5
      
      tip 2020
     
      b)   49 19 4
           49 29 1
      
      c)#include <iostream>

using namespace std;

int main() {
    int n,p,m,k,c,i,x;
    cin>>n;
    p=1; m=0; k=0;
    while(n!=0)
    {
        cin>>x;
        for (i=1;i<=k;i++)
        x/=10;
        
        if (x!=0)
        c=x%10;
        else
        c=n%10;
        
        m=c*p+m;
        n/=10;
        p*=10;
        k++;
        
        
    }
    cout<<m;
    return 0;
}

d)
  citeşte n (număr natural)
p1; m0; k0
┌cât timp n≠0 execută
│ citește x (număr natural)
│
│ x[x/p]
│
│┌dacă x≠0 atunci cx%10
││altfel cn%10
│└■
│ mc*p+m
│ n[n/10]
│ pp*10; kk+1
└■
scrie m

2.struct triunghi
{
  struct FaraNume
  {
  float x;
  float y;
  }A,B,C;
 }t;

3. a=VIcToriE
tip 8viCtORIe
  
  sub 3
  1.#include <iostream>

using namespace std;
void putere(int n, int &d, int &p)
{
    int dmax=0,pmax=0;
    d=2;
    while(n>1)
    {
        p=0;
        while(n%d==0)
        {
            n/=d;
            p++;
        }
        if (p>0)
        if (p>=pmax)
     {   pmax=p;
        dmax=d;
    }
        
        d++;
    }
    p=pmax;
    d=dmax;
    
    
}
int main() {
    int n,d,p;
    cin>>n;
    putere(n,d,p);
    cout<<d<<" "<<p;
    return 0;
}

2.
  #include <iostream>

using namespace std;

int main() {
    int n,k,y,z,a[101][101];
    cin>>n>>k;
    int m=n*k;
    z=k;
    
    for (int i=1;i<=n;i++)
    {
         y=i;
            for (int j=1;j<=m;j++)
           {
               a[i][j]=y;
                z--;
                if (z==0)
                {
                    y++;
                    z=k;
                }
             }
    }
   
     for (int i=1;i<=n;i++)
 {   for (int j=1;j<=m;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}
    return 0;
}

3.
  #include <iostream>

using namespace std;

int main() {
    int x,y,z;
    cin>>x>>y;
    cout<<y<<" "<<x<<" ";
    while(3*x-y>1)
    {
        z=3*x-y;
        cout<<z<<" ";
        y=x;
        x=z;
        
    }
    cout<<1<<" "<<1;
    return 0;
}

  
  
