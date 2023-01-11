sub 1
1.c
2. 
int f(int n)
{ int c;
     if (n==0)
      return 9;
 c=f(n/10); 
     if (n%10<c)
       return n%10;
 return c;
}
f(38627)
    c=f(3862)----------- f(3862)
     7<2 r 2                c=f(386)----------f(386)
                           2<3 r 2           c=f(38)---------f(38)
                                              6<3 r 3            c=f(3)---------f(3)
                                                                8<3 r 3       c=f(0)-------f(0)
                                                                              3<9 r 3         return 9
    return 2
    =>a
 3. 5--12112
    6--12121
    7--12122
    8--12211
  => b
  4. d
  5.  2 ^ (n∗(n−1)/2) => 2^10 => c
  
  
  sub 2
  1. a. n=296385 k=3 c=5 p=5 
        n=29638 k=2 c=8 p=5
        n=2963 k=1 c=3 p=15
        n=296 k=0 c=6 p=15
        n=29 n=2 n=0
  tip 15
  
 b. 10000 28888
 c. #include <iostream>

using namespace std;

int main() {
    unsigned int n,k;
    cin>>n>>k;
    int p,c;
    p=1;
    while(n>0)
    {
        c=n%10;
       if (k>0)
         if (c%2==1)
            p=p*c; 
           
        
           
    n=n/10;  k=k-1;
    }
    cout<<p;

    return 0;
}
  
  d)
       citeşte n, k
 (numere naturale)
p1
daca  n>0 atunci
┌repeta
│ cn%10
│┌dacă k>0 atunci
││ ┌dacă c%2=1 atunci
││ │ pp*c
││ └■
│└■
│ n[n/10]; kk-1
└pana cand n<=0
scrie p

2. struct ciocolata
{
      unsigned int gramaj;
     struct FaraNume 
     {
          unsigned int zi, luna, an;
     }datae;
     
}c;
 

3. s=sanataTEA
  tip 9
  i=0;
0<9 A
tip sntTEA
  tip 9sntTEA
  
  sub 3
     1. 
//#include <iostream>
//using namespace std;
     
int joc (int n)
{
    int k=0;
  for (int d=2;d<=n;d++)
    if (n%d==0)
       k++;
    return k;
    
}
/*int main() {
    int n;
    cin >>n;
    cout<<joc(n);
    return 0;
}*/
  
2.#include <iostream>

using namespace std;

int main() {
    int m,n,a[101][101],p=0;
    cin>>m>>n;
    
    for (int i=1;i<=m;i++)
        for (int j=1;j<=n;j++)
        cin>>a[i][j];
    
    
    for (int i=1;i<=m;i++)
       {
           p=0;
           for (int j=1;j<=n;j++)
             if ((a[i][j]<21) && (a[i][j]>p))
                 p=a[i][j];
             
             if (p!=0)
            cout<<p<<endl; 
            else
            cout<<"nu exista"<<endl;
       }
    
    return 0;
}
  
  3.
       #include <iostream>
#include <fstream>
using namespace std;
int main() 
{
  fstream f("bac1.txt",ios::in);
  fstream g("bac2.txt",ios::in);
    int n1,n2,i1=1,i2=1,x1,x2;
       f>>n1>>x1;
       g>>n2>>x2;
    
    while(i1<=n1 && i2<=n2)
    {
        if (x1==x2)
        {
            f>>x1;
            g>>x2;
            i1++;
            i2++;
        }
        
        if (x1<x2)
        {
            if (x1%5==0)
            cout<<x1<<" ";
            f>>x1;
            i1++;
            
        }
        
         if (x2<x1)
        {
            if (x2%5==0)
            cout<<x2<<" ";
            g>>x2;
            i2++;
            
        }
    }
        
  while (i1<=n1)
  { 
      f>>x1;
      i1++;
       if (x1%5==0)
     cout<<x1<<" ";
     
  }
         while (i2<=n2)
        {
            g>>x2;
            i2++;
            if (x2%5==0)
            cout<<x2<<" ";
           
        }
        return 0;
}
  
  
  
