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
