sub 1
  1. a
  2. d
  3. d
  4. b
  5. c
  
 sub 2
  1.a y=8 x=5
   y=8 11 nr=3 
   y=7 11 nr=9
   y=6 121 nr=27
   y=5 121 nr=81
  1111121121
  
  b 6,15
  c #include <iostream>

using namespace std;

int main() {
    int x,y,nr,aux;
    cin>>x>>y;
    if (x>y)
    {
        aux=x;
        x=y;
        y=aux;
    }
    
    nr=1;
    for (int i=y;i>=x;i--)
    {
        cout<<1;
        if (nr>=x)
        cout<<2;
        nr=nr*3;
        cout<<1;
    }
    return 0;
}

d citește x,y
 (numere naturale nenule)
┌dacă x>y atunci xy
└■
nr1
i<-y
┌cat timp i>=x execută
│ scrie 1
│┌dacă nr≥x atunci
││ scrie 2
│└■
│ nrnr*3
│ scrie 1
  i=i-1
└■

2.{cinteză, ciocârlie, mierlă/, privighetoare/, scatiu}
 (ciocârlie, privighetoare, scatiu)
(ciocarlie, scatiu)
(mierla,scatiu)

3. fs.a=2020*f.b-2021*f.1;
    fs.b=2021*f.b;

sub 3
  1.#include <iostream>

using namespace std;
void divPrim (int n, int &s)
{

    int d=2,p;
    while (n>1)
    {
        p=0;
        while (n%d==0)
        {
            p++;
            n/=d;
        }
       
        if (p%2!=0)
       s+=d;
        
        d++; 
    }
    
}
int main() {
    int n,s=0;
    cin>>n;
    divPrim(n,s);
    cout<<s;
    return 0;
}


