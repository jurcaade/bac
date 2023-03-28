sub 1
  1.c
  2. 28 282 288 29 8 => al 10 lea ->  a
  3.c
  4.d
  5.b
  
sub 2
  a. y=2197553
  b. 2012, 2201
  c   #include <iostream>

using namespace std;

int main() {
    int x, p, y,c;
    cin>>x;
    p=1; y=0;
     
    while (x!=0){
        c=x%10; x/=10;
        if (c!=0)
   {     if (x%10<c)
        
            y=y*10+c;
            else
            y=c*p+y;
        
        p*=10;
    }
        
    }
    cout<<y;
    return 0;
}

d
citește x (număr natural)
 p1; y0

┌cat timp x!=0 executa
│ cx%10; x[x/10]
│┌dacă c≠0 atunci
││┌dacă x%10<c atunci yy*10+c
│││altfel yc*p+y
││└■
││ pp*10
│└■
└
 scrie y

2. 61265 lant neelementar
    3653 ciclu elementar
    
3. s=ELITIST
   i=2 s=ELETIST
   i=3 s=ELEMIST
   i=4 s=ELEMEST
   i=5 s=ELEMENT
   s= ELEMENT
   
   sub 3
1.
  #include <iostream>

using namespace std;
int putere (int n)
{
    int p=0, minp=1000, mini=1000,d=2;
   while (n>1)
    {
        p=0;
        while (n%d==0)
     {   n/=d;
        p++;
    }
    if (p>0)
     if (p<minp)
     { 
        minp=p;
        mini=d;
    }
    d++;
    
    }
    return mini;
}
int main() {
    int n;
    cin>>n;
    cout<<putere(n);
    return 0;
}

2.
  #include <iostream>

using namespace std;

int main() {
    int n,k,a[101][101],ok=0,aux;
    cin>>n>>k;
    for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
    cin>>a[i][j];
    
   
   
    for (int j=n;j>=1;j--)
        if (k>j)
    {        if (ok==0)
     {       aux=a[k][j];
            ok=1;}
        a[k][j]=a[k][j-1];
  }  
    a[k][1]=aux;
    
    
    
    for (int i=1;i<=n;i++)
 {   for (int j=1;j<=n;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}
    return 0;
}
