sub 1.
  1 c
  2 d
  3 d
  4 {cifre(1), divizori(4), matrici, pointeri(/), secvente, siruri(/)}
          1         2           3         4           5         6
       1342
       1345
       1352
       6532 c
  5 b (impartim 2020 in doua patrate perfecte deci avem 3 randuri)
       
            
sub 2
1.int x,y;

suma.numarator=f1.numarator*f2.numitor+f2.numarator*f1.numitor;
suma.numitor=f1.numitor*f2.numitor;

x=suma.numarator;
y=suma.numitor;

while (x!=y)
  if (x>y)
    x-=y;
  else
    y-=x;
  
suma.numarator/=x;
suma.numitor/=y;

2. c
#include <iostream>

using namespace std;

int main() {

 int n,c,m,i,x,s;
    cin>>n>>c;
    m=0; i=0;
    do
    {
        cin>>x;
        i++;
        do
        {
            s=0;
            do
            {
                s=s+x%10;
                x/=10;
            }while (x!=0);
            x=s;
        }while (x>=10);
        if (x==c)
        {
            m++;
        }
    }while (i!=n);
   cout<<m;
    return 0;
}
