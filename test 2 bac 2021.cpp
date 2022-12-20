sub 1
  1. a
  2. f(4)--x=4>1 A
           x=3 f(2)
           x=2 f(1) tip 1
           x=1 f(0) tip 0
            tip 1
                  f(2)--x=2>1 A
                        x=1 f(0)-- tip 0
                        tip 1
  01101
               d)
  3.{„Bono” 1 , „Bruce Springsteen” 2 , „Bon Jovi” 3 , „Leonard Cohen” 4, „Portugal.The Man” 5}
  {„Bono” 1 , „Bon Jovi” 3 , „Portugal.The Man” 5} (nu pe poz alaturate)
ultima e: c) 5454
  
  4.b
  5.b
  
  sub 2
  1. a n=2186310
  s=1
  c1=0 n=218631 c2=1
  0<1 A
  s=-1
  0-1*-1>0 A 218631>9 A
  c1=1 n=21863 c2=3
  c1=3 c2=6
  c1=6 c2=8
  c1=8 n=21 c2=1
  8-1*-1>0 A
  tip -1 21
  
  b) 12345 13456
c) #include <iostream>
using namespace std;
int main()
{
  unsigned int n;
  cin>>n;
  int s,c1,c2;
  s=1;
  c1=n%10; n/=10; c2=n%10;
  if (c1==c2)
    s=0;
    else
     if (c1<c2)
       s=-1;
       
  while ((c1-c2)*s>0 && n>9)
  {c1=n%10; n/=10; c2=n%10;}
  cout<<s<<" "<<n;
  return 0;
}
d)
  citește n (număr natural, n>9)
s1
c1n%10; n[n/10]; c2n%10
┌dacă c1=c2 atunci s0
│altfel
│┌dacă c1<c2 atunci s-1
│└■
└■
daca (c1-c2)*s>0 și n>9 atunci
┌repeta 
│ c1n%10; n[n/10]; c2n%10
└pana cand (c1-c2)*s<=0 sau n<=9
scrie s,' ',n

2.
struct polinom 
{
  unsigned int grad;
  float coeficient[100]
}p;


3. 
   char s[21], voc[21]="aeiouAEIOU";
   int ok=0;
   for (int j=0;j<strlen(voc);j++)
 {   ok=1;
     for (int i=0;i<strlen(s);i++)
      if (s[i]==voc[j])
         ok=0;
         
         
         if (ok==1)
         cout<<voc[j];
}
   

sub 3.
  1.
  void factori (int n, int m)
{
    int d=2, p1=0, p2=0, nr=0;
    while (n>1 && m>1)
    {
        p1=0;
        p2=0;
        while (n%d==0 || m%d==0)
        {
            if (n%d==0)
         {   n/=d; 
            p1++;
             
         }
            if (m%d==0)
        {    m/=d;
            p2++;
            
        }
        
        }
        
      if (p1>0 && p2>0)
        if (p1==p2)
         nr++;
        
        d++;
    }
    return nr;
}

2.#include <iostream>

using namespace std;

int main() {
    int n, a[21][21];
    cin>>n;
    for (int i=1;i<=n;i++)
    for (int j=n;j>0;j--)
   {     
       if (i+j==n+1)
         a[i][j]=n;
         
       if (i+j<n+1)
         a[i][j]=a[i][j+1]-1;
         
        if (i+j>n+1)
        a[i][j]=a[i-1][j]-1;
}
    
    for (int i=1;i<=n;i++)
 {   for (int j=1;j<=n;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}
    return 0;
}

3.
  #include <iostream>
#include <fstream>
using namespace std;

int main() {
  fstream f("bac.in';ios::in);
    int v[100],x,i=1,s1=0, s2=0;
    while (f>>x)
    {
        v[i++]=x;
    }
    int n=i-1;
    
    for (int i=n;i>=1;i--)
         if (v[i]>0)
         s1=n-i+1;
         
    for (int i=1;i<=n;i++)
        if (v[i]>0)
        s2=i;
         
         if (s1>s2)
         cout<<s1;
         else
         cout<<s2;
    return 0;
}




      
