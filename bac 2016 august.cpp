sub 1
  1.a
  2.a) p=12
  b) 16,17
  c) citeşte n
 (număr natural nenul)
 p0
 i<-1
┌repeta
│ mi
│┌cât timp m%2=0 execută
││ m[m/2]
│└■
│┌dacă m=1 atunci
││ pi
│└■
| i=i+1
└pana cand i>n
 scrie p

d)
  #include <iostream>

using namespace std;

int main() {
    int n,p,m;
    cin>>n;
    p=0;
    for (int i=1;i<=n;i++)
 {  
     m=i;
    while(m%2==0)
    m/=2;
    
    if (m==1)
    p=i;
}

cout<<p;
}
