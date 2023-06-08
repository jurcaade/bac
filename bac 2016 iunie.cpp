sub 1
  1. d
  2. a 14 28
  b 11 19 5
  c citeşte m,n,x
 (numere natural nenule, m<n)
 p0
// daca m<n si p=0 atunci
┌repeta 
│┌dacă m%x=0 şi n%x=0 atunci
││ px
││altfel
││┌dacă m%x=0 atunci
│││ nn-1
│││altfel
│││ mm+1
││└■
│└■
└pana cand m>=n sau p!=0
 scrie m,’ ’,n 

d#include <iostream>

using namespace std;

int main() {
   int m,n,x,p;
   p=0;
   cin>>m>>n>>x;
   while (m<n && p==0)
   {
       if (m%x==0 && n%x==0)
       p=x;
       else
       if (m%x==0)
       n--;
       else
       m++;
   }
   
   cout<<m<<" "<<n;
  
}
sub 2
  1.a
  2. 6 elemente nenule => 3 muchii 
  b
  3. 2 3 8
  4. s1=informatica
     tip 11
     s2=mate
     s2=matematica
     tip matematica
     
   5.#include <iostream>

using namespace std;

int main() {
    int n,a[21][21];
    cin>>n;
    for (int i=1;i<=n;i++)
    a[i][1]=i;
    
     for (int i=n;i>=1;i--)
        for (int j=2;j<=n;j++)
    a[i][j]=a[i][j-1]+a[i+1][j-1];
    
    
     for (int i=1;i<=n;i++)
 {       for (int j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
}
    return 0;
}
   
sub 3
  1. 2016201202
  f(2016) tip 2016
  f(201) tip 201
  f(20) tip 20
  f(2) tip 2
  f(0)
  c
  
  2. (pere, mure/, afine, fragi/, zmeura)
  a 4 a : (pere, afine, zmeură)
  a 5 a : (pere, fragi, zmeura)
  a 6 a : (mure, afine, zmeura)

3.#include <iostream>

using namespace std;
int cifreImpare(int n)
{
    int s=0, p=1, aux=n;
    while (n>0)
    {
        if (n%2==0)
     {   s+=n%10*p;
        p*=10;
    }
        n/=10;
    }
    if (s==aux)
    s=-1;
    return s;
    
}
int main() {
   int n;
   cin>>n;
   cout<<cifreImpare(n);
    return 0;
}
4.
  #include <iostream>
#include <fstream>

using namespace std;


int main()
{
    int n;
    cin >> n; 

    int u=0,ok=0;
    int x;
    
    while(cin>>x)
    {
        for(int i=u+1;i<x;i++) 
        {
            
            cout<<i<<" ";
            ok=1;
        }
        u=x;
    }
    
    for(int i=x+1;i<=n;i++) 
    {
        
        cout<<i<<" ";
        ok=1;
    }
    
    if(ok==0)
    cout<<"Nu exista";
    
    return 0;
}
  
