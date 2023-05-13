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

sub 3
  1. f(7) tip 1 7>3 A f(4)
    f(4) tip 0 4>3 A f(1)
    f(1) tip 1
  101 c)
  
  2. 1(toc, creion, stilou, pană, pensulă)
     2(toc, creion, stilou, pensulă, pană),
     3(toc, creion, pană, stilou,pensulă),
     4(toc, creion, pană, pensulă, stilou),
     5(toc, creion, pensulă, stilou,pană)
     6(toc, creion, pensulă, pana,stilou)
     7(toc, pensulă, creion, stilou, pană)
      
       
3.
       #include <iostream>

using namespace std;

int prim(int x)
{
    int ok=1,nr=0;
    if (x==1)
    ok=0;
    
    for (int d=1;d<=x;d++)
    if(x%d==0)
    nr++;
    
    if (nr==2)
    ok=1;
    else
    ok=0;
    
  return ok;
    
}

int interval(int n)
{
  for (int i=n;i>=1;i++)
     if (prim(i)!=0)
        return i+1;

  

}



int main() {
  int n;
  cin>>n;
  cout<<interval(n);

    return 0;
}
