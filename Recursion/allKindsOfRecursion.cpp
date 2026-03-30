#include<iostream>
#include<vector>
using namespace std;

//print those subseques whose sum is target
void prints(vector<int>&arr,int target,int n,vector<int>&ds,int ind,int sum){
    if(ind==n){
        if(sum==target){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }

    //putting the pick condition
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    prints(arr,target,n,ds,ind+1,sum);

    //taking not pick condition
    sum-=arr[ind];
    ds.pop_back();
    prints(arr,target,n,ds,ind+1,sum);
    

    }


int main(){
    vector<int>arr = {1,5,7};
    int target = 8;
    int n = 3;
    vector<int>ds;
    prints(arr,target,n,ds,0,0);
    return 0;
}