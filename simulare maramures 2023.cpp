sub 1.
  1.d
  2. f(432115,0)= f(43211,5)
  f(43211,5)=f(4321,51)
  f(4321,51)=f(432,511)
  f(432,511)=f(43,5112)
  => 511234 => c
  3. cifre care se impart exact la 4:={0,4,8)
    A3 luate cate 3 =6
    a
   4.b
   5.d
   
sub 2
 1.
 a n=6
 nr=0
 z=11
 11>1 aux=1 x=1 y=2
 11>2 aux=1 x=2 y=3
 11>3 aux=2 x=3 y=5
 11>5 aux=3 x=5 y=8
 11>8 aux=5 x=8 y=13
 11>13 F
 11=13 F
 z=5 
 5>1 aux=1 x=1 y=2
 ..
 5>3 aux=2 x=3 y=5
 5>5 F
 5=5 nr=1
 ..
 nr=4 pt 5,8,13,2
 b 3 11 4 6
  
  c.
  #include <iostream>

using namespace std;

int main() {
    int n,nr,x,y,z,aux,i;
    cin>>n;
    nr=0;
    for (i=1;i<=n;i++)
    {
        cin>>z;
        x=1;
        y=1;
        while(z>y)
        {
            aux=x;
            x=y;
            y=aux+y;
        }
        if (z==aux+x)
        nr++;
    }
    cout<<nr;
    return 0;
}

d.
citeşte n (număr natural nenul)
nr0
i=1
┌cat timp i<=n execută
│ citeşte z (număr natural nenul)
│ x1; y1
│┌cât timp z>y execută
││auxx; xy; yaux+y
│└■
│┌dacă z=aux+x atunci nrnr+1
│└■
| i=i+1
└■
scrie nr

2. int ok=0;
for (int i=1;i<=10;i++)
    if (v[i].data_lansare.an<2000 && v[i].nume[0]=='A')
    {cout<<v[i].titlul<<" ";
    ok=1;
    }
    if (ok==0)
    cout<<"nu exista";
    
3. a=albastru
b=galben
x=010011

sub 3
1.
#include <iostream>

using namespace std;

void numere_dure(int n)
{
    int x=0;
   
        for (int i=1;i<=8 ;i++)
        for (int j=1;j<=8 && n>0;j++)
        if (i*j>=18)
     {   cout<<i*10+j<<" ";
            n--;
    }
    
    
    
}
int main() {
    int n;
    cin>>n;
    numere_dure(n);
    return 0;
}
varianta pt modul general
void numere_dure(int n)
{
  int k=0, x=36, y, c;
  while(k<n)
    {
      y=x;
      int p=1;
      while(y!=0)
        {
          c=y%10;
          if(c>=1 && c<=8)
            p*=c;
          else p=-1;
          y/=10;
        }
      if(p>=18)
      {  
        cout<<x<<" ";
        k++;
      }
      x++;
    }
}
2.
#include <iostream>

using namespace std;

int main() {
    int a[101][101]={},n,m,s=0,smax=0,pi,pj;
    cin>>n>>m;
    for (int i=1;i<=n;i++)
    for (int j=1;j<=m;j++)
    cin>>a[i][j];
    //bordare cu 0
 /*   for (int i=0;i<=n+1;i++)
a[i][0]=a[i][m+1]=0;
for (int j=0;j<=m+1;j++)
a[0][j]=a[n+1][j]=0; */

    
  for (int i=1;i<=n;i++)
    for (int j=1;j<=m;j++)
      {
            s=a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1];
            if (s>smax)
            {
                smax=s;
                pi=i;
                pj=j;
            }
    }
    cout<<pi<<","<<pj;
    
    
    return 0;
}

3.
#include <iostream>

using namespace std;
int v[1000];
int main() {
    int x,ok=1;
    while (cin>>x)
    {
        v[x]++;
        
    }
    
    for (int i=1;i<=999;i++)
    if (i!=v[i] && v[i]!=0)
    ok=0;
    

    
    if (ok==1)
   cout<<"Da";
    else
    cout<<"Nu";
    
    return 0;
}

var dif se refera la numere consecutiv in sir
{
int x, ok=1, maxi=0,k=0;
  while (cin>>x)
    {
      k++;
      v[x]++;
      if (x>maxi)
        maxi=x;
    }
  if (maxi*(maxi+1)/2 != k){
    cout<<"Nu";
    return 0;
  }
  for (int i=1;i<=maxi;i++)
    if (i!=v[i] )
      ok=0;

  if (ok==1)
    cout<<"Da";
  else
    cout<<"Nu";
  
  return 0;
}
