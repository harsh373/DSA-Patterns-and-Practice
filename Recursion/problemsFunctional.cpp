#include <iostream.h>

//reverse an array
void swapArray(vector<int>&arr ,int l ,int r){
    if(l>=r)return ;
    swap(arr[l],arr[r]);
    swapArray(arr,l+1,r-1);

}

//using less variable to use if we want there is a trick to do it see swap is happening between i and n-i-1
void swappy(vector<int>&arr,int i,int n ){
    if(i>=n/2)return ;
    swap(arr[i],arr[n-i-1]);
    swappy(arr,i+1,n);
}


//check if string is a palindrome or not 
bool isPalindrome(string &s, int i ){
    if(i>=s.size()/2)return true;
    if(s[i]!=s[s.size()-i-1])return false;
    isPalindrome(s,i+1);
}


int main(){
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++)cin>>arr[i];

    swapArray(arr,0,n-1);
    swappy(arr,0,n);
    string s ;
    cin>>s;
    cout<<isPalindrome(s,

}