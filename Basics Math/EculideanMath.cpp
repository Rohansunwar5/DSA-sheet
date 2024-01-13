#include <bits/stdc++.h>
using namespace std;
// so the problem of finding gcd comes with the time complexity of the algorithm
/*
for(int i =min(n1,n2);i>=1;i--){
  if(n%i==0){
    return i;
    break;
  }
}
 this solution works effeciently with the help of eculidean math but it does not have much affect in tc of the algorithm

 for example gcd(52,10) will have lot of steps and operations
 gcd(52,10) => (42,10) => (32,10) => (22,10) =>(12,10)=>(2,10) =>swap => (8,2) => (6,2) =>(4,2) =>(2,2) => (0,2)

 so we can see that a lot of operations keeps following which affects the tc of the algo

 in order to avoid this we can replace substraction of two numbers with modulo

 ex : gcd(52,10) = gcd(52%10,10)
gcd(2,10) => gcd(10%2,2) => gcd(0,2)
so we can observe the number of steps its taking is much lesser
tc => O(log(phie)(min(a,b)));
*/
void Gcd(int a, int b)
{
  while (a > 0 && b > 0)
  {
    if (a > b)
    {
      a = a % b;
    }
    else
    {
      b = b % a;
    }
  }
  if (a == 0)
    cout << b << " ";
  else
    cout << a << " ";
};
int main()
{
  Gcd(52, 10);
  return 0;
}