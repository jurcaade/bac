sub 2
1.a. n=247388
    m=0
  n=24378
  8<5 F m=8
  8<5 F m=16
  3<5 A m=10
  7<5 F m=17
  4<5 A m=9
  n=0
  2<5 A m=5
  tip 5 NU
  
  b.138, 318 
  c.
  #include <iostream>

using namespace std;

int main() {
    int n,m,c;
      cin>>n;
      m=0;
    do
    {
        c=n%10;
        n/=10;
            if (c<5)
                m=m-2*c;
            else
                m=m+c;
        
    }
    while (n!=0);
    
    if (m==0)
    cout<<"DA";
    else
    cout<<m<<" "<<"NU";
    
    return 0;
}

d.
    citește n (număr natural)
 m0
 cn%10; n[n/10]
│┌dacă c<5 atunci mm-2*c
││altfel mm+c
■└■
┌cat timp (n!=0) executa
│ cn%10; n[n/10]
│┌dacă c<5 atunci mm-2*c
││altfel mm+c
│└■
└■
┌dacă m=0 atunci scrie ‘DA’
│altfel scrie m, ‘NU’
└■

  2.
  struct procesor
  {
      char producator;
      unsigned int frecventa;
      float pret;
  }p[20];

3.
    
    
    
    
    
    
    
    
    
