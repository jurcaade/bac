sub 1
1. b
2. a f(4770777,7)=1+f(477077,7)=3
                       =1+f(47707,7)=1
                            =1+f(4770,7)=1
                                  =0
                                  => 3 b
3.a
4.d
5.c

sub 2
1 a) n=205579
m=10
c=9 m=9
c=7 m=7
c=5 m=5
c=0 m=0
c=2 2<=0 F
m=-1
n=0 A
tip -1

b) 7889 7789 7899

c)  #include <iostream>
using namespace std;
int main()
{
unsigned int n;
cin>>n;
int m,c;
m=10;
  if (n==0)
    m=0;
  else
    do
      {
      c=n%10; n/=10;
      if (c<=m)
      m=c;
      else
      m=-1;
      }
    while (n!=0);
cout<<m;
return 0;
}

  d) citește n (număr natural)
m10
┌dacă n=0 atunci
│ m0
│altfel
|cn%10; n[n/10]
│┌cat timp n!=0 executa
││ cn%10; n[n/10]
││┌dacă c<=m atunci mc
│││altfel m-1
││└■
│└■
└■
scrie m

 2)  149 167 347
 3) s1=bac2021
 tip 7
 s2=2021
 s2=2020-
 s2=2020-2021
 tip 2020 - 2021
 
 sub 3
 1. #include <iostream>

using namespace std;
void divX (int n, int x)
{
     int i=n*x;
    while (n>0)
{    
        cout<<i<<" ";
        n--;
        i=i-x;
  }
}
int main() {
    int n,x;
    cin>>n>>x;
    divX(n,x);
    return 0;
}
            
            
2)
#include <iostream>

using namespace std;

int main() {
   int n, a[101][101];
   cin>>n;
   for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
    cin>>a[i][j];
    
    
    for (int i=1;i<=n;i++)
    cout<<a[i][1]<<" ";
     for (int i=2;i<=n;i++)
    cout<<a[n][i]<<" ";
    for (int i=n-1;i>=1;i--)
     cout<<a[i][n]<<" ";
      for (int i=n-1;i>1;i--)
     cout<<a[1][i]<<" ";
    return 0;
    
}
            

3)
         
  #include <iostream>
  #include <fstream>

using namespace std;

int main() {
  fstream cin("bac.in",ios::in);
    int x, u,z , v[100], nr=0, k, y=2;
    while (cin>>x)
       v[x]=1;

  for (k=98 ;k>=10; k--)
   { 
       if (y>0)
      { 
          u=k%10;
          z=k/10;
    
            if(u!=z && v[k]!=1)
       {
           cout<<k<<" ";
            y--;
            nr++;
        }
        }
   }
 if (nr==0)
 cout<<"nu exista";
    return 0;
}
/*Algoritmul este eficient dpdv al timpului de executie deoarece, are o complexitate O(n), unde n reprezinta numarul de elemente din fisier.
Algoritmul citeste numerele din fisier si le memoreaza intr un vector de pozitie. Cu structura repetitiva for verificam numerele de doua cifre
incepand cu 98 daca au cifra unitatilor si cifra zecilor diferita si daca nu apartin sirului de numere. Daca conditia este adevarata afisam 
numarul de doua cifre si scadem y, y reprezentand numarul de termeni ce trebuie afisati. De asemenea cu variabila nr numaram termenii care
indeplinesc conditia. In final daca nu exista nici un numar ce indeplineste conditia afisam textul "nu exista". */
