sub 1
  1.c
  2.c
  3.a
  4.d
  5.b
 
sub 2
  1. r= -1 4 -6 20 -32 72 -x x -x x
  a) n=7
  i=1 x=0 y=1 j=1 1>0 nr=1
  i=2 r=-1 x=1 y=-1 j=2 -1>0 F
  i=3 r=-1 x=1 y=-1 j=2 r=4 x=-1 y=4 j=3 4>0 nr=2
  i=4 r=-1 x=1 y=-1 j=2 r=4 x=-1 y=4 j=3 r=-2-4=-6
  nr creste la i nr impar
  la 1,3,5,7 => nr=4
  tip 4
  
  b) 19,20
  
  c)#include <iostream>

using namespace std;

int main() {
   int n,nr,x,y,j,r,i;
   cin>>n;
   nr=0; i=1;
   while(i<=n)
   {
       x=0; y=1; j=1;
       while(j<i)
       {
           r=2*x-y;
           x=y;
           y=r;
           j++;
           
       }
       i++;
       if (y>0)
       nr++;

       
   }
   cout<<nr;
}

d)
citește n (număr natural nenul)
nr0; 
┌cât timp i<-1,n execută
│ x0; y1; j1
│ ┌cât timp j<i execută
│ │ r2*x-y; xy; yr
│ │ jj+1
│ └■
│ ┌dacă y>0 atunci
│ │ nrnr+1
│ └■
└■
scrie nr

2.f(10,5)=2+f(5,5)=4
  f(5,5) =1+f(0,5)=2
  f(0,5) =0+f(0,0)=1
  f(0,0)=1

  f(10,6)=1+f(4,6)=5
  f(4,6)=1+f(4,2)=4
  f(4,2)=2+f(2,2)=3
  f(2,2)=1
  x1=6
  x2=10

  3.#include <iostream>

using namespace std;

int main() {
    int a[10][10];
    
    for (int i=0;i<4;i++)
     for (int j=0;j<5;j++)
     a[i][j]=16+j-5*i;
     
     
      for (int i=0;i<4;i++)
 {    for (int j=0;j<5;j++)
     cout<<a[i][j]<<" ";
     cout<<endl;
}
    return 0;
}

sub 1
1.
#include <iostream>

using namespace std;
void prodprim(int n, int &p)
{
    p=1;
    int k=0;
    int d=2;
    while(n>1)
    {
        k=0;
        
        while(n%d==0)
     {   n/=d;
        k++;
    }
    
      if (k>0)
      p*=d; 
      
      d++;
    }
    
    
}
int main() {
   int n,p;
   cin>>n;
   prodprim(n,p);
   cout<<p;
    return 0;
}

2.
  #include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[101],*p;
    cin.getline(s,101);
    p=strtok(s," ");
    int nrc=0,nrv=0;
    while(p!=NULL)
    {
        nrc=0; nrv=0;
        for (int i=0;i<strlen(p);i++)
        if (strchr("aeiou",p[i]))
        nrv++;
        else
        nrc++;
        
        if (nrv<nrc)
        cout<<p<<endl;
        
        p=strtok(NULL," ");
    }
    
    return 0;
}

3.
  #include <iostream>

using namespace std;

int main() {
    int p1,p2,aux,aux2,nr=0;
    cin>>p1>>p2;
    int n=0;
     n*=100000;
    
    for (int i=1;i<=9;i++)
     for (int j=1;j<=9;j++)
{       
        if (i*j==p1)
 {       n=i*1000000+j*100000;
    int aux=n;
    
    for (int i=1;i<=9;i++)
     for (int j=1;j<=9;j++)
   {  n=aux;
       if (i*j==p2)
       { 
          n=n+i*10+j;
          aux2=n;
         
          for (int k=0;k<=9;k++)
          {   n=aux2;
              n=n+k*10000+k*1000+k*100; 
              cout<<n<<" ";
          }
        }
    }     
}
          
}

    
    
    return 0;
}

  
