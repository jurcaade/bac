sub 1.
  1.c
  2.d
  3.a
  4.b
  5.c

  
  sub 2
  1.a) n=56
  i=2 k=0
 pt i=2
  n=56 k=1
  n=28 k=2
  n=14 k=3
  n=7 
 pt i=7
  k=4
  tip 4
  
  b) 11,13
 c) #include <iostream>

using namespace std;

int main() {
   int n,i,k;
   cin>>n;
   i=2; k=0;
   while(n>=i)
 {  while(n%i==0)
     {  k++;
       n/=i;
     }
        if (i==2)
        i++;
        else
        i+=2;
    }
   cout<<k;
}

d) citeşte n
 (număr natural)
 i2; k0
┌cât timp n≥i execută
| daca n%i=0 atunci
│┌repeta 
││ kk+1
││ n[n/i]
│└pana cand n%i!=0
│┌dacă i=2 atunci ii+1
││altfel ii+2
│└■
└■
 scrie k
 
 2. 2023,2024,2025
  3.
    for (int i=0;i<strlen(s);i++)
   if (s[i]==' ')
   strcpy(id,s+i+1);
  
  strcat(id,"2022");

sub 3
  1.
  #include <iostream>

using namespace std;
void secventa(int &n)
{
    int s=0,p=1;
    while(n>0)
    {
        int x=n%10;
        if (x==2 && n/10%10==2)
        x=0;
        
        s=s+x*p;
        p*=10;
        
        n/=10;
    }
    n=s;
    
    
}
int main() {
    int n;
    cin>>n;
    secventa(n);
    cout<<n;
    return 0;
}

2.#include <iostream>

using namespace std;

int main() {
    int m,n,a[101][101],mini=11,s=0;
    cin>>m>>n;
    for (int i=1;i<=m;i++)
    for (int j=1;j<=n;j++)
    cin>>a[i][j];
    
     for (int i=0;i<=m+1;i++)
    for (int j=0;j<=n+1;j++)
 {   a[0][j]=a[m+1][j]=11;
    a[i][0]=a[i][n+1]=11;
}
    
    
    for (int i=1;i<=m;i++)
    for (int j=1;j<=n;j++)
 {  mini=11;
     if (a[i][j]<a[i-1][j] && a[i][j]<a[i+1][j] && a[i][j]<a[i][j+1] && a[i][j]<a[i][j-1])
  {      if (a[i-1][j]<mini)
        mini=a[i-1][j];
        if (a[i+1][j]<mini)
        mini=a[i+1][j];
        if (a[i][j+1]<mini)
        mini=a[i][j+1];
        if (a[i][j-1]<mini)
        mini=a[i][j-1];   
    
    s+=mini-a[i][j];
  }
  
 }
    
    cout<<s;
    
    return 0;
}
