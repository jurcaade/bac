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

  

  
