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








  
