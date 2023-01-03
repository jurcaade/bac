sub 1
  1.b
  2. *54321*543*5*////
 f(54321) tip * tip 54321 f(543) tip /
                              = tip * tip 543 f(5) tip /
                                                = tip * tip 5 f(0) tip /
                                                                = tip * tip /
  => c
  3. (MAVA, MCA, MCFR, MNHCV, MNLR, MNT)
 (MCA, MNHCV, MNLR, MNT)
  b
  4.a
  5.b

sub 2
  1. a) cn=250887 m=0 p=1 x=0 c=7
        cn=25088 m=0 p=1 x=0 c=8
        cn=2508 m=0 p=1 x=0 c=8
        cn=250 m=0 p=1 x=0 c=0
        cn=25 m=0 p=10 x=0 c=5
        x=2
        m=20
        x=8
        m=820 
        m=8820
  tip 8820
  
  b) 842 642
   c) #include <iostream>

using namespace std;

int main() {
   unsigned int n;
   cin>>n;
   int x=0, m=0,p=1,cn,c;
   while (x<10)
   {
       cn=n;
       while (cn!=0)
       {c=cn%10;
       cn/=10;
       if (c==x)
       {
           m=c*p+m;
           p*=10;
           
       }
       }
       x+=2;
       
   }
   cout<<m;
   
    return 0;
}     

d) citește n
 (număr natural nenul)
x0; m0; p1
┌cât timp x<10 execută
│ cnn
|daca cn≠0 atunci
│┌repeta
││ ccn%10; cn[cn/10]
││┌dacă c=x atunci
│││ mc*p+m; pp*10
││└■
│└pana cand cn=0
│ xx+2
└■
scrie m
   
        2.
        
struct muzeu
{
  unsigned int numar;
  struct FaraNume
    {
        char nume[21];
        char colectie[21];
    }exponat[101]
  }m;

3. s=muzeu
s[0]=n
tip un
s=zeu
tip zeu
un
zeu


sub 3
  1. #include <iostream>

using namespace std;
int suma(int n)
{
    int ok=0, s=1;
    for (int d=1; d<=n; d++)
    {  ok=0;
        for (int k=2; k<=d/2;k++)
         if (d%k==0)
            ok=1;
            
     if (ok==1)
         if (n%d==0)
        s+=d;
    }
    return s;
}
int main() {
    int n;
    cin >> n;
  cout<<suma(n);
    return 0;
}
  
  
  
  
  
  
  
