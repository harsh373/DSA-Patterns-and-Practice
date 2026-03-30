#include <iostream>
using namespace std;

int fibonachi(int n ){
    if(n<=1)return n;
    int last = fibonachi(n-1);
    int slast = fibonachi(n-2);
    return last+slast;
}

int main(){
    int n ;
    cin>>n;
    cout<<fibonachi(n);
    return 0;
}

//classic exaxple of fibonachi no where there is multiple recursion call happening down there 

//time complexity is 0(2^n) because each recursion is calling another two recursion it is trimming down not exactly 2 ki power n but ya close to it 



