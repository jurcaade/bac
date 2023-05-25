sub 1
  1.c
  2. a) x=5 y=5
  0<1
  k=1
  x=24 y=2
  1<12
  k=12
  x=3 y=3
  12<1
  x=45 y=3
  12<15
  k=15
  tip 15
  
  b) 5 7 11 (nr prime)
  c)citeşte n
 (număr natural nenul)
 k0
 
┌cpentru i<-1,n execută
│ citeşte x
│ (număr natural nenul)
│ y2
│┌cât timp x>1 și x%y≠0 execută
││ yy+1
│└■
│┌dacă k<[x/y] atunci
││ k[x/y]
│└■
└■
 scrie k 
 
 d)#include <iostream>

using namespace std;

int main() {
   int n,k,i,x,y;
   cin>>n;
   k=0; i=1;
   while(i<=n)
   {
       cin>>x;
       y=2;
       while(x>1 && x%y!=0)
       y++;
       
       if (k<x/y)
       k=x/y;
       
       i++;
   }
   cout<<k;
}

sub 2
  1.a
  2.b
  3. nodurile {2,3,4}
    muchiile {(3,4)(4,2)}
4.
 int n=0;   
        for(int i=1;i<=11;i++)
        {      cin>>s;
          if (strstr(s,"are")==s+strlen(s)-3) 
          n++;
        }
  5.
    #include <iostream>

using namespace std;

int main() {
    int n,mij;
   float a[51][51];
    cin>>n;
    int aux;
    for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
    cin>>a[i][j];
    
    mij=n/2+1;
    
    
    for (int i=n+1;i>=1;i--)
    for (int j=1;j<=n;j++)
    if (i>mij)
      a[i][j]=a[i-1][j];

    
    for (int j=1;j<=n;j++)
 {  float ma=0;
     for (int i=1;i<=n+1;i++)
    
      if (i!=mij)
        ma=ma+a[i][j];
        
        a[mij][j]=ma/n;
        
    }
    
    
    
    for (int i=1;i<=n+1;i++)
 {   for (int j=1;j<=n;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}
    
    
    return 0;
}

sub 3
  1. f(1234)=0+f(123)=4
     f(123)=1*3+f(12)=4
     f(12)=0+f(1)=1
     f(1)=1+f(0)=1
     f(0)=0
  b
