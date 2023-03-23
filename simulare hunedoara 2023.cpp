sub 1
  1. b
  2. ex(10542,1821,a)
  1>2 F
  a=24811
  => c
  3. b
  4. d
  5. d
  
  sub 2
  a. nr=13
  se verifica daca nr e prim
  tip 13/31=0
  tip 0
  
  b 1
  c#include <iostream>
#include <cmath>


using namespace std;

int main() {
    int n,nr,x,ok,j;
    cin>>n;
    nr=0;
    x=n;
    do
    {
        nr=nr*10+n%10;
        n/=10;
    }while (n!=0);
    ok=1;
    for (j=2;j<sqrt(nr);j++)
    {
        if (nr%j==0)
        ok=0;
    }
    if (ok)
    cout<<nr/x;
    else
    cout<<x/nr;
    return 0;
}
d. citeşte n (număr întreg)
  nr ← 0
  x←n
 | cat timp n!=0 executa
 | nr ← nr*10+ n % 10
 | n← [n/10]
 sfarsit cat timp
 ok ← 1
  j ← 2
  cat timp j<=[√nr] execută
   dacă nr % j=0 atunci
   ok ← 0
  sfarsit cat timp
 
  dacă ok atunci
  scrie [nr/x]
  altfel
  scrie [x/nr]
  sfarsit daca
  
 2. struct produs
 {
   char denumire[31];
   float pret;
     struct 
     {
     unsigned int zi,luna,an;
     }datae;
 }c[100];

sub 3
  ex 1
  #include <iostream>

using namespace std;

int nrdiv(int n)
{
     int nr=0;
    for (int d=1;d<=n;d++)
    if (n%d==0)
     {  
         nr++;
    }
    return nr;
}
void divizorik(int n, int k)
{
    int i=n+1;
   while (k>0)
   {
       
       if (nrdiv(i)==nrdiv(n))
    {   cout<<i<<" ";
       k--;
    }
    i++;
   }
}
int main() {
    int n,k;
    cin>>n>>k;
    divizorik(n,k);
    return 0;
}

ex 2
  #include <iostream>
#include <cstring>
using namespace std;


int main()
{
    int  lung=0, lmin=1000, st=-1, dr=-1,cod;
  char s[101];
cin.getline(s,101);

  for(int i=0; i<=strlen(s)-5; i++)
    for(int j=i+4; j<strlen(s); j++)
      {
        int v[10]={},ok=1; ///vect de aparitii
        for(int k=i; k<=j; k++)
          if(strchr("13579", s[k])){
            cod=s[k]-'0';
            v[cod]=1;
          }
        for(int poz=1; poz<=9; poz+=2)
          {
            if(v[poz]==0)
              ok=0;
          }
        lung=j-i+1;
        if(lung<=lmin && ok)
        {
          lmin=lung;
          st=i;
          dr=j;
        }
        
      }
  if(st!=-1)
    for( int i=st; i<=dr; i++)
      cout<<s[i];
  else cout<<"nu";
}

ex 3
 #include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int putere(int n)
{
    int k=0;
    while(n%3==0)
    {
        n/=3;
        k++;
    }

    if(n!=1) return -1;
    else return k;
}

int main()
{
    ifstream f("bacul.txt");
    int lun=0, lunmax=0,x,v[14]= {},e,sol[14]= {},ok=0;

    while(f>>x)
    {
         e=putere(x);
       //   cout<<e<<" ";
        if(e!=-1)
        {
            lun++;
          //  cout<<"+"<<lun<<endl;
            v[e]++;
        }
        else
        {
            if(lun>lunmax)
            {
                lunmax=lun;
                for(int i=0; i<14; i++)
                {
                    sol[i]=v[i];
                    v[i]=0;
                }
                lun=0;
            }
        }
    }
    if(lunmax==0)
        cout<<0<<endl<<"NU EXISTA SECVENTA";
    else
    {
        cout<<lunmax<<endl;
        for(int i=0; i<14; i++)
        {
            if(sol[i]!=0)
            {
                for(int j=0; j<sol[i]; j++)
                    cout<<pow(3,i)<<" ";
            }
        }
    }
}
