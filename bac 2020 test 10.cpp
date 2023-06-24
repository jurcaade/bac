sub 1.
1. d
2.  f(19,20)=f(18,21)=f(15,22)=f(8,23)=f(-7,24)=24
  b
3. {cal/,câine,papagal/,porumbel,ponei/}
cal caine
cal porumbel -- pt cuvant cu restrictii 2
caine caine
caine cal
caine papagal
caine porumbel
caine ponei  -- pt cuvant fara restrictii sunt 5
2+5+2+5+2=14
  d
4.a
5.c

  sub 2
1. i=7 j=16 s=16
   i=8 j=15 s=24
   i=9 j=14 s=38
   i=10 j=13 s=48
   i=11 j=12 s=60
   t=12 j=11
  tip 60
  i=10 j=21 s=10
  i=11 j=20 s=30
  i=12 j=19 s=42
  i=13 j=18 s=60
  i=14 j=17 s=74
  i=15 j=16 s=90

  21,20
  i=10 j=20 s=30
  i=12 j=18 s=60
  i=14 j=16 s=90
  i=16 j=14

c.
#include <iostream>

using namespace std;

int main() {
    int x,y,s,i,j;
  cin>>x>>y;
  if (x>y)
  {    
     
       x=x-y;
       y=y+x;
       x=y-x;
      
  }
i=x; j=y; s=0;
do
{
    s+=i%2*j+j%2*i;
    i++; j--;
    
    
}while(i<=j);

cout<<s;


    return 0;
}

d.
  citește x,y
 (numere naturale nenule)
┌dacă x>y atunci
| x→y
└■
ix; jy; s0

ss+(i%2)*j+(j%2)*i
 ii+1; jj-1
  
┌cat timp i<=j executa
|ss+(i%2)*j+(j%2)*i
│ ii+1; jj-1
└
scrie s

2. struct spectacol
{
unsigned int cod;
unsigned int nrActori;
unsigned int varsta[10];

}s[20];

3.
  #include <iostream>

using namespace std;

int main() {
    int a[5][6];
    
    for (int i=0;i<4;i++)
    for (int j=0;j<5;j++)
    cin>>a[i][j];
    
     for (int i=0;i<4;i++)
    for (int j=0;j<5;j++)
    a[i][j]=5*(i+1)-j;
    
     for (int i=0;i<4;i++)
 {   for (int j=0;j<5;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}
    
    
    return 0;
}s


1.
#include <iostream>

using namespace std;
void produs(int n,int&p)
{
    int v[10]={};
    p=1;
    while(n>0)
    {
        if (n%2==0 && v[n%10]==0)
     {   v[n%10]++;
        p*=n%10;
    }
        n/=10;
    }

}

int main() {
    int n,p;
    cin>>n;
    produs(n,p);
    cout<<p;
    return 0;
}

2.
  #include <iostream>
#include <cstring>
using namespace std;

int main() {
   char s[101],t[101]={},a,ok=0;
   cin.getline(s,101);
   char *p;
   p=strtok(s," "); //primul cuvant
   
    strcat(t,p);
    strcat(t," ");  //il memoram in t
    int n=strlen(p);
    a=p[n-1];    // retinem ultima litera a primului cuvant
    
 p=strtok(NULL," ");  // trecem la urmatorul cuvant
   
   while(p!=NULL)
   {
       n=strlen(p);
       if (a==p[n-1])   
       {
           strcat(t,"succes"); 
           strcat(t," "); 
          ok=1;
       }
      
           strcat(t,p);
           strcat(t," "); 
         
        a=p[n-1];
   
       
       p=strtok(NULL," ");
   }
   strcpy(s,t);
   if (ok==0)
   cout<<"nu exista";
   else
   cout<<s;
   
   
    return 0;
}

  
  
