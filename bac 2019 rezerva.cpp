sub 1.
  1. b (pt 11,13,15,17,19)
  2.
  f(20)= f(10) tip 0
  f(10) = f(5) tip 0
  f(5) = f(2) tip 1
  f(2) = f(1) tip 0
  f(1) = f(0) tip 1
  10100
  
  f(19) = f9 1
  f9=f4 1
  f4=f2 0
  f2=f1 0
  f1=f0 1
  10011
  
  f(10)=f5 0
  f5=f2 1
  f2=f1 0
  f1=f0 1
  1010
  
  f(2019)=f1009 1
  f1009=f504 1
  f504=f252 0
  f252=f126 0
  f126=f63 0
  f63=f31 1
  ..
  
  => f19 =>  b
  
  3. d
  4. 7 noduri deci trb sa aiba n(n-1)/2=m
  7*6/2=21 muchii sa fie complet, are 4 21-4=17 muchii mai trb
  => a
  5. c
  
  sub 2
  1. x=15
    y=6 
  d=2<=6
  d=3
  15,6 %3 A
  3>1
  z=3
  x=6
  6,4 z=2
  4,8 z=4
  8,3 z=1
  3,0 z=0
  tip 4
  
  b) 20 10 5 0
  c)#include <iostream>

using namespace std;

int main() {
    int x,y,z,d;
    cin>>x;
    z=1;
    do
    {
        cin>>y;
        for (d=2;d<=y;d++)
        if (x%d==0 && y%d==0 && d>z)
        z=d;
        
        x=y;
    }while(y!=0);
    
    cout<<z;
    return 0;
}

d) citește x
 (număr natural nenul)
 z1
┌repetă
│ citeşte y (număr natural)
  d<-2
│┌cat timp d<=y executa
││┌dacă x%d=0 și y%d=0 și d>z atunci
│││ zd
││└■
|| d=d+1
│└■
│ xy
└până când y=0
 scrie z 
  2.
  struct masina
  {
   char marca[31];
    struct 
    {
     unsigned int turatie;
      float capacitate;
    }motor;
  }m;
  
3. a=succint
   b=cules
   a=succ
   a=succes
   tip succes5
  
  sub 3
  1.#include <iostream>

using namespace std;

int main() {
    int n,x,y,s=0;
    cin>>n;
     x=n%10;
     n/=10;
     
    while(n)
    {
        y=n%10;
       if (x==y)
       s+=x*10+x;
        x=y;
        n/=10;
    }
    cout<<s;
    return 0;
}

2.#include <iostream>

using namespace std;

int main() {
    int n,a[101][101];
    cin>>n;
    for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
    cin>>a[i][j];
    
  
   for (int i=0;i<=n+1;i++)
{    a[0][i]=a[n+1][i]=-1;
   a[i][0]=a[i][n+1]=-1;
}
    
    
    
    for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
    if (a[i][j]==3 && (a[i-1][j]==0 || a[i+1][j]==0 || a[i][j+1]==0 || a[i][j-1]==0))
       cout<<i<<" ";
    
 
    
    return 0;
}
  
  3. nu e bun!
    #include <iostream>

using namespace std;

int main() {
    int x,v[1000]={},n=0,nr=0,ok=0;
    cin>>x;
    while (x>0)
    {
        v[x%10]++;
        x/=10;
    }
    
    while(cin>>x)
    {
        ok=0;
        for (int i=1;i<=9;i++)
            if (v[i]!=0)
              if ((x%10==i || x/10%10==i || x/100%10==i) && i>=n)
         {       n=i;
                ok=1;
        }
        if(ok==0)
        nr++;
       
    
    
    
    }
    
    if (nr>0)
    cout<<"nu exista";
    else
    cout<<n;
    return 0;
}
 2.. 
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int main()
{
int fr[11],x,n=0,gasit=0,i,cif[11];
for(i=0;i<=9;i++)
{fr[i]=0;
 cif[i]=0;}
while(f>>x)
{
n=n+1;
while(x!=0)
{
cif[x%10]++;
x=x/10;
}
for(i=0;i<=9;i++)
if(cif[i]!=0) fr[i]++;
}
i=9;
while(i>0 && gasit==0)
{
if(fr[i]==n){cout<<i;gasit=1;}
i--;
}
if(gasit==0) cout<<"nu exista";
return 0;
}

  
