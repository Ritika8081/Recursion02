/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
bool isPrime(int n,int i=2){
    if(n<=2){
        return (n==2)?true:false;}
        if(n%i==0){
            // cout<<i;
            return false;
        }
        if(i*i > n){
            cout<<i<<" ";
            return true;
        }
    return isPrime(n,i+1);
}
int main()
{
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"prime";
    }
    else{
        cout<<"notprime";
    }

    return 0;
}
