sub 1
  1.d
  2.a
  3. {agar, geranium, iasomie, paciuli, tuberoze}
inainte : agar paciuli tuberoze => b
(geranium, iasomie, paciuli)
  4. 1,2,3,4,8,10 => 6 noduri de tip frunza
  => c
  5.d
  
sub 2
  1. 
  a
  n=7 k=1 7>1 i=1
     n=6 
     i=1 tip 1
     i=0
     k=2
     6>2 A i=2
     n=4
     tip 2 2
     k=3
     4>3 A i=3
     n=1 tip 3 3 3
  k=4
     1>4 F i=1
      n=0
      tip 4
  1 2 3 3 3 4
  
  b 46 55
  c. #include <iostream>

using namespace std;

int main() {
    int n,k,i;
    cin>>n;
    k=1;
    while (n>=1)
    {
        if(n>k)
        i=k;
        else
        i=n;
        
        n-=i;
    
        while(i>=1)
      {  cout<<k<<" ";
        i--;
    }
        k++;
        
    }
    return 0;
}
d
citeşte n
 (număr natural)
 k1
┌cât timp n≥1 execută
│┌dacă n>k atunci ik
││altfel in
│└■
│ nn-i
│┌repeta 
││ scrie k,' '; ii-1
│└pana cand (i<1)
│ kk+1
└■

2.
struct complex
{
  float pre;
  float pim;
}z[19];

3.
  #include <iostream>

using namespace std;

int main() {
    int a[101][101],i,j;
        for(i=1;i<=5;i++)
         for(j=1;j<=5;j++)
        a[i][j]=i*5+j-5;
         
         for(i=1;i<=5;i++)
    {     for(j=1;j<=5;j++)
         cout<<a[i][j]<<" ";
         cout<<endl;
}
    return 0;
}

sub 3
  1.#include <iostream>

using namespace std;
int CifrePrime(int n)
{
    int ok=1,s=0;
    while (n>0)
    {
        int x=n%10;
        ok=1;
        
        for (int d=2;d<x;d++)
        if (x%d==0)
        ok=0;
        
        if (ok==1 && x!=1)
          s+=x;
      
    
        
        n/=10;
    }
    return s;
}
int main() {
    int n;
    cin>>n;
    cout<<CifrePrime(n);
    return 0;
}
