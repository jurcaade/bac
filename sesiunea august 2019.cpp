sub 1
  1. b
  2. f(75,30)
  tip 75 f(45,30)---- tip 45 f(15,30)
  f(15,30)--- tip 15 i=45 j=15 i=30
  f(15,15) tip 15 ---c
  3.  a
  4.  d
  5.  d
  
  sub 2
  1. n=27102
  m=1227
  
  b.11,101
  c. #include <iostream>

using namespace std;

int main() {
    int n,m,x,cp;
    cin>>n;
    m=0; x=1;
    while (x<=9)
    {
        cp=n;
        while (cp!=0)
    {        if (cp%10==x)
            m=m*10+x;
        
        cp/=10;
    }
    x++;
    }
    cout<<m;
}

d.citeşte n
 (număr natural)
 m0; 
┌pentru x<-1,9 execută
│ cpn
│┌cât timp cp≠0 execută
││┌dacă cp%10=x atunci
│││ mm*10+x
││└■
││ cp[cp/10]
│└■
│ 
└■
 scrie m
 
 2. int n=strlen(b)-3;

 if (strlen(b)<3)
   strcpy(a,"nedeterminat");
else
  strcpy(a,b+n);
 

 3. if (p.x==c.centru.x && p.y==c.centru.y)
   cout<<1;
else
  cout<<0;
 
 sub 3
   1.
   #include <iostream>

using namespace std;
int MaxImp (int a, int b)
{
    int p=1, maxi=0, ok=0;
    
    for (int i=a;i<=b;i++)
    {  p=1;
        for (int d=1;d<=i/2;d++)
         if (i%d==0 && d%2!=0)
             {    
                p=p*d;
                 ok=1;
            }
     if (p>i)
     maxi=i;
    }
    
  if (ok==0)
    return 0;
    else
    return maxi;
}
int main() {
    int a, b;
    cin >> a >> b;
  cout<<MaxImp(a,b);
    return 0;
}
 
 
