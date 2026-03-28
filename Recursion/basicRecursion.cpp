#include <iostream.h>

//basic recursion concepts 
//print name 5 times

void nameRunner(int i ,int n){
    if(i>n)return ;
    cout<<"harsh"<<endl;
    nameRunner(i+1,n);
}

//print linearly from 1 to n 

void linearRunner(int i,int n){
    if(i>n)return ;
    cout<<i<<endl;
    linearRunner(i+1,n);
}

//print in reverse nature from n to 1

void reverseRunner(int n){
    if(n<1)return ;
    cout<<n<<endl;
    reverseRunner(n-1);
}

//print in 1 to n using backtrack 
void backtrack(int i,int n){
    if(i<1)return ;
    backtrack(i-1,n);
    cout<<i<<endl;
}

//print from n to 1 using backtrack 
void rbacktrack(int i,int n){
    if(i>n)return ;
    rbacktrack(i+1,n);
    cout<<i<<endl;

}
int main(){
    int n;
    cin>>n;
    nameRunner(1,n);
    linearRunner(1,n);
    backtrack(n,n);
    rbacktrack(1,n);
}





