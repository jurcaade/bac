sub 2.
  1. a 0+20+100+1900=2020
  tip 2020
  b 234 567
c.
  #include <iostream>

using namespace std;

int main() {
    unsigned int n;
    cin>>n;
    int m,i,x;
    m=0;
    for (i=1;i<=n;i++)
    {
        cin>>x;
        while (x%10 > x%10/10)
        x/=10;
        
        m+=x;
        
    }
    if (m>0)
    cout<<m;
    else
    cout<<"niciunul";
    
    return 0;
}
d.
  citește n (număr natural nenul)
 m0
 i=1
┌cat timp (i<=n) executa
│ citește x (număr natural)
│┌cât timp x%10 > [x/10]%10 execută
││ x[x/10]
│└■
│ mm+x
| i=i+1
└■
┌dacă m>0 atunci scrie m
│altfel scrie „niciunul”
└■
