sub 1
  1. d
  2. a
  3. c
  4. c
  5. d

sub 2.
  1. a i=2 d=2 k=0
       i=3 d=3 k=0
       i=4 d=2 k=1
       i=5 d=5 k=1
       i=6 d=2 k=1
       i=7 d=7 k=1
       i=8 d=2 k=1
       i=9 d=3 k=2
       i=10 d=2 k=2
  tip 2
  b 25 26
  c. #include <iostream>

using namespace std;

int main() {
    int a, b, k, i, d;
    cin>>a>>b;
    k=0;
    for (i=a;i<=b;i++)
    {
        d=2;
        while (i%d!=0 && d<=i)
        d++;
        
        if (d*d==i)
        k++;
    
     
    }
    cout<<k;
    return 0;
}
d.
  citește a,b (numere naturale, a<b)
 k←0;
 pentru i ← a,b execută
 d ← 2
   daca (i%d ≠ 0 și d<=i)
   repeta  
   d ← d+1
   pana cand (i%d = 0 sau d>i)
 dacă d*d=i atunci
 k ← k+1
scrie k


2.
  if ((u1.g>u2.g) || (u1.g==u2.g && u1.m>u2.m))
  cout<<u1;
  else
  cout<<u2;
else if (u1.g==u2.g)
  cout<<"egale";
