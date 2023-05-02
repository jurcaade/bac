#include <iostream>
#include <fstream>
using namespace std;
bool prim(unsigned int a)
{
    if(a==1)
        return false;
    if(a==2)
        return true;
    for(unsigned int d=2; d<=a/2; d++)
        if(a%d==0)
            return false;
    return true;
}

int main()
{
    fstream f("atestat.in",ios::in),
            g("atestat.out",ios::out);
    unsigned int n, Maxnr=0, minnr=10000,v[100];
    f>>n;
    for(int i=0; i<n; i++)
    {
        f>>v[i];
        if(prim(v[i]))
            cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n; i++)
        if(v[i]%2==0 && v[i]>Maxnr)
            Maxnr=v[i];
        else if(v[i]%2!=0 && v[i]<minnr)
            minnr=v[i];
    cout<<Maxnr<<" "<<minnr;
    for(unsigned int i=Maxnr-2; i>2; i--)
    {
        if(prim(i))
        {
            for(unsigned int j=2; j<=Maxnr; j++)
                if(prim(j))
                {
                    if(i+j==Maxnr)
                        g<<i<<" "<<j<<" "<<endl;
                }
        }
    }
    f.close();
    g.close();
    return 0;
}

3. #include <iostream>
#include<fstream>
using namespace std;

void pare(int  n,int v[51])
{
    for(int i=0; i<n; i++)
        if(v[i]%2==0)
            cout<<v[i]<<" ";
}
int main()
{
    fstream f("atestat.in",ios::in),
            g("atestat.out",ios::out);
    int n,v[51],minnr=999999,maxnr=0,a,b;
    a=minnr;
    b=maxnr;
    f>>n;
    for(int i=0; i<n; i++)
        f>>v[i];
        pare(n,v);
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        if(v[i]<a)
            a=v[i];
        if(v[i]>b)
            b=v[i];
    }
    cout<<a<<endl;
    cout<<b<<endl;

    while(a!=b)
    {
        if(a>b)
            a-=b;
        else
            b-=a;
    }
    g<<a;
    return 0;
}
