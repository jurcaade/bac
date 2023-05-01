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

2.
   {F, O, R, M, A}
   {A, F, M, O, R}
AMOR
AMORF
AMR
AMRF

3.#include <iostream>

using namespace std;

int main() {
    int a[11][11];
    k=0
for (i=0; i<=9; i++)
 if (a[x][i]<0 && i%3==0) k++;
cout<<k;
    return 0;
}

sub 3
  1.
  #include <iostream>

using namespace std;

int dublu(int n)
{
    int aux=n, nr=0;
    while (n!=0)
    {
        nr++;
        n/=10;
    }
    int mij=nr/2+1,x=0,p=1;
    int nr1=0;
    if (nr%2!=0)
    while (aux!=0)
    {
        nr1++;
        x=x+aux%10*p;
        p*=10;
         
        if (nr1==mij)
      {  x=x+aux%10*p;
        p*=10;
    } 
    
        aux/=10;
    }
  else
    return -1;
   
   return x;
}
int main() {
    int n;
    cin>>n;
  cout<<dublu(n);
    return 0;
}

2.
  #include <iostream>
#include <cstring>
using namespace std;

int main() {
   char s[256], *p;
   cin.getline(s,256);
   p=strtok(s," ");
   int nr=0,nr2=0;
   while (p!=NULL)
   {
       int ok=0;
       for (int i=0;i<strlen(p);i++)
        if (p[i]>='0' && p[i]<='9')
    {    ok=1;
        nr2++;
   }
        
        if (ok==1)
        nr++;
        
       
       p=strtok(NULL," ");
   }
   cout<<nr<<" "<<nr2;
    return 0;
}

3.
  #include <iostream>

using namespace std;

int main() {
    int v[101], n,m,x,aux;
    cin>>n;
    for (int i=1;i<=n;i++)
 {
     cin>>x;
    v[i]=x;
}
cin>>m;
for (int i=n+1;i<=m+n;i++)
{
     cin>>x;
    v[i]=x;
}


    for (int i=1;i<=n+m-1;i++)
    for (int j=i+1;j<=n+m;j++)

        if (v[i]>v[j])
        {
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
        }

 for (int i=1;i<=n+m;i++)
  if(v[i]%3==0 && v[i]!=v[i-1])
 cout<<v[i]<<" ";

    return 0;
}
