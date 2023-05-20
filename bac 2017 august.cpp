sub 1
  1. a
  2. a) x=4 c=2 s=2
        x=5 c=5 s=7
        x=6 c=2 s=9
        x=7 c=7 s=16
  tip 16
  b) 
  x=2 c=2
  x=3 c=3 
  x=4 c=2 
  x=5 c=5 
  x=6 c=2 
  x=7 c=7 
  x=8 c=2
  x=9 c=3
perechile: 2,4; 4,2; 4,5; 5,4; 5,6; 6,5; 7,7;

c)citeşte a,b
 (numere naturale, a≥2, b≥2)
┌dacă a>b atunci
│ xa
│ ab
│ bx
└■
 s←0
┌pentru x←a,b execută
│ c←2
| daca x%c>0 atunci
│┌repeta
││ c←c+1
│└pana cand x%c=0
│ss+c
└■
scrie s 

d)#include <iostream>

using namespace std;

int main() {
    int a,b,x,s,c;
    cin>>a>>b;
    if (a>b)
    {
        x=a;
        a=b;
        b=x;
    }
    s=0;
    for (x=a;x<=b;x++)
    {
        c=2;
        while(x%c>0)
        c++;
        s+=c;
    }
    cout<<s;
    return 0;
}

sub 2
  1. b
  2. b
  3. struct poligon
  {
    unsigned int numar;
    struct
    {
      float x;
      float y;
    }varf[100];
  }p;

4.
#include <iostream>

using namespace std;

int main() {
    char a[101][101];
    int i,j;
    
    for(i=0;i<9;i++)
        for(j=0;j<9;j++) 
        if (i<j && i+j<8)
        a[i][j]='a';
        else
        a[i][j]='b';
        
         for(i=0;i<9;i++)
 {       for(j=0;j<9;j++) 
        cout<<a[i][j]<<" ";
        cout<<endl;
 }
             
        return 0;
}

5.
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[101], nm[100][100]={"DO","RE","MI","FA","SOL","LA","SI"};
    cin.getline(s,101);
    char *p;
    p=strtok(s," ");
    int ok2=0;
    while(p!=NULL)
    {
        int ok=0;
        for (int i=0;i<7 && ok==0;i++)
        if (strstr(p,nm[i]))
     {   cout<<p<<endl;
        ok=1;
        ok2=1;
    }
        
        p=strtok(NULL," ");
    }
    
    if(ok2==0)
    cout<<"nu exista";
    
    return 0;
}
  sub 3
    1.c
    2.f(4) tip 1234
    f(3) tip 123
    f(2) tip 12
    f(1) tip 1
    1234123121
    
    
    
    
    
    
    
    
    
    
    
    
