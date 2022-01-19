#include <iostream>

using namespace std;

bool isPrime(int n){
  if(n<2) return false;
  for(int i{2};i*i<=n;i++){
    if(n%i==0) return false;
  }
  return true;
}

int primorial(int n){
  int res=1;
  for(int i{2};i<=n;i++){
    if(isPrime(i)) res*=i;
  }
  return res;
}

int main()
{
    cout << "Introduce un numero" << endl;
    int n; cin >> n;
    cout << "El primorial de " << n << " es " << primorial(n) << "\n";
    return 0;
}
