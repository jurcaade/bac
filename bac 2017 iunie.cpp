sub 1
  1.a
  2.n=3
  a) #2#1#3#2#
b)
  daca e par se afiseaza dublu daca nu dublu-1
 pt n=10 se afiseaza 20 #
 pt n=50 se afiseaza 100 #
 50
 c)citeşte n
 (număr natural nenul)
  i<-1
┌cat timp 1<=n execută
│┌pentru j1,n execută
││┌dacă i=j sau i+j=n+1 atunci
│││ scrie ’#’
│││altfel
│││ scrie j
││└■
│└■
 i<-i+1;
└■

d)
  #include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
    if (i==j || i+j==n+1)
    cout<<'#';
    else
    cout<<j;
    return 0;
}
 
sub 2
  1.b
  2.c
  3. cout<<x.nume[0]<<endl;
cout<<float(x.media1+x.media2)/2;
4.01000
  00100
  10001
  00100
  00010
  
  5.
  #include <iostream>

using namespace std;

int main() {
    int n,m,a[51][51];
    cin>>n>>m;
   
    
    for (int i=1;i<=n;i++)
    for (int j=1;j<=m;j++)
    cin>>a[i][j];
     int x=a[n][m];
     
     
     for (int i=1;i<=n;i++)
     a[i][1]=a[i][m]=x;
     for (int j=1;j<=m;j++)
     a[1][j]=a[n][j]=x;
    
    for (int i=1;i<=n;i++)
 {   for (int j=1;j<=m;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}
    
    
    return 0;
}
  
sub 3
  1.b
  2 f(3,9) return 3
    f(1,1000) r f(5,200)
  f(5,200) r f(25,40) 
  f(25,40) return 25
3.#include <iostream>

using namespace std;
void duplicare(int &n)
{
    int p=1,s=0;
    while(n>0)
    {   
        
            
        if (n%10%2==0)
        {  
            s=s+n%10/2*p;
           p*=10;
        } 
       
           s=s+n%10*p;
            p*=10;
        
    
        n/=10;
    }
    
    n=s;
}
int main() {
    int n;
    cin>>n;
    duplicare(n);
    cout<<n;
    return 0;
}
