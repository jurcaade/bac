sub 1.
  1.d
  2. (7,1,2,5,4)
   f(0,4,v) = f (0,2,v) + f(3,4,v) =3
    f (0,2,v) = f(0,1,v) + f(2,2,v) =2
  f(0,1,v) = f (0,0,v) + f(1,1,v) =1
  f(2,2,v) = 1
  f (0,0,v) = 0
  f(1,1,v) = 1
  f(3,4,v)= f(3,3,v) + f(4,4,v)=1
  f(3,3,v)=0
  f(4,4,v)=1
  => b
  3.  {Alin(1,2), Bogdan(2), Cristian (1), Răzvan(3,4), Ștefan(3,4), Valentin(1,2)}
     {Cristian, Valentin, Ștefan, Răzvan}
    {Valentin, Alin, Razvan, Stefan} => c
   4.a
   5.c
   
sub 2
 1.
      a. pt 1679 nr=1
          pt 16 nr=2
      pt 187 nr=3
      tip 3
      b. 2273, 2235
      c. #include <iostream>

using namespace std;

int main() {
    int n,x,nr,i,y;
    cin>>n>>x;
    nr=0; i=1;
    while (i<=n)
    {
            cin>>y;
            while (y!=0 && y%2!=x%2)
            y/=10;
            
            if (y==x)
            nr++;
            
            i++;
        
    }
    cout<<nr;
    return 0;
}

d.
  citește n,x (numere naturale nenule)
nr0; 
┌pentru i<-i,n execută
│ citește y (număr natural)
│┌cât timp y≠0 și y%2≠x%2 execută
││ y[y/10]
│└■
│┌dacă y=x atunci nrnr+1
│└■
│ 
└■
scrie nr

2. 3,6,1,4 
 3. #include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[101][101];
    int i,j, ok=0;
    
    
   for (i=0;i<3;i++)
    for (j=0;j<15;j++)
    cin>>a[i][j];
  
    
    for (j=0;j<15;j++)
    if (a[0][j]==a[2][j])
    if(a[1][j-1]==a[1][j+1])
    ok=1;


cout<<ok;
    
    //cout<<ok;
    return 0;
}
