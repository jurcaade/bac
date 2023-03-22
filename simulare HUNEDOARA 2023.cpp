sub 3
  ex 1
  #include <iostream>

using namespace std;

int nrdiv(int n)
{
     int nr=0;
    for (int d=1;d<=n;d++)
    if (n%d==0)
     {  
         nr++;
    }
    return nr;
}
void divizorik(int n, int k)
{
    int i=n+1;
   while (k>0)
   {
       
       if (nrdiv(i)==nrdiv(n))
    {   cout<<i<<" ";
       k--;
    }
    i++;
   }
}
int main() {
    int n,k;
    cin>>n>>k;
    divizorik(n,k);
    return 0;
}
