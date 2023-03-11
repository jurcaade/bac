sub 1
  1.c
  2.b
  3.a
  4.b
  5.b
  
  sub 2
  a. 4
  b. 45 46 47 48 49

  2.
  d.luna < e.dev.luna || (d.luna == e.dev.luna && d.zi < e.dev.zi)

  3.
    for(i=1;i<=5;i++)
     for(j=1;j<=5;j++)
     if (i<=j)
       a[i][j]=5-i;
       else
       a[i][j]=5-j;

sub 3
  1.
  #include <iostream>

using namespace std;
int Egal(int n)
{
    int pre=-1,x;
    
  
    while (n>0)
    {
        x=n%10;
        if (x%2!=0)
        {
         if (pre==-1)
            pre=x;
            else
        if (pre!=x)
        return 0;
        }
        
       n/=10;
    } 
    return 1;
}
int main() {
    int n;
    cin>>n;
   cout<<Egal(n);
    return 0;
}
