sub 1
  1.c
  2.b
  3.a
  4.b
  5.b
  
  sub 2
  a. 4
  b. 45 46 47 48 49

  2.
  d.luna < e.dev.luna || (d.luna == e.dev.luna && d.zi < e.dev.zi)

  3.
    for(i=1;i<=5;i++)
     for(j=1;j<=5;j++)
     if (i<=j)
       a[i][j]=5-i;
       else
       a[i][j]=5-j;

sub 3
  1.
  #include <iostream>

using namespace std;
int Egal(int n)
{
    int pre=-1,x;
    
  
    while (n>0)
    {
        x=n%10;
        if (x%2!=0)
        {
         if (pre==-1)
            pre=x;
            else
        if (pre!=x)
        return 0;
        }
        
       n/=10;
    } 
    return 1;
}
int main() {
    int n;
    cin>>n;
   cout<<Egal(n);
    return 0;
}

2.
  #include <iostream>
#include <cstring>


using namespace std;

int main() {
   char s[101],*p;
   int n,ok=0;
   cin.getline(s,101);
   cin>>n;
   p=strtok(s," ");
   
   while (p!=NULL)
   {
       if (strlen(p)==n)
    {   cout<<p<<endl;
       ok=1;
   }
       p=strtok(NULL," ");
   }
   
   if (ok==0)
   cout<<"nu exista";
    return 0;
}

sub 3
  #include <iostream>

using namespace std;

int main() {
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    
       while(n>1)
    {
        if(n%2==0)
            cout<<((n-2)/2)*z-((n-2)/2)*x+y<<" ";
        else
            cout<<(((n-2)/2)+1)*z-((n-2)/2)*x<<" ";
        n--;
    }
    cout<<1;

    return 0;
}
