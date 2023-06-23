sub 1
1. d
2. b
3. a
4. c
5. a

sub 2
1. a) i=1 1 1 1
      i=2 2 2 2
  t=3
  for i 3 3
  1 1 1 2 2 2 3 3

  b) 45, 49
  c)#include <iostream>

using namespace std;

int main() {
    int n,k,t,i,j;
    cin>>n>>k;
    t=1;
    for (i=1;i<=n/k;i++)
 {   for (j=1;j<=k;j++)
    cout<<t<<" ";
    t++;
}

for (i=n%k;i>=1;i--)
cout<<t<<" ";

    return 0;
}

d)

citește n,k
 (numere naturale nenule)
t1
┌pentru i1,[n/k] execută
│┌pentru j1,k execută
││ scrie t,' '
│└■
│ tt+1
└■
  i=n%k
┌cat timp i>=1 executa
│ scrie t,' '
|  i=i-1
└■


      2. f(0) =0
      f(2020)= 0+ f(101) =6
      f(101)=1+f(5) =6
      f(5)= 5+ f(0) =5
      
3. 3 componente conexe
      cea mai mica: 4,7
