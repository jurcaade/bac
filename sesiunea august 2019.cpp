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
 #include <iostream>

using namespace std;

int main() {
    int n,a[21][21],mini=1000,x=0,pre=0,nr=0;
    cin>>n;
    for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
    cin>>a[i][j];
    
    for (int i=1;i<=n;i++)
  {  x=1;
      for (int j=1;j<=n-1;j++)
         if (a[i][j]==a[i][j+1])
         x++;
         
   
     if (x<mini && x>1)
     mini=x;
     
    
    
  }
  cout<<mini;

    
     
    return 0;
}
 2.
   #include <iostream>

using namespace std;

int main() {
    int n,a[21][21],x,stop=0,m;
    cin>>n;
    for (int i=0;i<n;i++)
    for (int j=0;j<n;j++)
    cin>>a[i][j];
    
    x=a[0][0];
    for (int m=2;m<=n;m++)
     {   
         for (int i=0;i<m;i++)
        if (a[i][m-1]!=x)
        stop=m-1;
        
          for (int j=0;j<m;j++)
        if (a[m-1][j]!=x)
        stop=m-1;
        
        if (stop!=0)
        break;
}
cout<<stop;
    return 0;
}
3.
  #include <iostream>

using namespace std;

int main() {
    int x,nri[1001],nrp[1001],i=1,j=1,ni=0,np=0;
    while (cin>>x)
    {
        if (x%2==0)
        nrp[i++]=x;
        else
        nri[j++]=x;
    }
    ni=j-1; np=i-1;
    
    int aux;
    
   for (i=1;i<=np-1;i++)
    for (j=i+1;j<=np;j++)
        if (nrp[i]>nrp[j])
       {  aux=nrp[i];
         nrp[i]=nrp[j];
        nrp[j]=aux;
    }
 
    for (i=1;i<=ni-1;i++)
    for (j=i+1;j<=ni;j++)
        if (nri[i]>nri[j])
       {  aux=nri[i];
         nri[i]=nri[j];
        nri[j]=aux;
    } 
    
    for (j=1;j<=ni;j++)
    cout<<nri[j]<<" ";
  
    for (i=1;i<=np;i++)
    cout<<nrp[i]<<" ";
    
 
    return 0;
}
/*Algoritmul citeste numerele din fisier, pe cele pare le retine in vectorul nrp iar pe cele impare in vectorul nri. Are loc sortarea
pe rand a celor doi vectori, mai intai sunt sortate crescator numerele pare iar mai apoi cele impare. La final se afiseaza vectorul
de numere impare sortat crescator iar mai apoi cel de numere pare sortat crescator. */
