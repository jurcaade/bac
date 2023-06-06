sub 1
  1.d
  2. 32100100
  f(3) tip 3 f(2) x=2 f(1) tip 1 x=0
  f(2) tip 2 f(1) x=1 f(0) tip 0
  f(1) tip 1 f(0) x=0 
  f(0) tip 0
b
3.c
4.a
5.b

sub 2
  1. n=2754578
  s=1
  c1=7 c2=5
  c1=5 c2=4
  c1=4 c2=5
  2-5<0 
  tip 1 275
  
  b) 2345 5432
  c) #include <iostream>

using namespace std;

int main() {
    int n,c1,c2,s;
    cin>>n;
    c1=n%10; n/=10; c2=n%10;
    if (c1==c2)
    s=0;
    else
    if (c1>c2)
    s=1;
    else
    s=-1;
    
    do
    {
        c1=n%10;
        n/=10;
        c2=n%10;
    }while((c1-c2)*s>0);
    
    cout<<s<<" "<<n;
    return 0;
}

d)
  citeşte n (număr natural, n>9)
c1n%10; n[n/10]; c2n%10
┌dacă c1=c2 atunci s0
│altfel
│┌dacă c1>c2 atunci s1
││altfel s-1
│└■
└■
c1n%10; n[n/10]; c2n%10
┌cat timp (c1-c2)*>0 executa
│ c1n%10; n[n/10]; c2n%10
└
scrie s,' ',n

2.struct cerc
{
float raza;
struct FaraNume
{
float x,y;
}centru;
}fig;

3.#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int p;
    char s[21];
    cin.getline(s,21);
    
    for (int p=0;p<strlen(s);p++)
 {   if (!(s[p]=='A' && (s[p-1]=='I' || s[p+1]=='I')))
    cout<<s[p];
}
   
    return 0;
}


sub 3
  1.#include <iostream>

using namespace std;
int factori(int n, int m)
{
    int d=2,nr=0;
    while (n>1 && m>1)
    {
     if(n%d==0 && m%d==0)
     nr++;
     
      while (n%d==0)
       n/=d;
      while (m%d==0)
       m/=d;
     
        d++;
    }
    return nr;
        
}
int main() {
    int n,m;
    cin>>n>>m;
  cout<<factori(n,m);
 
    return 0;
}

2.
  #include <iostream>

using namespace std;

int main() {
    int n,a[21][21];
    cin>>n;
    
    for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
 {       if (i+j==n+1)
        a[i][j]=0;
        if (i+j<n+1)
        a[i][j]=n-i-(j-1);
        else
        a[i][j]=j-1-(n-i);
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
  //ifstream cin("bac.in);
    int x,l1n,l1p,lup,lun,lung=0;
    int okn=0,okp=0;
    
    while(cin>>x)
    {
        lung++;
        
        if (x<0 && okn==0) {
        l1n=lung;
        okn=1;
      }
      
      if (x>0 && okp==0) { 
        l1p=lung;
        okp=1;
      }
      
       if (x<0)
        lun=lung;
        
       if (x>0)
        lup=lung;
    }
    
    
    if (lun-l1p>lup-l1n)
    cout<<lun-l1p+1;
    else
    cout<<lup-l1n+1;
    return 0;
}
//Algoritmul citeste fiecare numar din fisier si gaseste pozitia primului numar pozitiv, primului numar negativ respectiv
// pozitia ultimului numar pozitiv si a ultimului numar negativ. In final compara lungimea sirului in care primul nr e pozitiv si ultimul negativ
// cu cea a sirului in care primul e pozitv si ultimul negativ si o afiseaza
