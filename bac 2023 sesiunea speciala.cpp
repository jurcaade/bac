sub 1.
  1.c
  2.  f(35,3)=2+10*f(11,3)=1022
      f(11,3)=2+10*f(3,3)=102
      f(3,3) =0+10*f(1,3)=10
      f(1,3) =1+10*f(0,3)=1
      f(0,3) =0
=> a
3.d
4. {A, M, U, R, G}
R inaintea lui A si M
GURMA -> GRAMU
=> b
5.c

sub 2.
  1. a) 233223222 6 de 2
  b) x=4
  2333223322232222 10 de 2 => 1+2+3+4
  1+2+3+4+5+6=21 apartine intervalului => 6,7,8,9
  c)#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
    if (j<=i)
    cout<<2;
    else
    cout<<3;
    return 0;
}

d)
  citește n
 (număr natural nenul)
  i=1
┌cat timp i<=n execută
│┌pentru j1,n execută
││┌dacă j≤i atunci
│││ scrie 2
│││altfel
│││ scrie 3
││└■
│└■
| i=i+1
└■

2. 4,5,6,7
3.for(int k=strlen(s)-1;k>=0;k--)
    if (s[0]==s[k])
  {      for (int i=0;i<=k;i++)
        cout<<s[i];
        cout<<" ";
  }

sub 3
  1.
  #include <iostream>

using namespace std;
void Putere(int n, int &x, int &p)
{
  int aux,xgasit=0,px;
   aux=n; p=0;
   x=2;
   
      while(xgasit==0)
       { 
       n=aux;
       p=0;
       while(n%x==0)
       {
           p++;
           n/=x;
       }
        if(n==1)
        { 
            xgasit=x;
            px=p;  
        }
        x++;
       } 
   
   x=xgasit;
   p=px;
}
int main() {
    int n,x,p;
    cin>>n;
    Putere(n,x,p);
    cout<<x<<" "<<p;
    return 0;
}

2.#include <iostream>

using namespace std;

int main() {
    int n,a[21][21],v[21];
    cin>>n;
    for (int i=1;i<=n;i++)
     cin>>v[i];
     
     for (int j=1;j<=n;j++)
     a[1][j]=v[j];
     
      for (int i=2;i<=n;i++)
       for (int j=1;j<=n;j++)
       if (i+j>n+1)
       a[i][j]=-1;
       else
       {
           a[i][j]=(a[i-1][j]+a[i-1][j+1])%100;
       }
       
         for (int i=1;i<=n;i++)
 {      for (int j=1;j<=n;j++)
       cout<<a[i][j]<<" ";
       cout<<endl;
}
    return 0;
}

3.#include <iostream>

using namespace std;

int main() {
    int x,y,z,mini=1000,maxi=0,ok=0;
    cin>>x>>y;
    int aux;
    if (x>y)
    {
    aux=x;
    x=y;
    y=aux;
    }
    int nr=2;
    while (cin>>z)
    {
        nr++;
        if (z<x)
        x=z;
        if (z>y)
        y=z;
        
        if (z>x && z<y)
        {
            if (nr<mini)
            mini=nr;
            if (nr>maxi)
            maxi=nr;
            ok=1;
        }
    }
    if (ok==0)
    cout<<"nu exista";
    else
    cout<<mini<<" "<<maxi;
    return 0;
}
