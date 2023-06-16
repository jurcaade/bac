sub 1
  1.a
  2. z=3 c=1 a=0 b=1 c=1
             a=1 b=1 c=2
             a=1 b=2 c=3
     3=3 tip 3
     z=4 c=3 a=2 b=3 c=5
    tip 5
     z=5 
     z=6 c=8
     z=7 
     z=8
  tip 8
     
  tip 3 5 8 
  
  b) sirul e 1 2 3 5 8 13 21 34 55 89..
  cea mai mica valorare: 21
  cea mai mare valoare: 33
    
  c)citeşte x,y

(numere naturale, x≤y)
b<-0
c<-1
┌pentru z<-x,y execută
│┌daca c<z atunci
|| repeta
││ a<-b
││ b<-c
││ c<-a+b
│└pana cand c>=z
│┌dacă z=c atunci
││ scrie z,’ ’
│└■
└■

d)#include <iostream>

using namespace std;

int main() {
    int x,y,b,c,z,a;
    cin>>x>>y;
    b=0; c=1;
    for (z=x;z<=y;z++)
    {
        while(c<z)
        {
            a=b;
            b=c;
            c=a+b;
        }
        if (z==c)
        cout<<z<<" ";
        
        
    }
}
  

sub 2
  1.c
  2. avem 21 noduri intr un graf neorienentat complex=> 210 muchii
  daca luam o componenta conexa de 10 noduri are 45 muchii
  si alta com conexa de 11 noduri are 55 muchii
  in total 100 deci putem scadea 110 muchii si indeplinim cerinta
  => d
  3. struct masina
  {
   char marca[21];
    struct FaraNume
    {
     unsigned int luna;
      unsigned int an;
    }data;
    
  }m;

4.
   if (strlen(s)%2==0)
    strcpy(x,s);
    else
    {
        strcpy(s+strlen(s)/2,s+strlen(s)/2+1);
         strcpy(x,s);
    }


5.
  #include <iostream>

using namespace std;

int main() {
    int n,a[51][51];
    cin>>n;
    
    
    for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
    if (i+j==n+1 || i+j==n || i+j==n+2 )
    a[i][j]=1;
    else
    a[i][j]=2;
    
    
     for (int i=1;i<=n;i++)
 {   for (int j=1;j<=n;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}
    return 0;
}

sub 3
  1.
  f20,18=1+f10,18=6
  f10,18=1+f10,9=5
  f10,9=1+f5,9=4
  f5,9=1+f5,4=3
  f5,4=1+f2,4=2
  f2,4=1+f2,2=1
  f2,2=0
  => c
  
  
  2.
  {baladă, doină, fado, romanță, trova},
fado inainte de romanta
    (baladă, fado, doină, trova,romanță)
    (baladă, fado, romanta, doina,trova)
    (baladă, fado, romanta, trova,doina)
   (baladă, fado, trova, doina,romanta)
   (baladă, fado, trova, romanta,doina)
  --
  trova, balada, doina, fado, romanta
  --
  trova, doina, balada, fado romanta
  trova, doina, fado, balada, romanta
  --
  trova, doina, fado, romanta, doina
  trova, fado, balada, doina, romanta
  --
  trova, fado, doina, balada, romanta //asta
  trova, fado, doina, romanta, balada //si asta
  trova, fado, romanta, balada, doina
  
  3.#include <iostream>

using namespace std;
void divizori(int n, int &x, int &y, int &z)
{

   for (int i=2;i<=n;i++)
   for (int j=i+1;j<=n;j++)
   for (int k=j+1;k<=n;k++)
   if (n%i==0 && n%j==0 && n%k==0)
   if (i+j+k==n)
   {
       x=i;
       y=j;
       z=k;
      
   }
    
    
}
int main() {
    int n,x=0,y=0,z=0;
    cin>>n;
    divizori(n,x,y,z);
    cout<<x<<" "<<y<<" "<<z;
    return 0;
}
  
4.
  #include <iostream>

using namespace std;

int main() {
    int x,v[101]={};
    while(cin>>x)
    {
    
        while(x!=0)
        {
            int k=x%100;
            v[k]++;
            x/=10;
        }
        
    }
    
    for (int i=10;i<=99;i++)
    if (v[i]==1)
    cout<<i<<" ";
    
    
    return 0;
}
  //Programul citeste pe rand numerele din fisier. Pentru fiecare numar citit se retine toate perechile de 2 cifre ale acestuia si memoreaza
//numarul aparitiei perechilor intr un vector de frecventa. Apoi se parcurg toate numerele de 2
 // cifre si se verifica daca au aparut o singura data. In acest caz se afiseaza.
  
  
  
  
  
  
  
