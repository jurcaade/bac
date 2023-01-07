sub 1
1.c
2. 
int f(int n)
{ int c;
     if (n==0)
      return 9;
 c=f(n/10); 
     if (n%10<c)
       return n%10;
 return c;
}
f(38627)
    c=f(3862)----------- f(3862)
     7<2 r 2                c=f(386)----------f(386)
                           2<3 r 2           c=f(38)---------f(38)
                                              6<3 r 3            c=f(3)---------f(3)
                                                                8<3 r 3       c=f(0)-------f(0)
                                                                              3<9 r 3         return 9
    return 2
    =>a
 3. 5--12112
    6--12121
    7--12122
    8--12211
  => b
  4. d
  5.  2 ^ (n∗(n−1)/2) => 2^10 => c
  
  
  sub 2
  1. a. n=296385 k=3 c=5 p=5 
        n=29638 k=2 c=8 p=5
        n=2963 k=1 c=3 p=15
        n=296 k=0 c=6 p=15
        n=29 n=2 n=0
  tip 15
  
 b. 10000 28888
 c. #include <iostream>

using namespace std;

int main() {
    unsigned int n,k;
    cin>>n>>k;
    int p,c;
    p=1;
    while(n>0)
    {
        c=n%10;
       if (k>0)
         if (c%2==1)
            p=p*c; 
           
        
           
    n=n/10;  k=k-1;
    }
    cout<<p;

    return 0;
}
  
  
  
  
  
  
  
  
  
  
  
  
