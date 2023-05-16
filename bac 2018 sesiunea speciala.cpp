sub 1
1.d
2. a) 206/2=103 c=1
      200/2=100 100/2=50 50/2=25 c=3 nr=1
      80/2=40 40/2=20 20/2=10 10/2=5 c=4
      24/2=12 12/2=6 6/2=3 c=3 nr=2
      tip 2
  b) 12 20 100 28 
  c) citeşte n,a
 (numere naturale nenule)
 nr0

┌pentru i<-i,n execută
| citeşte b
| (număr natural nenul)
| c0
│┌cât timp b%2=0 execută
││ b[b/2]
|| cc+1
│└■
│┌dacă c=a atunci
││ nrnr+1
│└■
└■
 scrie nr 
 
 d) #include <iostream>

using namespace std;

int main() {
    int n,a,nr,i,b,c;
    cin>>n>>a;
    nr=0; i=1;
    while(i<=n)
    {
        cin>>b;
        c=0;
        while(b%2==0)
     {  b=b/2;
        c++;
    }
    
    if (c==a)
    nr++;
    
    i++;
        
        
    }
    cout<<nr;
}

sub 2
      1.d
      2.c
      4.
      #include <iostream>

using namespace std;

int main() {
    int a[101][101],i,j;
    
    for(i=1;i<=9;i++)
    for(j=1;j<=9;j++)
   if (i<j)
   a[i][j]=i;
   else
   a[i][j]=j;
   
    for(i=1;i<=9;i++)
 {   for(j=1;j<=9;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}
    return 0;
}

5.
      #include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[101],*p,t[101];
    cin.getline(s,101);
    int maxi=0;
    p=strtok(s," ");
    
   while(p!=NULL)
   {
   
       if (p[0]>='0' && p[0]<='9')
           if (p[0]>maxi)
        {       maxi=p[0];
               strcpy(t,p);
       }
       
       
       p=strtok(NULL," ");
   }
 
    cout<<t;
    
    return 0;
}

sub 3
      1.b
      2. {fondante, caramele, dropsuri/, acadele/}
           4  (fondante,dropsuri)
           5 (fondate, acadele)
           6 (caramele, dropsuri)
       3.#include <iostream>

using namespace std;
int echilibrat(int n)
{
    int i=0,sp=0,si=0;
    while (n!=0)
    {
        
        if (i%2==0)
        sp+=n%10;
        else
        si+=n%10;
        
        
        i++;
        n/=10;
    }
    
    if (sp%2!=0 || si%2==0)
    return 0;
      
    return 1;
    
}

int main() {
    int n;
    cin>>n;
    cout<<echilibrat(n);
    return 0;
}
    
4.
      #include <iostream>

using namespace std;
int v[101]={},y[101]={};
int main() {
    int x,i=0,l=0,lmax=0;
    while(cin>>x)
    {
        i++;
        if (v[x]==0)
        v[x]=i;
        else
        y[x]=i;
        
    }
   for (int i=0;i<=9;i++)
   {
       l=y[i]-v[i]+1;
    if (l>lmax)
    lmax=l;
   }
   cout<<lmax<<endl;
   for (int i=0;i<=9;i++)
   {
       l=y[i]-v[i]+1;
    if (l==lmax)
    cout<<i<<" ";
    
    
   }
   


    
    return 0;
}

