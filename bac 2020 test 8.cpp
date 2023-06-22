sub 1
  1.b
  2.578
    5 55 555 557 558 57 577 578 58 7
  a
  3.c
  4.d
  5.b
  
  sub 2
  1. x=201920 y=20 c=0 
     x=20192 y=20 c=2 0<2 A y=202
     x=2019 y=202 c=9 2<9 A y=2020+9 y=2029
     x-201 y=2029 c=1 9<1 F y=20290-1 y=20289
     x=20 y=20289 c=0
     x=2 y=20289 c=2 9<2 F y=202890-2 y=2022888
  tip 202888
  
  b) 101, 110
  c) #include <iostream>

using namespace std;

int main() {
    int x,y,c;
    cin>>x>>y;
    do
    {
        c=x%10;
        x=x/10;
        if (c!=0)
       { if (y%10<c)
        y=y*10+c;
        else
        y=y*10-c;
       }
    }while(x!=0);
    
    
    cout<<y;
    return 0;
}


d)
  citește x,y
 (numere naturale)
  cx%10
│ x[x/10]
│┌dacă c≠0 atunci
││┌dacă y%10<c atunci
│││ yy*10+c
│││altfel
│││ yy*10-c
││└■
┌cat timp (x!=0) executa
│ cx%10
│ x[x/10]
│┌dacă c≠0 atunci
││┌dacă y%10<c atunci
│││ yy*10+c
│││altfel
│││ yy*10-c
││└■
│└■
└
scrie y


2. lant elementar {1,6,3,5}
ciclu neelementar {1,6,3,5,6,1}


3.s=ou
tip ou
s=stil rtil roil rosl rosu
s[0] s=r
s[1] t=r+3*-1 t=o
s[2] i=s
s[3] l=r+3 l=u
tip rosu
ou
rosu

sub 3
  1.#include <iostream>

using namespace std;
int suma(int &n)
{
    int d=2,p=0,s=0;
    while(n>1)
    {
        p=0;
       while(n%d==0)
     {
         n/=d;
       p++;
    }
        if (p>0)
        s+=d;
        
        d++;
    }
    return s;
    
    
    
}
int main() {
    int n;
    cin>>n;
    cout<<suma(n);
    return 0;
}

2. la stanga
  #include <iostream>

using namespace std;

int main() {
    int n,k,a[21][21],aux=0;
    cin>>n>>k;
    for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
    cin>>a[i][j];
    
     aux=a[k][1];
    for (int j=1;j<=n;j++)
    if (k>j)
   {
       a[k][j]=a[k][j+1];
       
       if (j==k-1)
       a[k][j]=aux;
   
   }
    
    for (int i=1;i<=n;i++)
 {   for (int j=1;j<=n;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}
    return 0;
}

la dreapta
#include <iostream>

using namespace std;

int main() {
    int n,k,a[21][21],aux=0;
    cin>>n>>k;
    for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
    cin>>a[i][j];
    
     aux=a[k][k-1];
    for (int j=n;j>=1;j--)
    if (k>j)
   {
       a[k][j]=a[k][j-1];
       
   }
      a[k][1]=aux;
      
    for (int i=1;i<=n;i++)
 {   for (int j=1;j<=n;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}
    return 0;
}

 
