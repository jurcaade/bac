sub 1.
  1.c
  2.d
  3.a
  4.b
  5.c

  
  sub 2
  1.a) n=56
  i=2 k=0
 pt i=2
  n=56 k=1
  n=28 k=2
  n=14 k=3
  n=7 
 pt i=7
  k=4
  tip 4
  
  b) 11,13
 c) #include <iostream>

using namespace std;

int main() {
   int n,i,k;
   cin>>n;
   i=2; k=0;
   while(n>=i)
 {  while(n%i==0)
     {  k++;
       n/=i;
     }
        if (i==2)
        i++;
        else
        i+=2;
    }
   cout<<k;
}

d) citeşte n
 (număr natural)
 i2; k0
┌cât timp n≥i execută
| daca n%i=0 atunci
│┌repeta 
││ kk+1
││ n[n/i]
│└pana cand n%i!=0
│┌dacă i=2 atunci ii+1
││altfel ii+2
│└■
└■
 scrie k
 
 2. 2023,2024,2025
  3.
    for (int i=0;i<strlen(s);i++)
   if (s[i]==' ')
   strcpy(id,s+i+1);
  
  strcat(id,"2022");

sub 3
  1.
  #include <iostream>

using namespace std;
void secventa(int &n)
{
    int s=0,p=1;
    while(n>0)
    {
        int x=n%10;
        if (x==2 && n/10%10==2)
        x=0;
        
        s=s+x*p;
        p*=10;
        
        n/=10;
    }
    n=s;
    
    
}
int main() {
    int n;
    cin>>n;
    secventa(n);
    cout<<n;
    return 0;
}
