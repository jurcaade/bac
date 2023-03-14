sub 1.
  1.b
  2.a
  3.d
  4.i+j=n-1
    i=n-1-j
    i=100-1-20=79
  c
  5.b
  
  sub 2
  1. a x=21 y=47 n=46
  x=1 y=1
  x=21 y=45 n=44
  x=3 y=3
  tip 45
  
  b. 10 11
  c.#include <iostream>

using namespace std;

int main() {
    unsigned int m,n;
    cin>>m>>n;
    int x,y;
    x=1;
    while (x==1)
    {
        x=m; y=n; n=n-1;
        while (x!=y)
          {  if (x>y)
            x=x-y;
            else
            y=y-x;
    }
    }
    cout<<n+1;
    return 0;
}

d.citeşte m,n
 (numere naturale nenule, m<n)
 x1
┌cât timp x=1 execută
│ xm; yn; nn-1
│┌daca x≠y atunci
││┌repeta
│││┌dacă x>y atunci xx-y
││││altfel yy-x
│││└■
││└pana cand (x=y)
│└■
└■
scrie n+1
  
  2. 2,8
  3. if (x.temperatura>11)
    cout<<"CALDUROS";
        else if (x.temperatura<10)
          cout<<"RACOROS";
              else
                cout<<"NORMAL";

  
  sub 3
    1. #include <iostream>

using namespace std;
void schimb (int &n, int x, int p)
{
    int nr=0,p1=1,s=0;
    while (n>0)
    {
        nr++;
        
        if (nr-1!=p)
        s=s+n%10*p1;
        else
        s=s+x*p1;
        
        p1*=10;
        n/=10;
    }
   n=s;
}
int main() {
    int n,x,p;
    cin>>n>>x>>p;
    schimb(n,x,p);
    cout<<n;
    return 0;
}
  
  2.#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[51];
    cin.getline(s,51);
    
    for (int i=0;i<strlen(s);i++)
    if (!strchr("aeiou",s[i]))
     while (!strchr("aeiou",s[i]))
        s[i]-=1;
        
        
        cout<<s;
    return 0;
}
    

3.#include <iostream>

using namespace std;

int main() {
    int x,l1=1,lmax=0,pre,nr=0;
    while (cin>>x)
    {
       
        
        
        if (x%2==pre%2)
            l1++;
            else
       {   if (l1>lmax)
          lmax=l1;
          l1=1;
    }
        
    
        if (l1==lmax)
        nr++;
        
        pre=x;
        
    }
    if (l1>lmax)
   {     lmax=l1;
        nr=1;
}
    
    cout<<nr<<" "<<lmax;
    return 0;
}
