#include <iostream>
#include<vector>
using namespace std;

//printing all subsequences 
/* 
the trick is to have pick or not pick condition which is the most important thing happen
either to pick the element or not pick at alll
*/
void printAllSub(vector<int>&arr,vector<int>&ds,int ind,int n){
    if(ind==n){
        for(auto it :ds){
            cout<<it<<" ";
        }
         if(ds.size()==0)cout<<"{ }"<<" ";
         cout<<endl;   
         return;
    }
    //every base case has a return
   
    //taking the pick conditon 
    ds.push_back(arr[ind]);
    printAllSub(arr,ds,ind+1,n);
    
    //taking the not pick condition
    ds.pop_back();
    printAllSub(arr,ds,ind+1,n);
}

//time complexity : 2^n * n;
//space complexity:0(n);



int main(){
    vector<int>arr ={2,1,3};
    vector<int>ds;
    
    int n = arr.size();
    printAllSub(arr,ds,0,n);
    return 0;

}