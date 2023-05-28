sub 1.
  1.b
  2. f(20,26) tip 23
  f21,24 tip 17
  
  f21,27=tip 24
  f22,25 tip 23
  f23,23 tip 23
  =? d 
  3. {castane, mousse, frișcă, șerbet, ganache}
ultimul -frisca, ganache (nu pot fi pe primele) 
4 (castane, șerbet, ganache)
5 (mousse, castane, frisca)
6 (mousse, castane, ganache)
  => a
  
  4. c
  5. d
 
sub 2
  1.a)
  p=11 q=25
  x=11 
  x=12 s=12
  x=12 s=0
  x=15 s=15
  x=16 s=31
  x=18 s=49
  x=20 s=69
  x=21 s=90
  x=24 s=104
  x=24 s=90
  tip 90
  multiplii lui 3 si 4 de la 11 la 25 aduanti, fara cei comuni
  b) intervalul 2,q
  multiplii de 10 si 15
  suma sa fie 250
  M10={10,20,40,50,70,80,100
  M15={15,45,75,105
    deci pana la 70,71,72,73,74
 
  
    c)
    #include <iostream>

using namespace std;

int main() {
    int m,n,p,q,s=0,x;
    cin>>m>>n>>p>>q;
    for (x=p;x<=q;x++)
    {
        if (x%m==0 || x%n==0)
        s+=x;
         if (x%m==0 && x%n==0)
         s-=x;
    }
    cout<<s;
    return 0;
}

       citeşte m,n,p,q
 (numere naturale nenule, pq)
s0
 x<-p
┌cat timp p<=q execută
│┌dacă x%m=0 sau x%n=0 atunci
││ ss+x
│└■
│┌dacă x%m=0 şi x%n=0 atunci
││ ss-x
│└■
   p=p+1
└■
scrie s
         
       2.
         echipa aux;
  for (int i=0;i<3;i++)
  for (int j=i+1;j<3;j++)
  
  if (c[i].rezultat<c[j].rezultat)
  {
      aux=c[i];
      c[i]=c[j];
      c[j]=aux;
  }
  
   for (int i=0;i<3;i++)
   cout<<c[i].nume<<" ";
       
       3.
         s1=plantau fistic
         p= fistic - plantau fistic = 7 (ramane plantau care are 7 litere)
         s2=fistic
         s1=plantastic
         s2=fantastic
         tip 7fantastic

         
         sub 3
         1.
         #include <iostream>

using namespace std;
int DoiTrei(int n)
{
    int nr=0,nrc=0;
        while (n>0)
        {
            if (n%10==2 || n%10==3)
            nr++;
            
            nrc++;
            n/=10;
        }
        if (nrc==nr)
        return 1;
        else
        return 0;
        
        
        
}
int main() {
    int n;
    cin>>n;
    cout<<DoiTrei(n);
    return 0;
}
