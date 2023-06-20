sub 1
  1.d
  2. +++++1+123+12345+
  f(12345) t + f(123) t 12345 t +
  f(123) t + f(1) t 123 t +
  f(1) t + f(0) t 1 t +
  f(0) t ++
  => a
  3.b
  4.c
  5. 20 noduri -- 5 componenet coexe ficare cu 4 noduri
  in arbore m=n-1 => 3*5=15
  => c
  
  sub 2
  1. n=253387 x=1 m=0 p=1
  c=7 cn=25338 1=7 F 
  c=8 cm=2533
  ..
  x=3 
  m=33
  x=5
  m=533
  x=7 7533
  x=9
  x=12 <10 F
  tip 7533
  
  b) 20, 88
  c)#include <iostream>

using namespace std;

int main() {
    int n,x,m,p,cn,c;
    cin>>n;
    x=1; m=0; p=1;
    while(x<10)
    {
        cn=n;
        while(cn!=0)
        {
            c=cn%10;
            cn/=10;
            if(c==x)
            {
                m=c*p+m;
                p*=10;
            }
        }
        x+=2;
        
    }
    cout<<m;
    
    return 0;
}

d)citește n
 (număr natural nenul)
 m0; p1
┌pentru x<-1,10,2 execută
│ cnn
│┌cât timp cn≠0 execută
││ ccn%10; cn[cn/10]
││┌dacă c=x atunci
│││ mc*p+m; pp*10
││└■
│└■
└■
scrie m

2.
struct biblio
{
  unsigned int numar;
  struct FaraNume
  {
   char titlu[21];
    char autor[21];
  }c[100];
  
}

3.s=stilou
tip ou
s=r
t=o
i=s
l=u
tip rosu
ou
rosu


sub 3
  1.#include <iostream>

using namespace std;
int putere(int n,int p)
{
    int d=2,k=0;
    while(n>1)
    {
        k=0;
            while(n%d==0)
            {
                n/=d;
                k++;
            }
            if (d==p)
             return k;
         d++; 
    }
    return -1;
    
}
int main() {
    int n,p;
    cin>>n>>p;
    cout<<putere(n,p);
    
    return 0;
}
2.#include <iostream>

using namespace std;

int main() {
    int m,n,a[21][21],ok=0;
    cin>>m>>n;
    for (int i=1;i<=m;i++)
    for (int j=1;j<=n;j++)
    cin>>a[i][j];
    
      for (int i=1;i<=m;i++)
    for (int j=1;j<=m;j++)
        if (a[i][1]==a[j][n])
        {
            cout<<a[i][1]<<" ";
            ok=1;
        }
        
        if (ok==0)
        cout<<"nepolarizate";
    
    
    return 0;
}

3.#include <iostream>

using namespace std;

int main() {
    int s=0,smin=1001,x;
    
    while(cin>>x)
    {
        s+=x;
        if (s<smin)
        smin=s;
        
        if (s>0)
        s=0;
        
    }
    cout<<smin;
    return 0;
}
