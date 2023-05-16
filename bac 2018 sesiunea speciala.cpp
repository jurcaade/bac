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

