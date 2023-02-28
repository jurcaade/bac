sub 1.
  1. d
  2. f(1234) r 0*4+f(123) =4
  f(123) r 1*3+f(12)=4
  f(12)= 0*2+f(1)=1
  f(1)=1*1+f(0)=1
  f(0)=0
  b.
  3. a 5 a 123
     a 6 a 1230 ---a
  4.b
  5.c
 
  sub 2
  1. a 3 4 6 8 9 15 
  b 4 2 3 
  c 4 3 3, 2 1 1
  #include <iostream>

using namespace std;

int main() {
   unsigned int n,x,y;
   cin>>n>>x>>y;
   int ok,i;
   ok=0;
   for (i=1;i<=n;i++)
   {
       if ((i%x==0 && i%y!=0) || (i%x!=0 && i%y==0))
    {   cout<<i<<" ";
       ok=1;
   }
       
   }
   if (ok==0)
   cout<<0;
}

d.
  citește n,x,y
 (numere naturale nenule, x≤n, y≤n)
 ok0 i=1
┌cat timp i<=n executa
│┌dacă (i%x=0 și i%y≠0) sau
││ (i%x≠0 și i%y=0) atunci
││ scrie i, ' '
││ ok1
│└■
| i=i+1
└■
┌dacă ok=0 atunci scrie 0
└■

2. s=ROMANIA
     0123456
  
I=6  ROMANIA
 J=3 I=3 ROMANIA
 J=2 I=1 RAMONIA
 J=1 I=0 ARMONIA
 J=0 I=0 ARMONIA
tip ARMONIA

3.
a[0].dp.anNastere=2000;
a[0].venit=4000;


sub 3
  1.
  #include <iostream>
using namespace std;

void cuburi (int n)
{
    while (n>0)
    {
        cout<<n*n*n<<" ";
        n--;
        
    }
}


int main() {
    int n;
    cin>>n;
    cuburi(n);
    return 0;
}

2.
  #include <iostream>

using namespace std;

int main() {
    int a[101][101],k,n;
    cin>>k>>n;
    
    
    for(int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
    {    if (i==j)
        a[i][j]=a[i-1][j-1]+k;
        if (i<j)
        a[i][j]=a[i][j-1]+1;
        if (i>j)
         a[i][j]=a[i-1][j]+1;
}
        
        
    for(int i=1;i<=n;i++)
 {       for (int j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
}

    return 0;
}

