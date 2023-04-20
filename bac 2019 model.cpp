sub 1
  1.d
  2.a
  3. {agar, geranium, iasomie, paciuli, tuberoze}
inainte : agar paciuli tuberoze => b
(geranium, iasomie, paciuli)
  4. 1,2,3,4,8,10 => 6 noduri de tip frunza
  => c
  5.d
  
sub 2
  1. 
  a
  n=7 k=1 7>1 i=1
     n=6 
     i=1 tip 1
     i=0
     k=2
     6>2 A i=2
     n=4
     tip 2 2
     k=3
     4>3 A i=3
     n=1 tip 3 3 3
  k=4
     1>4 F i=1
      n=0
      tip 4
  1 2 3 3 3 4
  
  b 46 55
  c. #include <iostream>

using namespace std;

int main() {
    int n,k,i;
    cin>>n;
    k=1;
    while (n>=1)
    {
        if(n>k)
        i=k;
        else
        i=n;
        
        n-=i;
    
        while(i>=1)
      {  cout<<k<<" ";
        i--;
    }
        k++;
        
    }
    return 0;
}
