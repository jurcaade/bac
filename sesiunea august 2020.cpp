sub 1
    
    1.b
    2.c
    3. a 5 a (caps, mere, pere, porto)
       a 6 a -- c
    4.d
    5.b
    
    
    
    
sub 2
1.a. n=247388
    m=0
  n=24378
  8<5 F m=8
  8<5 F m=16
  3<5 A m=10
  7<5 F m=17
  4<5 A m=9
  n=0
  2<5 A m=5
  tip 5 NU
  
  b.138, 318 
  c.
  #include <iostream>

using namespace std;

int main() {
    int n,m,c;
      cin>>n;
      m=0;
    do
    {
        c=n%10;
        n/=10;
            if (c<5)
                m=m-2*c;
            else
                m=m+c;
        
    }
    while (n!=0);
    
    if (m==0)
    cout<<"DA";
    else
    cout<<m<<" "<<"NU";
    
    return 0;
}

d.
    citește n (număr natural)
 m0
 cn%10; n[n/10]
│┌dacă c<5 atunci mm-2*c
││altfel mm+c
■└■
┌cat timp (n!=0) executa
│ cn%10; n[n/10]
│┌dacă c<5 atunci mm-2*c
││altfel mm+c
│└■
└■
┌dacă m=0 atunci scrie ‘DA’
│altfel scrie m, ‘NU’
└■

  2.
  struct procesor
  {
      char producator;
      unsigned int frecventa;
      float pret;
  }p[20];

3.#include <iostream>

using namespace std;

int main() {
    int a[51][51];
    
    for (int i=0;i<6;i++)
        for (int j=0;j<4;j++)
        cin>>a[i][j];
        
        int aux;
        
    for (int i=0;i<5;i++)
    for (int j=i+1;j<6;j++)
    {
        if (a[i][2]%2==0 && a[j][2]%2==0)
            if (a[i][2]>a[j][2])
            {
                aux=a[i][2];
                a[i][2]=a[j][2];
                a[j][2]=aux;
                
            }
        
    }
        for (int i=0;i<6;i++)
       { for (int j=0;j<4;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}

sub 3
    1.
       #include <iostream>

using namespace std;

int kpn (int a, int b, int k)
{
    int nr=0,s=0,i,ok=0;
    

    for (i=a;i<=b;i++)
    {   s=0;
        for (int d=1;d<=i;d++)
            if (i%d==0)
            s+=d;
            
   
        if (s%2==i%2)
        nr++;
        
        if (nr==k)
        {    ok=1;
            return i;}
        
     }  

 if (ok==0)
    return -1;
}



int main() {
    int a,b,k;
    cin>>a>>b>>k;
 cout<<kpn(a,b,k);
    
    return 0;
}

2.
    #include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[101],*p,aux,n,ok=0,t[101]={};
    cin.getline(s,101);
    p=strtok(s," ");
    
    while (p!=NULL)
    {
        n=strlen(p);
        
        for (int i=0;i<n/2;i++)
            if (n%2!=0)
                if (p[i]!=p[n-i-1])
                {
                    aux=p[i];
                  p[i]=p[n-i-1];
                  p[n-i-1]=aux;
                  
                  ok=1;
               
                } 
           strcat(t,p);
           strcat(t," ");
        p=strtok(NULL," ");
    }
    
    if (ok==0)
    cout<<"nu exista";
    else
   cout<<t;
   
    return 0;
}
    
    3.
        #include <iostream>

using namespace std;

int main() {
    fstream cin ("bac.txt",ios::in);
    int x,maxi=0,mini=99,ok=0;
    while (cin>>x)
    {
        if (x>9 && x<100)
     {   if (x>maxi)
        maxi=x;
        if (x<mini)
        mini=x;
        
        ok=1;
    }
    }
    int a=mini-1, b=maxi+1;
    if (ok==0)
    cout<<"nu exista";
    else
    cout<<a<<" "<<b;
    return 0;
}
    
    Algoritmul este eficient dpdv al timpului de executie deoarece prezinta o complexitate O(n) unde n este numarul elementelor din fisier.
        Algoritumul este eficient dpdv al memoriei utilizate deoarece contine doar 6 variabile simple de tip intreg.
        Algoritmul citeste pe rand termenii din fisier si verifica daca sunt de 2 cifre. In acest caz gaseste minimul si maximul.
    
    
    
    
