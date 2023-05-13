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
  
 3.
  if (x!=0)
  { rezultat.cat=2018/x;
  rezultat.rest=2018%x;
}
else
  cout<<"impartire nepermisa";

4. 3,4,5,7,8
 5.#include <iostream>

using namespace std;

int main() {
    int n,v[101],a[101][101];
    cin>>n;
    for (int i=0;i<n;i++)
    cin>>v[i];
    
      for (int j=0;j<n;j++)
      for (int i=0;i<n;i++)
        if (j%2==0) 
            a[i][j]=v[n-i-1];
        else
             a[i][j]=v[i];
         
         
         
    for (int i=0;i<n;i++)
 {   for (int j=0;j<n;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}
    return 0;
}
