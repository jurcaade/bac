sub 1
1.d)
2.f(2121,19) = 1+1+f(212,1)=4
f(212,1)= 0+1+f(21,0)=2
return 1
	a
3.
	b
4.
7450454
	d
5.
9 1
2 6 
	c

sub 2
  1. a) 7
  b) 61, 62
  c)#include <iostream>

using namespace std;

int main() {
    unsigned int x,y;
    cin>>x>>y;
    int k=0,i=x,n,c;
    while (i<=y)
    {
        n=i; c=0;
        while((n>0)&&(c==0))
       { 
           if (n%2==1)
            c=1;
         n/=10;
       }
       k+=c;
       i++;
       
    }
    cout<<k;
    return 0;
}
d)
  citește x,y
 (numere naturale, x≤y)
k0
┌pentru i<-x,y execută
│ ni; c0
│┌cât timp n>0 și c=0 execută
││┌dacă n%2=1 atunci c1
││└■
││ n[n/10]
│└■
│ kk+c
│ ii+1
└■
scrie k

2.
struct figura 
{
  int diametru;
  struct FaraNume
  {
    float x,y;
  }centru;
}c;


3.s=PRASLEA*CEL*VOINIC
s=PRSL*L*VON
  
  
  sub 3
  1.#include <iostream>

using namespace std;
void numar(int n,int c, int &m)
{
    int p=1,ok=0;
    while (n>0){
        if (n%10!=c)
         {
             m=m+n%10*p;
             p*=10;
             ok=1;
         }
         n/=10;
    }
    if (ok==0)
    m=-1;
    
}

int main() {
    int n,c,m=0;
    cin>>n>>c;
    numar(n,c,m);
    cout<<m;
    return 0;
}
  
2.#include <iostream>

using namespace std;

int main() {
    int n,a[21][21];
    cin>>n;
    for (int i=1;i<=n;i++)
     for (int j=n;j>=1;j--)
 {        if (i+j==n+1)
         a[i][j]=0;
         if (i+j<n+1)
         a[i][j]=a[i][j+1]+1;
         if (i+j>n+1)
         a[i][j]=a[i-1][j]+1;
}
     
     for (int i=1;i<=n;i++)
 {    for (int j=1;j<=n;j++)
     cout<<a[i][j]<<" ";
     cout<<endl;
}
    return 0;
}
  
  3.#include <iostream>

using namespace std;

int main() {
    int x,l1=1,l2=1,lmax=0,nr=0;
    while (cin>>x)
    {
        if (x>0)
     {   l1++;
        l2++;
    }
        else 
        {
         nr++;
         if (nr==2)
         {
             nr=1;
             if (l2>lmax)
              lmax=l2;
             l2=l1;
         }
        l1=1;
        }
        
        
    }
    cout<<lmax;
    return 0;
}







