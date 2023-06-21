sub 1
  1.a
  2.  a)
      x=1 y=2 z=6 
          y=3 z=5 tip 135* 
      x=2 y=3 z=4 tip 234*
      x=3 
  tip #
135*234*#
b) 6
c) citeşte n
 (număr natural)
 
┌pentru x<-1,[n/3] executa
│ yx+1
│┌cât timp y≤[n/3] execută
││ zn-x-y
││┌dacă z%2=x%2 atunci
│││ scrie x,y,z,’*’
││└■
││ yy+1
│└■
└■
scrie ’#’

d)#include <iostream>

using namespace std;

int main() {
   int n,x,y,z;
   cin>>n;
   x=1;
   while(x<=n/3)
    {   y=x+1;
       while(y<=n/3)
       {   z=n-x-y;
               if(z%2==x%2)
               cout<<x<<y<<z<<'*';
           y++;
       }
       x++;
}
cout<<'#';
}


sub 2
  1.d
  2.b
  3. struct meteo
  {
    unsigned int luna;
    unsigned int an;
    float temperatura[15];
  }m;

4.
   for(i=0;i<9;i++)
     for(j=0;j<9;j++) 
     if (i+j==8 || i+j==7 || i+j==9)
     a[i][j]=8;
    else
    a[i][j]=1;
    

/*
  https://profesorjitaruionel.com/wp-content/uploads/2018/03/E_d_Informatica_2018_C_sp_MI_var_simulare_LRO.pdf
  */


#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char s[101],v[101][101]={},a[101];
    cin.getline(s,101);
    char *p =strtok(s," ");
    int i=0,ok=0;
    while(p!=NULL)
    {
       strcpy(v[i++],p);
        p=strtok(NULL," ");

    }
    int n=i,poz; ///n= nr de cuvinte.. v[i]= cuv de pe linia i

    for (i=0;i<n;i++)
      { int l=strlen(v[i]);
        poz= l/2;
          if (l%2!=0)
        {
      
                char aux[101];
                strcpy(aux,v[i]);
                strcpy(a,aux+l/2+1);
                aux[l/2+1]=aux[l/2];
                strcpy(aux+l/2+2,a);

            for (int j=0;j<n;j++)
            if (strcmp(aux,v[j])==0)
                ok=1;
            



        }
      }
    if (ok==1)
    cout<<"DA";
    else
    cout<<"NU";

    return 0;
}

    
sub 3
  1.f(2203,2018)=10*f(220,201)=1100
  f(220,201)=10*f(22,20)=110
  f(22,20)=1+10*f(2,2)=11
  f(2,2)=1+10*f(0,0)=1
  f(0,0)=0
  => a
  
  2.{roșu/, albastru/, roz, portocaliu, verde}
a 5 a : (roșu, roz, verde, albastru)
a 6 a : (roșu, roz, verde, portocaliu)
a 7 a : (roșu, portocaliu, albastru, roz)

3.#include <iostream>


using namespace std;
void radical(int n, int &x,int &y)
{

  
   for (int i=1;i<=n/2;i++)
    for (int j=1;j<=n/2;j++)
    if (n==i*i*j)
    {
        x=i;
        y=j;
      
    }
    
    
}
int main() {
    int n,x,y;
    cin>>n;
    radical(n,x,y);
    cout<<x<<" "<<y;
    return 0;
}

  
  #include <iostream>

using namespace std;

int main() {
    int x,y,z,aux;
    cin>>x>>y;
    if (y<x)
    {
        aux=x;
        x=y;
       y=aux;
    }
   int okx=0,oky=0;
    while(cin>>z)
    {
     
       if (x<z && okx==0)
     {  cout<<x<<" ";
       okx=1;
    }
       if(y<z && oky==0)
     {  cout<<y<<" ";
       oky=1;
    }
       cout<<z<<" ";
     
    }
    if (okx==0)
    cout<<x<<" ";
     if (oky==0)
    cout<<y<<" ";
    return 0;
}
  
  
  
  
  
