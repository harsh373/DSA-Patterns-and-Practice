#include <iostream.h>

//sum of n numbers in pARAmeterised way
void sumFunction(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    sumFunction(i-1,sum+i);
}
//sum of function in functional way
int sum(int n){
    if(n==0)return 0;
    return n+sum(n-1);
}

//factorial of no in functinal way
int facto(int n ){
    if(n==1)return 1;
    return n*facto(n-1);
}
int main(){
    int n ;
    cin>>n;
    sumFunction(n,0); //parameterised way
    cout<< sum(n);  //functional way
    cout<<facto(n); 
    return 0;
}