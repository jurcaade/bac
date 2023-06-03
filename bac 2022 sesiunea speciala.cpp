sub 1
  1.d
  2.c
  3. Do/,Du/,Lod,Log,San
     San - nu pe prima poz
     Log - dupa Do,Du
     penultima: Log,Lod,San
     ultima: Log,San,Lod
=> a
4.s=info@rocnee.eu
s=info@rocnee
d=rocnee
c
5.b

sub 2
 1. n= 1237518
    x=18
   p=0
       x=51 
       x=75
       x=37 tip 37
       x=23 tip 23
       tip 37 23
       
       b)137,231
       c)#include <iostream>

using namespace std;

int main() {
    int n,x,p;
    cin>>n;
    do{
        x=n%100;
        if(x>1)
     {   p=(x%2)*(x%3)*(x%5)*(x%7);
            if(p!=0)
            cout<<x<<" ";
    }
    n/=10;
    }while(n>=10);

   
    return 0;
}

d
citeşte n (număr natural)
┌
│ xn%100
|  dacă x>1 atunci
││ p(x%2)*(x%3)*(x%5)*(x%7)
││┌dacă p0 atunci
│││ scrie x,’ ’
││└■
│└■
  cat timp (x>=10) executa
│┌dacă x>1 atunci
││ p(x%2)*(x%3)*(x%5)*(x%7)
││┌dacă p0 atunci
│││ scrie x,’ ’
││└■
│└■
│ n[n/10]
└sf cat timp

2. [1,2] [1,3] [1,5] [2,3] [2,5] [3,5]
3. for (int i=0;i<15;i++)
  s+=t[i].nrLocuri*t[i].pret;

sub 3
  1.#include <iostream>

using namespace std;
void patrate(int n, int &x, int &y)
{
    int ok=0;
    for (int i=2;i<=n && ok==0 ;i++)
    for (int j=i+1;j<=n;j++)
    if ((i*i)*(j*j)==n)
 {   x=i;
    y=j;
    ok=1;
}
    
    
    
}
int main() {
    int n,x,y;
    cin>>n;
    patrate(n,x,y);
    cout<<x<<" "<<y;
    return 0;
}
