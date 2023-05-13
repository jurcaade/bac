sub 1
  1.b
  2. a) 55533
     b) 712 702 722 -722 -702 -712
    c)
  citeşte n
 (număr întreg)
 m0
 p1
 x0
┌dacă n<0 atunci
│ n-n
└■
┌cat timp (n!=0) executa
│ cn%10
│ n[n/10]
│┌dacă c>m atunci
││ mc
│└■
│ xm*p+x
│ pp*10
└
 scrie x 
 #include <iostream>

using namespace std;

int main() {
    int n,p,x,m,c;
    cin>>n;
    m=0; p=1; x=0;
    if (n<0)
    n=-n;
    
    do 
    {
        c=n%10;
        n/=10;
        if (c>m)
        m=c;
        
        x=m*p+x;
        p*=10;
    }while(n!=0);
    
    cout<<x;
    return 0;
}

sub 2.
  1. a
  2. c - avem 20 arce - graf comlet orientat, grup 3 varfuri si 2 varfuri intre ele exista 6 muchii, 12 arce, scoatem 6 arce dintr un sens, apoi
  o sa avem 2 componente tare conexe.

