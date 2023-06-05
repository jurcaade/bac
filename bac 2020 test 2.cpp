sub 1
  1.d
  2. f(2020,15) =f(2005,10)
  f(2005,10)=f(1995,5)
  f(1995,5)=f(1990,0)
  f(1990,0)=1990
c
3.{bentiță 40 , fileu 400, grip 30, manșete 30, mingi 10, rachetă 400, racordaj 70, șapcă 60}
1: (bentiță, fileu, grip, manșete)
2: (bentiță, fileu, șapcă)
3: (bentiță, grip, manșete, rachetă)
4: (bentita, racheta, sapca)
5: (fileu, grip, mingi, sapca)
b

4.b
5.a (6,2)

sub 2
  1. a) m=20950
  b) 40602 80204 20604
  c)#include <iostream>

using namespace std;

int main() {
    int n,m,c;
    cin>>n;
    m=0;
    do
    {
        c=n%10;
        n/=10;
        if (c==0)
        c=2;
        else
        {
            if (c%2==0)
            c=0;
        }
        m=m*10+c;
    }while(n!=0);
    
    cout<<m;
    return 0;
}

d)citeşte n (număr natural)
m0
n%10; n[n/10]
│┌dacă c=0 atunci c2
││altfel
││┌dacă c%2=0 atunci
│││c0
││└■
│└■
│ mm*10+c
┌cat timp (n!=0) executa
│ cn%10; n[n/10]
│┌dacă c=0 atunci c2
││altfel
││┌dacă c%2=0 atunci
│││c0
││└■
│└■
│ mm*10+c
└
scrie m


2. struct specie
{
  unsigned int cod;
  unsigned int nrExemplare;
  unsigned int varsta[10];
}s[20];


3.#include <iostream>

using namespace std;

int main() {
    int a[101][101];
    for (int i=0;i<5;i++)
    for (int j=0;j<7;j++)
    a[i][j]=1;
    
     for (int i=1;i<5;i++)
    for (int j=1;j<7;j++)
    a[i][j]=(a[i-1][j]+a[i][j-1])%10;
    
     for (int i=0;i<5;i++)
 {   for (int j=0;j<7;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}
    
    
    return 0;
}

sub 3
  1.#include <iostream>

using namespace std;

void fii(int n)
{
    for (int i=n;i>=1;i--)
    for (int j=1;j<i;j++)
    if (i*j==n)
    cout<<'('<<i<<" "<<j<<')'<<" ";
    
    
    
}
int main() {
    int n;
    cin>>n;
    fii(n);
    return 0;
}

2.
  #include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[101],t[101]={};
    cin.getline(s,101);
    char *p=strtok(s," ");
    
    while(p!=NULL)
   {
       if (p[0]!='-')
    {   strcat(t,p);
       strcat(t," ");
   }
       
       p=strtok(NULL," ");
   }
   strcpy(s,t);
    cout<<s;
   
    return 0;
}

3.
  #include <iostream>

using namespace std;

int main() {
    int x,n1=0,n2=0,n3=0;
    while (cin>>x)
    {
        if (x%100==20)
     {   
        if (x>n1)
        n1=x;
        if (x<n1 && x>n2)
        n2=x;
        if (x<n2 && x>n3)
        n3=x;
    }
        
    }
    
    cout<<n3<<" "<<n2<<" "<<n1;
}
