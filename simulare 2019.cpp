sub 1
  1.d
  2.d
  3.a
  4.b
  5.c
  
sub 2
  a. x=16 x=4 p=1 x=1 p=2
  pm=2; y=16
    x=12 x=3 p=1 y=12
    x=8 x=4 p=1 x=1 p=2
    
    tip 12
    
    b. 2019, 2016
c.
    #include <iostream>

using namespace std;

int main() {
    unsigned int a,b,k;
    cin>>a>>b>>k;
    int pm,y,i,p,x;
    pm=0; y=0; i=b;
    while (i>=a)
    {
        x=i; p=0;
        while (x%k==0)
        {
            x/=k;
            p++;
        }
        if (p!=0 && (p<pm || pm==0))
     {   pm=p;
        y=i;
    }
        i--;
    }
    cout<<y;
    return 0;
}

d. citeşte a,b,k
 (numere naturale, 1≤a≤b, k>1)
 pm0; y0;
┌pentru i<-b,a,-1 execută
│ xi; p0
│┌cât timp x%k=0 execută
││ x[x/k]; pp+1
│└■
│┌dacă p≠0 și (p<pm sau pm=0)atunci
││ pmp; yi
│└■
│ 
└■
 scrie y

2. struct eveniment
{
  unsigned int id;
  struct
  {
    unsigned int luna;
    unsigned int zi; 
  }data;
  
}e;

3.
  #include <iostream>

using namespace std;

int main() {
    int a[6][6],i,j;
    
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
 {      a[0][0]=0;
        if (j==0)
        a[i][j]=a[i-1][j]+2;
        else
        a[i][j]=a[i][j-1]+1;
}
        
        for(i=0;i<5;i++)
 {       for(j=0;j<5;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
}
        
    return 0;
}

sub 3
 1.
  #include <iostream>
#include <math.h>

using namespace std;

void inserare(int &n)
{
    int x=0,p=1,pre=0,y=0,d=0;
     while (n>0)
    {
        pre=y;
       y=n%10;
       d=pre-y;
       
        x=x+n%10*p+(abs(d)*p/10);
        p*=100;
     
        n/=10;
    }
    n=x;
}

int main() {
    int n;
    cin>>n;
   inserare(n);
    cout<<n;
    return 0;
}
  
  2.
    #include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[51],m[4][51]={"COLEGIUL", "LICEUL", "NATIONAL", "TEORETIC"},*p;
    int ok=0;
    
    cin.getline(s,51);
    p=strtok(s," ");
    
 
        while (p!=NULL)
        {
            ok=0;
           for (int j=0;j<strlen(p);j++)
                if (p[j]=='.')
              ok=1;
             
          if (ok==1)      
         {   for (int i=0;i<4;i++)
              if (p[0]==m[i][0])
            cout<<m[i]<<" ";
        }
           else
             cout<<p<<" ";
            
            
           p=strtok(NULL," ");
          
        }
    return 0;
}

3.
  #include <iostream>

using namespace std;

int main() {
    int n,x,p1=0,i1=0,p2=1000,i2=1000;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>x;
        if (x%2==0)
         if (x>p1)
         p1=x;
        if (x%2!=0)
         if (x>i1)
         i1=x;
    }
    for (int i=1;i<=n;i++)
    {
        cin>>x;
        if (x%2==0)
         if (x<p2)
         p2=x;
        if (x%2!=0)
         if (x<i2)
         i2=x;
    }
    
    if (p1<i2 && i1<p2)
    cout<<"DA";
    else
    cout<<"NU";
    return 0;
}
Algoritmul parcurge primii n termeni si afla cel mai mare numar par si cel mai mare numar impar dintre acestea. Mai apoi algoritmul
parcurge ultimii n termeni ai sirului si afla cel mai mic numar par respectiv impar. In final se compara maximele dintre primii n termeni
cu minimele dintre ultimii 5 termeni prin compararea lor cu paritatea diferita.
  
  
  
  



