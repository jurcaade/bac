sub 1
  1.d
  2.d
  3.a
  4.b
  5.c
  
sub 2
  a. x=16 x=4 p=1 x=1 p=2
  pm=2; y=16
    x=12 x=3 p=1 y=12
    x=8 x=4 p=1 x=1 p=2
    
    tip 12
    
    b. 2019, 2016
c.
    #include <iostream>

using namespace std;

int main() {
    unsigned int a,b,k;
    cin>>a>>b>>k;
    int pm,y,i,p,x;
    pm=0; y=0; i=b;
    while (i>=a)
    {
        x=i; p=0;
        while (x%k==0)
        {
            x/=k;
            p++;
        }
        if (p!=0 && (p<pm || pm==0))
     {   pm=p;
        y=i;
    }
        i--;
    }
    cout<<y;
    return 0;
}

d. citeşte a,b,k
 (numere naturale, 1≤a≤b, k>1)
 pm0; y0;
┌pentru i<-b,a,-1 execută
│ xi; p0
│┌cât timp x%k=0 execută
││ x[x/k]; pp+1
│└■
│┌dacă p≠0 și (p<pm sau pm=0)atunci
││ pmp; yi
│└■
│ 
└■
 scrie y
