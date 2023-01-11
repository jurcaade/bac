sub 1
  1. b
  2. f(7552021,1) -> f(755202,2) 1=1 tip 1
    f(755202,2) -> f(75520,3) 2=2 tip 2
  f(75520,3) -> f(7552,4) 0=3 F
  f(7552,4)-> f(755,5) 2=4 F
  f(755,5) -> f(75,6) 5=5 A tip 5
  f(75,6) -> f(7,7) 5=6 F
  f(7,7) -> f(0,8) tip 7
  7521 => a
  3. c
  4. d
  5. b
  
  sub 2
  2. struct carte 
  {
    char titlu[51];
    char autor[10][51];
      int nrExemplare;
  }c;

3. s=informatica
tip 11
  tip *nf*rm*t*c*
11*nf*rm*t*c*

sub 3 
  1. int identice(int n)
{
  while(n>9)
    {
      if(n%10!=n/10%10)
        return 0;
      n/=10;
    }
  return 1;
}
  sub 3 ex 3
    int main()
{
 int i,n,maxi=0,x;
  f>>n;
for (int i=1;i<=n;i++)
  {
    f>>x;
    if (x>maxi)
      maxi=x;
    
    cout<<maxi<<" ";
  }
    return 0;
}


/*

