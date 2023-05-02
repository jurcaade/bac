sub 1
  1. c
  2.
  a)
  x=8 s=8*8=64
    x=1 s=1*1=65
  x=0
  x=2 s=2*2=69
  tip 69
  b) 9 - 81
    8 - 64
    7 - 49
    6 -36
    s= 100
  86, 68, 860, 680 
  c)
  citeşte n
 (număr întreg nenul)
┌dacă n<0 atunci
│ n-n
└■
 s0
┌repetă
│ xn%10
│ sx*x
│ n[n/10]
└până când n=0
scrie s

d)
  #include <iostream>

using namespace std;

int main() {
    int n,s,x;
    cin>>n;
    if (n<0)
    n=-n;
    
    s=0;
    do {
        x=n%10;
        for (int i=1;i<=x;i++)
        s+=x;
        
        n/=10;
        
    }while (n!=0);
    cout<<s;
    return 0;
}

sub 2
  1.b
  2.b
  3. 1,6,8,9
  4.
  #include <iostream>

using namespace std;

int main() {
    int a[101][101],i,j;
    
   for(i=0;i<9;i++)
    for(j=0;j<9;j++) 
    a[i][j]=-1;
    
     for(i=0;i<9;i++)
    for(j=0;j<9;j++)
   { if (i==j || i+j==8)
    a[i][j]=0;
    else
   { if (i+j<8)
    a[i][j]=j+i;
    else
    a[i][j]=j+i-8;
   }
   }
    for(i=0;i<9;i++)
 {   for(j=0;j<9;j++) 
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
   char s[101],c[101],x[101]={},aux[101]={};
   cin>>s>>c;
   
   int n=strlen(s), n1=strlen(c);
   
   if (n!=n1)
   cout<<"cod incorect";
   else
   {
       x[0]=s[0];
        for (int i=1;i<n;i++)
        if (c[i]%2==0)
        {
            aux[0]=s[i];
            aux[1]='\0';
            strcat(aux,x);
            strcpy(x,aux);
        }
        else
        {
            aux[0]=s[i];
            aux[1]='\0';
            strcat(x,aux);
        }
        
   }
   
   cout<<x;
   
    return 0;
}
