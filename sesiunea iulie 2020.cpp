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

2. struct figura
{
  struct 
  {
    float x;
    float y;
  }centru;
  float raza;
}c;

3.
   for(int i=0;i<7;i++)
        for(int j=0;j<7;j++)
    { if (i==j)
         m[i][j]='a';
    else
      if (i<j)
         m[i][j]=m[i][j-1]+1;
       else
         m[i][j]='+';
    }

sub 3
  1.
  #include <iostream>
#include <math.h>

using namespace std;
int multiplu (int n)
{
    int ok=0,k=1;
   while (ok==0)
   {
       
       n=n*k;
       if ((int)sqrt(n)==sqrt(n))
       ok=1;
       k++;
   }
   return n;
}
int main() {
    int n;
    cin>>n;
    cout<<multiplu(n);
    return 0;
}

2.
  #include <iostream>
#include <cstring>

using namespace std;

int main() {
   char s[101];
   cin.getline(s,101);
   int n=strlen(s), ok=0;
 
     for (int i=0;i<n;i++)
      {   
        if (ok==1 && s[i]>='a' && s[i]<='z')
        s[i]=s[i]-32;
        
        if (s[i]=='<')
            ok=1;
        if (s[i]=='>')
            ok=0;
      }
      cout<<s;
        
}
