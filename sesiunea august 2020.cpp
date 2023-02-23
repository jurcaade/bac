sub 2
1.a. n=247388
    m=0
  n=24378
  8<5 F m=8
  8<5 F m=16
  3<5 A m=10
  7<5 F m=17
  4<5 A m=9
  n=0
  2<5 A m=5
  tip 5 NU
  
  b.137, 149 
  c.
  #include <iostream>

using namespace std;

int main() {
    int n,m,c;
      cin>>n;
      m=0;
    do
    {
        c=n%10;
        n/=10;
            if (c<5)
                m=m-2*c;
            else
                m=m+c;
        
    }
    while (n!=0);
    
    if (m==0)
    cout<<"DA";
    else
    cout<<m<<" "<<"NU";
    
    return 0;
}
  
