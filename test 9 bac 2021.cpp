sub 1
  1. a
  2. {salcie, carpen, larice, fag, ulm}
ultima : { ulm fag larice carpen salcie}
  penultima: { ulm fag larice salcie carpen}
antepenultima: { ulm fag carpen larice salcie}
c
3.d
4.a
5.b

sub 2
  1. a. n=3 
i=1 
 j=1 +++@
 j=2 ++
 j=3 +@
 +++@+++@
 
 b. 4->4+3+2+1=10
  5->15
  6->21
  Deci 4,5
  
  c. #include <iostream>

using namespace std;

int main() {
    unsigned int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    { for (int j=i;j<=n;j++)
     cout<<'+';
    
    if (i%2!=0)
    cout<<'@';
    }
    return 0;
}

d.
  citeşte n
 (număr natural nenul)
  i<-1
┌cat timp i<=n executa
│┌pentru ji,n execută
││ scrie ’+’
│└■
│┌dacă i%2≠0 atunci
││ scrie ’@’
│└■
| i<-i+1
└■

2. x=1 f(10,1)=10+f(9,1)
  f(9,1)=9+f(8,1)=45
  f(8,1)=8+f(7,1)=36
  f(7,1)=7+f(6,1)=28
  f(6,1)=21
  f(5,1)=15
  f(4,1)=10
  f(3,1)=6
  f(2,1)=3
  f(1,1)=1
  => x=6,7,8,9
  
  3.  for(i=0;i<4;i++)
        for(j=0;j<5;j++)
        a[i][j]=(i+j)%3;

  sub 3
    1.#include <iostream>

using namespace std;
void divizor(int a, int b, int k, int &nr)
{
    for (int i=a;i<=b;i++)
    if (i%k==0 && i%10==k)
    nr++;
}
int main() {
  int a,b,k,nr=0;
  cin>>a>>b>>k;
  divizor(a,b,k,nr);
  cout<<nr;
    
}
