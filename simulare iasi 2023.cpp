sub 1.
  1 c
  2 d
  3 d
  4 {cifre(1), divizori(4), matrici, pointeri(/), secvente, siruri(/)}
          1         2           3         4           5         6
       1342
       1345
       1352
       6532 c
  5 b (impartim 2020 in doua patrate perfecte deci avem 3 randuri)
       
            
sub 2
1.int x,y;

suma.numarator=f1.numarator*f2.numitor+f2.numarator*f1.numitor;
suma.numitor=f1.numitor*f2.numitor;

x=suma.numarator;
y=suma.numitor;

while (x!=y)
  if (x>y)
    x-=y;
  else
    y-=x;
  
suma.numarator/=x;
suma.numitor/=y;

2. c
#include <iostream>

using namespace std;

int main() {

 int n,c,m,i,x,s;
    cin>>n>>c;
    m=0; i=0;
    do
    {
        cin>>x;
        i++;
        do
        {
            s=0;
            do
            {
                s=s+x%10;
                x/=10;
            }while (x!=0);
            x=s;
        }while (x>=10);
        if (x==c)
        {
            m++;
        }
    }while (i!=n);
   cout<<m;
    return 0;
}

a. n=3 c=3
  x=2018
  s=11
  x=11<10
  s=2<10 A
  x=2
  2=3 F
  x=2019
  s=12
  12<10 F
  s=3
  3=3 A
  n=1;
x=2020
  s=4
  4<10 A
  4=3 F
  tip 1
  
 b 5 14 23 32 41 9005 509
 d citeşte n, c (numere naturale nenule)
m0, i0
┌cat timp i!=n executa
│ citește x (număr natural nenul)
│ ii+1
│ ┌cat timp x>=10 executa
│ │ s0
│ │ ┌cat timp x!=0 executa
│ │ │ ss+x%10, x[x/10]
│ │ └
│ │ xs
│ └
│ ┌dacă x=c atunci
│ │ mm+1
│ └■
└
scrie m
  
  3. {1,5} ; {2,3} ; {4} - 3 componente tare conexe
    (5,4) - 1 arc
    
   sub 3
  1.#include <iostream>

using namespace std;

void ecran(int n)
{
   int v[7],i=1,aux;  
   aux=n;
   while (n>0)
   {
       v[i++]=n%10;
       n/=10;
   }

   n=i;
    for (i=0;i<n;i++)
    {
        if (aux>0)
        cout<<aux;
        for (int j=1;j<=2*i+1;j++)
        cout<<'*';
         for (int j=n-i-1;j>=0;j--)
         cout<<v[j];
         aux/=10;
         cout<<endl;
         
    }
      
      
}
int main() {
   int n;
   cin>>n;
   ecran(n);
    return 0;
}
  
  
  2.#include <iostream>

using namespace std;

int main() {
   int n,m,elmin=1000000,elmax=0,lm,cm,lM,cM,a[100][100];
   cin>>n>>m;
   for (int i=1;i<=m;i++)
   for (int j=1;j<=n;j++)
  { cin>>a[i][j];
    if (a[i][j]<elmin)
  { elmin=a[i][j];
   lm=i;
   cm=j;
  }
   if (a[i][j]>elmax)
  { elmax=a[i][j];
   lM=i;
   cM=j;
  }
}

if (lm==lM)
 for (int i=lm+1;i<=n;i++)
 {   for (int j=1;j<=n;j++)
   a[i-1][j]=a[i][j];
     n--;
 }
}
else
{
     for (int i=lm+1;i<=n;i++)
 {  for (int j=1;j<=n;j++)
   a[i-1][j]=a[i][j];
     n--;
}

    if (lM>lm)
    lM--;
    for (int i=lM+1;i<=n;i++)
  {  for (int j=1;j<=n;j++)
    a[i-1][j]=a[i][j];
    n--;
  }
    
}

if (cm==cM)
 for (int j=cm+1;j<=n;j++)
 {   for (int i=1;i<=m;i++)
   a[i][j-1]=a[i][j];
     m--;
 }
else
{
     for (int j=cm+1;j<=n;j++)
 {   for (int i=1;i<=m;i++)
   a[i][j-1]=a[i][j];
     m--;
}

    if (cM>cm)
    cM--;
    for (int i=cM+1;i<=n;i++)
  {  for (int j=1;j<=n;j++)
    a[i-1][j]=a[i][j];
    n--;
  }
    
}





    for (int i=1;i<=m;i++)
 {  for (int j=1;j<=n;j++)
   cout<<a[i][j]<<" ";
   cout<<endl;
}

   
    return 0;
}
  
  
