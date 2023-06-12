sub 1
  1.a
  2. a) n=81112337  
  tip 3
  b) 11110, 11112 ... 11119 (9 numere) + 10000 12222 ... 19999 (9 numere) 9+9=18 
  c) citeşte n
 (număr natural nenul)
 k1
 m1
 daca n>9 atunci
┌repeta
│┌dacă n%10=[n/10]%10 atunci
││ kk+1
││┌dacă k>m atunci
│││ mk
││└■
││altfel
││ k1
│└■
│ n[n/10]
└pana cand n<=9
 scrie m

d)
  #include <iostream>

using namespace std;

int main() {
    int n,k,m;
    cin>>n;
    k=1; m=1;
    while(n>9)
    {
        if (n%10==n/10%10)
     {   k++;
        if (k>m)
        m=k;
    }
    else
    k=1;
        n/=10;
    }
    cout<<m;

    return 0;
}

sub 2
1. d
2. a
3. {2,3,1,7}

4.for (i=1;i<=20;i++)
  s+==p[i].nrLocuriInchiriate*p[i].pretOra;

5.
  #include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n,k;
    char s[21][21],t[21]={};
    cin>>n;
    cin.get();
    
      for (int i=1;i<=n;i++)
 {     cin.get(s[i],21);
      cin.get();
}
    
    cin>>k;
    
     for (int i=1;i<=n;i++)
   { int n=strlen(s[i]);
       if (n==k)
 {   strcat(t,s[i]);
     strcat (t," ");
 }
}
      for (int i=1;i<=n;i++)
   { int n=strlen(s[i]);
       if (n!=k)
 {   strcat(t,s[i]);
     strcat (t," ");
 }
}

cout<<t;
    return 0;
}
