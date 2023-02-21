sub 3
  1.#include <iostream>

using namespace std;
void frate (int x, int &y)
{
    int p=1;
    y=0;
    while (x>0)
 { if (x%10<9)
  {  
     y=y+(x%10+1)*p;
    p*=10;
    x/=10;
 }
     else
    { 
     y=-1;
     break;
    }
}




}
int main() {
    int x,y;
    cin >> x>>y;
   frate(x,y);
    cout<<y;
    return 0;
}

2.
  #include <iostream>

using namespace std;

int main() {
    int n,k, a[21][21];
    cin>>n>>k;
    for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
    cin>>a[i][j];
    
    int aux;
    aux=a[k][n-k];
    
    for (int j=n-k;j>=2;j--)
    a[k][j]=a[k][j-1];

a[k][1]=aux;

     for (int i=1;i<=n;i++)
 {   for (int j=1;j<=n;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}
    
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
    {
        if (x>=n)
        nr++;
    }
    cout<<nr+1;
    return 0;
}
Algortimul este eficient dpdv al memoriei deoarece utilizeaza 3 variabile simple de tip intreg.
  Algortitmul este eficient dpdv al timpului de executie deoarece prezinta o complexotate O(n) unde n este numarul elem. din fisier.
  Se citeste primul termen din fisier iar mai apoi restul. Se verifica cati termeni sunt mai mari sau egali cu primul.
  Mai apoi se afiseaza adaugand 1, care reprezinta pozitia sa.
  
  
  
  
  
  
  
  
