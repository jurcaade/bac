sub 1
  1 c
  2 b
  3 b
  4 b
  
  sub 2
 1 d.
  citeste n (număr
natural nenul)
pentru i←1, n execută
| j←1
|daca (j<=i) atunci
│executa     /// repeta
││dacă i%2=0 atunci
||| scrie j
│││ altfel scrie j*j
││└■
||   j←j+1
│└■cat timp j<=i /// pana cand j>i
└■ 
2. struct vauto{
  unsigned int km, pret;
  float consum;
}m[300];

3.for (i=0; i<6; i++)
 for (j=0; j<4; j++) 
   if (j%2==0)
     a[i][j]='A'+i;
  else
     a[i][j]='a'+i; 
//a[i][j]='A'+(j%2)*32+i;

sub 3 
  1.
  void numimp(int n, int v[], int &c)
{
  c=0;
  int i,x,ok;
  for(i=0;i<n;i++)
    {   
      ok=1;
      x=v[i];
      while(x!=0)
        {
          if(x%10%2!=0)
            ok=0;
          x/=10;
        }
      if(ok==0)
        c++;
    }
}

3.
  int main() 
{
  char s[11],v[101],*p,a[101][101];
  int k=0,ok=0;
  cin.getline(s,11);
  cin.getline(v,101);
  p=strtok(v," ");
  while(p!=NULL)
    {
      k++;
      strcpy(a[k],p);
      p=strtok(NULL," ");
    }
  for(int i=2;i<k;i++)
    if(strcmp(s,a[i])==0){
      cout<<a[i-1]<<" "<<a[i+1]<<endl;
      ok=1;
    }
  if(ok==0)
    cout<<"Nu exista";
  return 0;
}
