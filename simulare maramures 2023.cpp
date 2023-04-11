sub 1.
  1.d
  2. f(432115,0)= f(43211,5)
  f(43211,5)=f(4321,51)
  f(4321,51)=f(432,511)
  f(432,511)=f(43,5112)
  => 511234 => c
  3. cifre care se impart exact la 4:={0,4,8)
    A3 luate cate 3 =6
    a
   4.b
   5.d
   
sub 2
 1.
 a n=6
 nr=0
 z=11
 11>1 aux=1 x=1 y=2
 11>2 aux=1 x=2 y=3
 11>3 aux=2 x=3 y=5
 11>5 aux=3 x=5 y=8
 11>8 aux=5 x=8 y=13
 11>13 F
 11=13 F
 z=5 
 5>1 aux=1 x=1 y=2
 ..
 5>3 aux=2 x=3 y=5
 5>5 F
 5=5 nr=1
 ..
 nr=4 pt 5,8,13,2
 b 3 11 4 6
  
  c.
  #include <iostream>

using namespace std;

int main() {
    int n,nr,x,y,z,aux,i;
    cin>>n;
    nr=0;
    for (i=1;i<=n;i++)
    {
        cin>>z;
        x=1;
        y=1;
        while(z>y)
        {
            aux=x;
            x=y;
            y=aux+y;
        }
        if (z==aux+x)
        nr++;
    }
    cout<<nr;
    return 0;
}

d.
citeşte n (număr natural nenul)
nr0
i=1
┌cat timp i<=n execută
│ citeşte z (număr natural nenul)
│ x1; y1
│┌cât timp z>y execută
││auxx; xy; yaux+y
│└■
│┌dacă z=aux+x atunci nrnr+1
│└■
| i=i+1
└■
scrie nr

2. int ok=0;
for (int i=1;i<=10;i++)
    if (v[i].data_lansare.an<2000 && v[i].nume[0]=='A')
    {cout<<v[i].titlu<<" ";
    ok=1;
    }
    if (ok==0)
    cout<<"nu exista";
    






