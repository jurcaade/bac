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
        
    for (int i=0;i<6;i++)
    for (int j=i+1;j<4;j++)
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
    int nr=0,s=0,i;
    

    for (i=a;i<=b;i++)
    {   s=0;
        for (int d=1;d<=i;d++)
            if (i%d==0)
            s+=d;
            
   
        if (s%2==i%2)
        nr++;
        
        if (nr==k)
        break;
     }  

 
    return i;
}



int main() {
    int a,b,k;
    cin>>a>>b>>k;
 cout<<kpn(a,b,k);
    
    return 0;
}

2.
    
    
    
    
    
    
    
    
    
