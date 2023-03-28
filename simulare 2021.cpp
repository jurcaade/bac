sub 1
  1.c
  2. 28 282 288 29 8 => al 10 lea ->  a
  3.c
  4.d
  5.b
  
sub 2
  a. y=2197553
  b. 2012, 2201
  c   #include <iostream>

using namespace std;

int main() {
    int x, p, y,c;
    cin>>x;
    p=1; y=0;
     
    while (x!=0){
        c=x%10; x/=10;
        if (c!=0)
   {     if (x%10<c)
        
            y=y*10+c;
            else
            y=c*p+y;
        
        p*=10;
    }
        
    }
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

2. 61265 lant neelementar
    3653 ciclu elementar
    
3. s=ELITIST
   i=2 s=ELETIST
   i=3 s=ELEMIST
   i=4 s=ELEMEST
   i=5 s=ELEMENT
   s= ELEMENT
   
   sub 3
