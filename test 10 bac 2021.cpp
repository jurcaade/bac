sub 1
  1. b
  2.++++12+12345+ => c
  afis(12345)
  tip +
  12345>0
  afis(12)----------> tip +
  tip 12345          12>0 A
   tip +             afis(0)----------> tip +
                      tip 12             0>0 F
                      tip +              tip +
  
3. b
4. d
5. c

sub 2.
1. a. x=2 y=9
2<9 A
x=-7 y=2 x=9
9>=2 A
tip A
x=7
tip B
tip A
tip B
tip A
tip B
tip A
tip B
1>=2 F
tip ABABABAB

b. 13, 14

c. #include <iostream>

using namespace std;

int main() {
    unsigned int x,y;
    cin>>x>>y;
    if (x<y)
    {
        x=x-y;
        y=x+y;
        x=y-x;
    }
    
    while (x>=y)
    {
        cout<<'A';
        x=x-y;
        if (x%2==0)
        cout<<'A';
        else
        cout<<'B';
        
    }
    return 0;
}

d.citeşte x,y (numere naturale)
┌dacă x<y atunci
│ xx-y; yx+y; xy-x
└■
┌repeta 
│ scrie ’A’
│ xx-y
│┌dacă x%2=0 atunci scrie ’A’
││altfel scrie ’B’
│└■
|pana cand x<y
└■

2. struct elev
{
  unsigned int cod;
  float nota1, nota2;
} y[30];

3. s=vorbeste
vorveste
vorverte
porverte
pomverte
pomverde
t=pomvedrde
t=pom
tip pom
    verde
    
    sub 3
  1.
  #include <iostream>

using namespace std;

int armonie(int x, int y)
{
    int s1=0,s2=0;
    
    for (int d=1;d<=x;d++)
    if (x%d==0)
    s1+=d;
    
    
    for (int d=1;d<=y;d++)
    if (y%d==0)
    s2+=d;
    
    if ((x+y)>s1 && (x+y)<s2)
    return 1;
    else
    return 0;
}




int main() {
    int x,y;
    cin>>x>>y;
    cout<<armonie(x,y);
   
    return 0;
}

2.
  #include <iostream>

using namespace std;

int main() {
   int m,n,a[21][21];
   cin>>m>>n;
   
   for (int i=1;i<=m;i++)
       for (int j=1;j<=n;j++)
         cin>>a[i][j];
         
         
    for(int i=2;i<=m;i++)
    for (int j=1;j<=n-1;j++)
   if (a[1][j]==a[i][n])
   cout<<a[1][j]<<" ";
   
    return 0;
}

3.
#include <iostream>

using namespace std;

int main() {
    int x,n,nr=0;
    cin>>x;
    n=x;
    while (cin>>x)
 {   if(x<n)
   nr++;
}
cout<<nr+1;
    return 0;
}
/*
Algoritmul este eficient dpdv al memoriei deoarece utilizeaza 3 variabile simple de tip intreg.
  Algortimul ese eficient din punct de vedere al timpului de executie doarece are o complecitate O(n) unde n este numarul de elem din fisier.
  Se citeste primul termen din fisier si se memorieaza in variabila n. Mai apoi se citesc restul elem din fisier si se verfica daca sunt mai mici decat primul.
  In acest caz se numara. */


  
