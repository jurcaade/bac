sub 1
  1.d
  2.a
  3. {agar, geranium, iasomie, paciuli, tuberoze}
inainte : agar paciuli tuberoze => b
(geranium, iasomie, paciuli)
  4. 1,2,3,4,8,10 => 6 noduri de tip frunza
  => c
  5.d
  
sub 2
  1. 
  a
  n=7 k=1 7>1 i=1
     n=6 
     i=1 tip 1
     i=0
     k=2
     6>2 A i=2
     n=4
     tip 2 2
     k=3
     4>3 A i=3
     n=1 tip 3 3 3
  k=4
     1>4 F i=1
      n=0
      tip 4
  1 2 3 3 3 4
  
  b 46 55
  c. #include <iostream>

using namespace std;

int main() {
    int n,k,i;
    cin>>n;
    k=1;
    while (n>=1)
    {
        if(n>k)
        i=k;
        else
        i=n;
        
        n-=i;
    
        while(i>=1)
      {  cout<<k<<" ";
        i--;
    }
        k++;
        
    }
    return 0;
}
d
citeşte n
 (număr natural)
 k1
┌cât timp n≥1 execută
│┌dacă n>k atunci ik
││altfel in
│└■
│ nn-i
│┌repeta 
││ scrie k,' '; ii-1
│└pana cand (i<1)
│ kk+1
└■

2.
struct complex
{
  float pre;
  float pim;
}z[20];

3.
  #include <iostream>

using namespace std;

int main() {
    int a[101][101],i,j;
        for(i=1;i<=5;i++)
         for(j=1;j<=5;j++)
        a[i][j]=i*5+j-5;
         
         for(i=1;i<=5;i++)
    {     for(j=1;j<=5;j++)
         cout<<a[i][j]<<" ";
         cout<<endl;
}
    return 0;
}

sub 3
  1.#include <iostream>

using namespace std;
int CifrePrime(int n)
{
    int ok=1,s=0;
    while (n>0)
    {
        int x=n%10;
        ok=1;
        
        for (int d=2;d<x;d++)
        if (x%d==0)
        ok=0;
        
        if (ok==1 && x!=1)
          s+=x;
      
    
        
        n/=10;
    }
    return s;
}
int main() {
    int n;
    cin>>n;
    cout<<CifrePrime(n);
    return 0;
}

2.
  #include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[101], *p, u, a, b;
    int cuv=0,ok=0, nr=0;
    cin.getline(s,101);
    p=strtok(s," ");
    
    while (p!=NULL)
    {
        cuv++;
        ok=0;
        
        for (int i=0;i<strlen(p);i++)
      {  if (cuv==1)
                if (!strchr("aeiou",p[i]) && ok==0)
              {      a=p[i];
                    ok=1;
                    nr++;
            }
        if (cuv==2)
         if (strchr("aeiou",p[i]) && ok==0)
          {      b=p[i];
                ok=1;
                nr++;
        }
        u=p[i];
      }
        p=strtok(NULL," ");
    }
    
   
    
    if (nr!=2)
    cout<<"nu exista";
    else
    cout<<a<<b<<u;
    
    
    
    return 0;
}
3.
  #include <iostream>

using namespace std;
int v[101];
int main() {
    int x,nr=1,nrmax=0;
    while (cin>>x)
    {
        v[x]++;
        
    }
    for (int i=1;i<=100;i++)
    {
      if (v[i]!=0 && v[i+1]!=0)
        nr+=v[i];
        else
       {
            if (nr>nrmax)
            nrmax=nr;
           nr=1;
        }
        
    }
    cout<<nrmax;
   
    return 0;
}
Algoritmul este eficient dpdv al timpului de executie deoarece are o complexitate O(n) unde n este nr elem din fisier.
  Algoritmul retine intr un vector de frecventa termenii din fisier si numarul de cate ori apare fiecare. Apoi se parcurg numerele de la 1 la 100 si se
  verifica daca numarul apartine fisierului in acest caz se aduna frecventa acestuia. Si se verifica daca e maxima
