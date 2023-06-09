sub 1
  1.a
  2.a) p=8
  b) 16,31
  c) citeşte n
 (număr natural nenul)
 p0
 i<-1
┌repeta
│ mi
│┌cât timp m%2=0 execută
││ m[m/2]
│└■
│┌dacă m=1 atunci
││ pi
│└■
| i=i+1
└pana cand i>n
 scrie p

d)
  #include <iostream>

using namespace std;

int main() {
    int n,p,m;
    cin>>n;
    p=0;
    for (int i=1;i<=n;i++)
 {  
     m=i;
    while(m%2==0)
    m/=2;
    
    if (m==1)
    p=i;
}

cout<<p;
}

sub 2
  1. c
  2 7 noduri, 10 elemente nenule => 5 muchii
  c
  
  3. s1=bacalaureat
  tip 11
  s2=aureat
  s2=aur
  tip aur
  11aur
  
  4. 1,5,7
  
  5.#include <iostream>

using namespace std;

int main() {
    int n,m,a[1001][1001];
    cin>>n>>m;
    
    for (int i=1;i<=n;i++)
    for (int j=1;j<=m;j++)
    cin>>a[i][j];
    
    int x;
    cin>>x;
    int ok=0;
    
     for (int i=1;i<=n;i++)
     if (a[i][1]==x || a[i][m]==x)
     ok=1;
     
       for (int j=1;j<=m;j++)
       if (a[1][j]==x || a[n][j]==x)
     ok=1;
     
    if (ok==1)
    cout<<"DA";
    else
    cout<<"NU";
    return 0;
}
