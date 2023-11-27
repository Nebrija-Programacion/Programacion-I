#include <iostream>

using namespace std;

int main()

{
   int a {0},i,n;

         cout<<"Enter a number: ";
         cin>>n;

         for (i=1; i<(n+1); i++)

         {
         if (n%i==0){
             a++;
                    }
         }
         if(a!=2){
          cout<<" It is not a prime number " << endl;
                 }else{
          cout<<" Yes!, it's a prime number" << endl;
                      }
    return 0;

}
