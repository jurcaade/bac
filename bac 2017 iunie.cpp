sub 1
  1.a
  2.n=3
  a) #2#1#3#2#
b)
  daca e par se afiseaza dublu daca nu dublu-1
 pt n=10 se afiseaza 20 #
 pt n=50 se afiseaza 100 #
 50
 c)citeşte n
 (număr natural nenul)
  i<-1
┌cat timp 1<=n execută
│┌pentru j1,n execută
││┌dacă i=j sau i+j=n+1 atunci
│││ scrie ’#’
│││altfel
│││ scrie j
││└■
│└■
 i<-i+1;
└■

d)
  #include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
    if (i==j || i+j==n+1)
    cout<<'#';
    else
    cout<<j;
    return 0;
}
 
sub 2
  1.b
  2. cout<<x.nume[0]<<endl;
cout<<float(x.media1+x.media2)/2;

