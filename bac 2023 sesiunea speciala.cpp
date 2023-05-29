sub 1.
  1.c
  2.  f(35,3)=2+10*f(11,3)=1022
      f(11,3)=2+10*f(3,3)=102
      f(3,3) =0+10*f(1,3)=10
      f(1,3) =1+10*f(0,3)=1
      f(0,3) =0
=> a
3.d
4. {A, M, U, R, G}
R inaintea lui A si M
GURMA -> GRAMU
=> b
5.c

sub 2.
  1. a) 233223222 6 de 2
  b) x=4
  2333223322232222 10 de 2 => 1+2+3+4
  1+2+3+4+5+6=21 apartine intervalului => 6,7,8,9
  c)#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
    if (j<=i)
    cout<<2;
    else
    cout<<3;
    return 0;
}

d)
  citește n
 (număr natural nenul)
  i=1
┌cat timp i<=n execută
│┌pentru j1,n execută
││┌dacă j≤i atunci
│││ scrie 2
│││altfel
│││ scrie 3
││└■
│└■
| i=i+1
└■

