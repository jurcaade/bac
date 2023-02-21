sub 1
  1.c
  2.b
  3.a
  4.c
  5.d
 
  
  sub 2
  a. m=2
  n=9
  m=3
  m=5 *
  m=7 *
  m=9 *
  m=11 *
  tip ****
  b 1, 157
  c.
  #include <iostream>

using namespace std;

int main() {
    unsigned int m,n;
    cin>>m>>n;
    int aux;
    if (m>n)
    {
        aux=m;
        m=n;
        n=aux;
    }
    
    if (m%2==0)
    m=m+1;
    
    while (m<=n)
    {
        m+=2;
        cout<<"*";
    }
    return 0;
}
d. citește m,n
 (numere naturale)
┌dacă m>n atunci
│ n→m
└■
┌dacă m%2=0 atunci
│ mm+1
└■

repeta
│mm+2
│ scrie ‘*’
pana cand m>n

2.f(2)
  2<=4 return 2

  f(21) 21<=4 F r 21-f(19)=10
  f(19) 19<=4 F r 19-f(17)=11
  f(17) r 17-f(15)=8
  f(15) r 15-f(13)=9
  f(13) r 13-f(11)=6
  f(11) r 11-f(9)=7
  f(9) r 9-f(7)=4
  f(7) r 7-f(5)=5
  f(5) r 5-f(3)=2
  f(3) r3
  
  return 10
  
  3. x=bac2021
  tip 2021
       b!a!c!
  
  sub 3
  1.
  #include <iostream>

using namespace std;

void imog(int x, int y, int &rez)
{
    int n1=0,n2=0,p=1,k=0;
    
    while (x>0){ 
        
     if ((x%10)%2!=0){
       n1=n1+x%10*p;
        p*=10;
 }
        x/=10;
}

p=1;

    while (y>0){
        
     if ((y%10)%2!=0){
       n2=n2+y%10*p;
        p*=10;
 }
        y/=10;
}

    while (n1>0)
     {
     k=k*10+n1%10;
     n1/=10;
     }

        if (k==n2)
        rez=1;
        else
        rez=0;

}
int main() {
    int x,y,rez;
    cin >> x>>y;
  imog(x,y,rez);
  cout<<rez;
    return 0;
}
  
  2.
    #include <iostream>

using namespace std;

int main() {
    int n,a[21][21],k;
   cin>>n; cin>>k;
   
   for (int i=1;i<=n;i++)
       for (int j=1;j<=n;j++)
         cin>>a[i][j];
         
         int aux;
         
        
       for (int i=1;i<=k;i++)
     
       { 
        aux=a[k][i];
      a[k][i]=a[i][k];
        a[i][k]=aux;
      
       }
          for (int i=1;i<=n;i++)
 {      for (int j=1;j<=n;j++)
         cout<<a[i][j]<<" ";
         cout<<endl;
}
       
       
    return 0;
}
  
  
  
  
  
  
  
  
  
