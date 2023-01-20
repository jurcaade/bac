sub 1
  1.c
  2.d
  3.b
  4.c
  
sub 2
  2. struct clasa
  {
    unsigned int numar;
    struct FaraNume
    {
      float sem1,sem2;
    }elev[40];
  }p;

3.s=voalata
tip 7
 s=volt
 tip 7 volt
 
 sub 3
  1.
      
#include <iostream>

using namespace std;
void nrfp(int n, int &m)
{
    int d=2, nr=0, nrmax=0;
   for (int i=1;i<=n;i++)
    { d=2; nr=0;
    while (i>1)
    {
        if (i%d==0)
        {
        nr++;
        i/=d;
        }

    d++;
    }
    if (nr>nrmax)
    nrmax=nr;
    }
m=nrmax;

}
int main()
{
    int n,m=0;
    cin>>n;
   nrfp(n,m);
   cout<<m;

    return 0;
}
