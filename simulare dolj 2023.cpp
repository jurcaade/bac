sub 1
  1. d
  2. a
  3. c
  4. c
  5. d

sub 2.
  1. a i=2 d=2 k=0
       i=3 d=3 k=0
       i=4 d=2 k=1
       i=5 d=5 k=1
       i=6 d=2 k=1
       i=7 d=7 k=1
       i=8 d=2 k=1
       i=9 d=3 k=2
       i=10 d=2 k=2
  tip 2
  b 25 26
  c. #include <iostream>

using namespace std;

int main() {
    int a, b, k, i, d;
    cin>>a>>b;
    k=0;
    for (i=a;i<=b;i++)
    {
        d=2;
        while (i%d!=0 && d<=i)
        d++;
        
        if (d*d==i)
        k++;
    
     
    }
    cout<<k;
    return 0;
}
d.
  citește a,b (numere naturale, a<b)
 k←0;
 pentru i ← a,b execută
 d ← 2
   daca (i%d ≠ 0 și d<=i)
   repeta  
   d ← d+1
   pana cand (i%d = 0 sau d>i)
 dacă d*d=i atunci
 k ← k+1
scrie k


2.
  if ((u1.g>u2.g) || (u1.g==u2.g && u1.m>u2.m))
  cout<<u1;
  else
  cout<<u2;
else if (u1.g==u2.g)
  cout<<"egale";

3.
  #include <iostream>

using namespace std;

int main() {
    int a[101][101];
    
    for (int i=1;i<=4;i++)
    for (int j=1;j<=6;j++)
    if (i%2!=0)
    a[i][j]=14-2*j;
    else
    a[i][j]=2*j;
    
    for (int i=1;i<=4;i++)
 {   for (int j=1;j<=6;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}
    return 0;
}

3.
  #include <iostream>

using namespace std;

int main() {
    int x, l1=0, lmax=0, p=1, pmax=0,i=0,il;
    
   while (cin>>x)
   {
       i++;
       p*=x;
       if (p>=pmax)
       {    
           l1++;
           pmax=p;
           il=i-l1+1;
       }
       else
    {  if (l1>lmax)
       lmax=l1;
       
        p=1;
       l1=0;
   }
   }
   cout<<pmax<<" "<<lmax;
    return 0;
}

sub 3.
  1. #include <iostream>
using namespace std;

int prefix (int a, int b)
{
   
    for (int i=1;i<=10;i++)
    {
        b/=10;
        if (b==a)
        return 1;
    }
    return 0;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout<< prefix(a,b);
    return 0;
}

2.#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[256], *p;
    int nr=0;
    cin.getline(s,256);
    p=strtok(s," ");
    
    while (p!=NULL)
    {
        nr=0;
        for (int i=0;i<strlen(p);i++)
         if (p[i] >= '0' && p[i] <= '9')
             nr++;
             
             if (nr!=strlen(p))
           {  for (int i=0;i<strlen(p);i++)
             if (p[i] < '0' || p[i] > '9')
                 cout<<p[i];
             }
             else
             cout<<p;
    
         cout<<" ";
         p=strtok(NULL," ");
         
    }
  
    
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int x, l1=0, lmax=0, p=1, pmax=0,i=0,il;
    
   while (cin>>x)
   {
       i++;
       p*=x;
       if (p>=pmax)
       {    
           l1++;
           pmax=p;
           il=i-l1+1;
       }
       else
    {  if (l1>lmax)
       lmax=l1;
       
        p=1;
       l1=0;
   }
   }
   cout<<pmax<<" "<<lmax;
    return 0;
}
