sub 1
  1. c
  2. f2(41382) = f1(2)+f2(4138)=8
     f1(2)=2
     f2(4138)=f1(8)+f2(413)=6
     f1(8)=2
     f2(413)=f1(3)+f2(41)=4
     f1(3)=1 
     f2(41)=f1(1)+f(4)=3
     f(1)=1
     f(4)=2
  b
  3. bine -> b e i n
     4 bine 
     5 bnei
     6 bnie
     7 ebin
     d
 4. a
 5. b

sub 2
  1 a 27596
    b 572 352 10 0
    c #include <iostream>

using namespace std;

int main() {
    unsigned int x;
    cin>>x;
    int n=0,y,c;
    while (x!=0)
    {
        y=x; c=0;
        while (y>0)
        {
            if (y%10>c)
                c=y%10;
            
            y/=10;
        }
        n=n*10+c;
        cin>>x;
        
    }
    cout<<n;
    return 0;
}

d
citește x (număr natural)
n0
daca x≠0 atunci
┌repeta
│ yx; c0
│ ┌cât timp y>0 execută
│ │ ┌dacă y%10>c atunci
│ │ │ cy%10
│ │ └■
│ │ y [y/10]
│ └■
│ nn*10+c
│ citește x (număr natural)
└pana cand (x==0)
scrie n

2.
if(e.dataNasterii.an > dataEveniment.an || (e.dataNasterii.an == dataEveniment.an && e.dataNasterii.luna > dataEveniment.luna)
   || (e.dataNasterii.an == dataEveniment.an && e.dataNasterii.luna == dataEveniment.luna && e.dataNasterii.zi > dataEveniment.zi))
    cout << "ulterior";
else
    cout << "nu";

3. s=ABCDUECDA
 i=0 j=8
  A=A
  s=BCDUECD
  j=6
 i=1 j=5
  C=C
  s=BDUED
  
  sub 3
  1. #include <iostream>

using namespace std;
void afisare (int x, int y, int k)
{
    int nr=0;
    for (int i=x; i<=y; i++)
   {
       cout<<i<<" ";
       nr++;
    if (nr==k)
        {
        cout<<"*"<<" ";
        nr=0;
       }
   }
   cout<<"*";
}
int main() {
    int x,y,k;
    cin >> x>>y>>k;
   afisare(x,y,k);
    return 0;
}

  2.
    #include <iostream>

using namespace std;

int main() {
    int n,i=1,j=1,a[101][101],nr=0,aux;
    cin>>n;
    aux=n;
    while (n>0)
    {
        nr++;
        n/=10;
    }
    n=aux;

   for (int j=nr;j>=1;j--)
  { for (int i=1;i<=nr;i++)
    a[i][j]=n%10;
    n/=10;
}


 for (int i=1;i<=nr;i++)
 {   for (int j=1;j<=nr;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}
    return 0;
}

  3.
    #include <iostream>

using namespace std;

int main() {
    int x, v[101],i=1,n=0,ok=0,aux,j;

    while (cin>>x)
    {
        if (x%2==0)
     {    v[i++]=x;
         ok=1;
    }
      
    }
    n=i-1;
    
     for(i=1;i<=n;i++)
        for(j=i+1;j<=n;j++)
        if (v[j]<v[i]) {
         aux=v[i];
         v[i]=v[j];
         v[j]=aux;
    }
    
    for (i=1;i<=n;i++)
    cout<<v[i]<<" ";
       

 if (ok==0)
    cout<<"nu exista";


    return 0;
}

Algoritmul este eficient din punct de vedere al timpului de executie deoarece 
  
  
