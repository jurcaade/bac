sub 1
1. d
2. b
3. a
4. c
5. b

sub 2
1. a) i=1 1 1 1
      i=2 2 2 2
  t=3
  for i 3 3
  1 1 1 2 2 2 3 3

  b) 46, 50
  c)#include <iostream>

using namespace std;

int main() {
    int n,k,t,i,j;
    cin>>n>>k;
    t=1;
    for (i=1;i<=n/k;i++)
 {   for (j=1;j<=k;j++)
    cout<<t<<" ";
    t++;
}

for (i=n%k;i>=1;i--)
cout<<t<<" ";

    return 0;
}

d)

citește n,k
 (numere naturale nenule)
t1
┌pentru i1,[n/k] execută
│┌pentru j1,k execută
││ scrie t,' '
│└■
│ tt+1
└■
  i=n%k
┌cat timp i>=1 executa
│ scrie t,' '
|  i=i-1
└■


      2. f(0) =0
      f(2020)= 0+ f(101) =6
      f(101)=1+f(5) =6
      f(5)= 5+ f(0) =5
      
3. 3 componente conexe
      cea mai mica: 4,7


sub 3
1.#include <iostream>

using namespace std;
void suma(int n, int &s)
{
    int v[11]={};
    s=0;
    while(n>0)
    {
        
       v[n%10]++;
        
        n/=10;
    }
    
   for (int i=1;i<=9;i+=2)
   if (v[i]!=0)
   s+=i;
    
}
int main() {
    int n,s;
    cin>>n;
    suma(n,s);
    cout<<s;
    return 0;
}

2. //prefix
      #include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    char s[21][21],a[21]={};
    cin>>n;
      cin.get();
    for (int i=0;i<n;i++)
    cin>>s[i];
    
    int m=strlen(s[n-1]);
    
     for (int i=0;i<n-1;i++)
 {    if (strncpy(a,s[i],m))
     if (strcmp(a,s[n-1])==0)
     cout<<s[i]<<" ";
}
    
    return 0;
}

//sufix
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    char s[21][21],a[21]={};
    cin>>n;
      cin.get();
    for (int i=0;i<n;i++)
    cin>>s[i];
    
    int m=strlen(s[n-1]);
    
     for (int i=0;i<n-1;i++)
 {   strcpy(a,(s[i]+(strlen(s[i])-m)));
        if (strcmp(a,s[n-1])==0) 
        cout<<s[i]<<" ";
}

    
    return 0;
}


3.
      #include <iostream>

using namespace std;

int main() {
    int k,x,lung=0,lmax=0,nr=0;
    cin>>k;
    while(cin>>x)
    {
        if (x%k==0)
        lung++;
        else
        {
            if (lung>lmax)
         {   lmax=lung;
            nr=1;
        }
         else
            if (lung==lmax)
            nr++;
            
            lung=0;
          
        }
        
    }
    
     if (lung>lmax)
{    lmax=lung;
           nr=1;
}
    else
     if (lung==lmax)
        nr++;
    
    cout<<lmax<<" "<<nr;
    return 0;
}
