sub 1
  1.c
  2. 28 282 288 29 8 => al 10 lea ->  a
  3.c
  4.d
  5.b
  
sub 2
  a. y=21097553
  b. 2012, 2021
  c   #include <iostream>

using namespace std;

int main() {
    int x, p, y,c;
    cin>>x;
    p=1; y=0;
    do{
        c=x%10; x/=10;
        if (x%10<c)
            y=y*10+c;
            else
            y=c*p+y;
        
        p*=10;
        
        
    }while (x!=0);
    cout<<y;
    return 0;
}

d
citește x (număr natural)
 p1; y0

┌cat timp x!=0 executa
│ cx%10; x[x/10]
│┌dacă c≠0 atunci
││┌dacă x%10<c atunci yy*10+c
│││altfel yc*p+y
││└■
││ pp*10
│└■
└
 scrie y
  
