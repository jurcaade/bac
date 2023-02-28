sub 1.
  1. c
  2. b
  3. a
  4. c
  5. d
  
  2. a ****
     b 1, 158
     c #include <iostream>

using namespace std;

int main() {
    unsigned int m,n;
    int aux;
    cin>>m>>n;
    if (m>n)
    {
        aux=m;
        m=n;
        n=aux;
    }
    
    if (m%2==0)
    m=m+1;
    
    while (m<=n)
    {
        m=m+2;
        cout<<'*';
    }
    return 0;
}
d.
  citește m,n
 (numere naturale)
┌dacă m>n atunci
│ n→m
└■
┌dacă m%2=0 atunci
│ mm+1
└■
┌repeta 
│ mm+2
│ scrie ‘*’
└pana cand m>n

2.f(2)=2
  f(21)=21-f(19)=10
  f(19)=19-f(17)=11
  f(17)=17-f(15)=8
  f(15)=15-f(13)=9
  f(13)=13-f(11)=6
  f(11)=11-f(9)=7
  f(9)=9-f(7)=4
  f(7)=7-f(5)=5
  f(5)=5-f(3)=2
  f(3)=3
  
3. x=bac2021
tip 2021
tip b!a!c!
  
sub 3
  1. #include <iostream>

using namespace std;

int imog(int x, int y, int &rez)
{
    int og=0,s=0, p=1;
    while (x>0)
    {
        if (x%10%2!=0)
        og=og*10+x%10;
        x/=10;
    }
    
    while (y>0)
    {
        if (y%10%2!=0)
     {   s=s+y%10*p;
        p*=10;
    }
        y/=10;
    }
    
    if (og==s)
    rez=1;
    else
    rez=0;
    
    return rez;
}
int main() {
    int x,y,rez;
    cin>>x>>y;
    
    cout<<imog(x,y,rez);
    return 0;
}





