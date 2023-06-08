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
   
