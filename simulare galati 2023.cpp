sub 1.
  1.a
  2. f(4)=1/f(3)-2*f(2)=0-6=-6
     f(3)=1/f(2)-2*f(1)=0-2=-2
     f(2)=1/f(1)-2*f(0)=1+2=3
     f(1)=1/f(0)-2*f(-1)=1/-1-2*-1=-1+2=1
     f(0)=f(-1)=-1
=> d
  3.a
  4.c
  5.b
  
  sub 2.
  1. a 1535
     b 2399
     c#include <iostream>

using namespace std;

int main() {
    int x,y,z,a;
    cin>>x;
    y=0; z=1;
    do {
        a=x%10;
        
        if (a>5)
        y=y+z*5;
        else
        y=y+z*a;
        
        x/=10;
        z*=10;
        
    }while (x!=0);
    cout<<y;
    return 0;
}

d.
  citește x (nr natural)
y0
z1
-cat timp x!=0 executa
 ax%10
 -dacă a>5 atunci
 yy+z5
 altfel
 yy+za
 -
 x[x/10]
 zz10
-- sfarsit cat timp
scrie y


2.
 {vanilie(/), ciocolată(|), fistic, mentă, tiramisu, pepene(/), cafea(|)}
inainte: vanilie fistic tiramisu cafea
 (vanilie, mentă, tiramisu, cafea)
dupa: ciocolata,fistic,menta,tiramisu

3. s1=anvelopa
s=pomelo
p=elo-pomelo = 3
tip 3
  s1=pomelopa
s2=pomelopa
s2[6]=\0 => s2=pomelo
tip pomelopa pomelo

sub 3
  #include <iostream>

using namespace std;

void inserare(int &n)
{ int nr1=0,nr2=0,s=0,p=1,x,maxi=0,pre=0;
  
   while (n>0)
   {
       nr1=0;
       nr2=0;
       x=n%10;
       
     for (int d=1;d<=x;d++)
        if (x%d==0)
        nr1++;
        
        for (int d=1;d<=pre;d++)
        if (pre%d==0)
        nr2++;
   
        
        
    if (nr1==2 && nr2==2)
    {
       
    if (pre>x)
    maxi=pre;
    else
    maxi=x;
    
    
     p*=100;
    s=s+x*p+maxi*(p/10);
   
   }
   else
  { p*=10;
    s=s+x*p;
   
   }
  pre=x; 
  n/=10;
   }  
   
   cout<<s/10;
}
int main() {
   int n;
   cin>>n;
   inserare(n);
    return 0;
}

2.
  #include <iostream>

using namespace std;

int main() {
    int a[101][101],n,k,ok=1;
    cin>>n>>k;
   
     for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
    cin>>a[i][j];
     int x=a[k][k];
    
   
    for (int j=k;j<=n-k+1;j++)
{    if (a[k][j]!=x)
     ok=0;
     if (a[n-k+1][j]!=x)
     ok=0; 
}
    for (int i=k;i<=n-k+1;i++)
{     if (a[i][k]!=x)
     ok=0;
     if (a[i][n-k+1]!=x)
     ok=0;
}


if (ok==1)
cout<<"Corect";
else
cout<<"Incorect";
    return 0;
}

3.
  #include <iostream>
#include <math.h>
using namespace std;

int main() {
    int v[100],y[100],s[100],m,x,i=1,j=1,n,nc=0,pf,aux,p;
    while(cin>>x)
    {
        if (x>99 && x<1000)
        v[i++]=x;
        if (x>999)
        y[j++]=x;
        
    }
    n=i-1;
    m=j-1;
   
    for (i=1;i<=n;i++)
    {
       
        int nr=0;
        for (j=1;j<=m;j++)
        {
        aux=y[j];
        nc=0;
        
        while (y[j]>0)
        {
            y[j]/=10;
            nc++;
            
        }
        y[j]=aux;
        pf=y[j]/pow(10,nc-2);
  
         if (pf==v[i]/10)
         {nr++;
         p=pf;
        }
        }
        
    
         if (nr>1)
        s[p]=1;
    
    }
  for (int p=99;p>=10;p--)
    if (s[p]==1)
    cout<<p<<" ";
  
    return 0;
}


var 2
  #include <iostream>
#include <fstream>

using namespace std;

int nrcifre(int n) ///log10(n)+1, daca n>0
{
    int nr=0;
    while(n!=0)
        {
            nr++;
            n/=10;
        }
    return nr;
}

int main()
{
    int vM3[100]={},ve3[100]={},x,ok=0,pre,i,apmax=0;  
  //vM3-vector aparitii numere cu mai mult de 3 cifre
    ifstream f("bac.txt");                             
  //ve3-vector aparitii numere cu 3 cifre
    while(f>>x)
    {
        pre=x;
        while(pre>99)      //se gaseste prefixul(primele 2 cifre)
            pre/=10;
        if(nrcifre(x)>3)   //daca nr de cifre e mai mare decat 3, se creste vectorul de aparitii pe pozitia prefixului in vM3
            {vM3[pre]++;
            if(vM3[pre]>apmax)  //se afla prefixul cu cele mai multe aparitii
                apmax=vM3[pre];

            }
        if(nrcifre(x)==3)      ////daca nr de cifre e 3, se creste vectorul de aparitii pe pozitia prefixului in ve3
            ve3[pre]++;
    }
    for(i=99;i>=10;i--)
        if(vM3[i]==apmax && ve3[i]>=1)    //se afiseaza descrescator valorile cu aparitii maxime in vM3 si cu cel putin o                                                 aparitie in ve3
        {
            cout<<i<<" ";
            ok=1;
        }

    if(ok==0)       //tratarea cazului nu exista
        cout<<"nu exista";
    return 0;
}

