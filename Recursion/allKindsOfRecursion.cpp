#include<iostream>
#include<vector>
using namespace std;


//PATTERN1
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
//PATTERN2 
//print the only one subsequence whose sum is k we are going with the great method of taking bool one which eventually give us only one result and that is it 

//print those subseques whose sum is target
bool prints1(vector<int>&arr,int target,int n,vector<int>&ds,int ind,int sum){
    if(ind==n){
        if(sum==target){
            for(auto it:ds){
                cout<<it<<" ";

            }
            cout<<endl;
            return true;
        }
        return false;
    }

    //putting the pick condition
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    if(prints1(arr,target,n,ds,ind+1,sum)==true){
        return true;
    }

    //taking not pick condition
    sum-=arr[ind];
    ds.pop_back();
    if(prints1(arr,target,n,ds,ind+1,sum)==true){
        return true;
    }
    return false;
    

    }


//Pattern 3
//total count of the subsequnece whose sum is k 
//taking left and right recursion in front of count

int printc(vector<int>&arr,int target,int n,int ind,int sum){
    if(ind==n){
        if(sum==target)return 1;
        return 0;
    }

    //putting the pick condition
    
    sum+=arr[ind];
    int l = printc(arr,target,n,ind+1,sum);
    


    //taking not pick condition
    sum-=arr[ind];
    
    int r = printc(arr,target,n,ind+1,sum);
    

    return l+r;
    

    }





int main(){
    vector<int>arr = {1,5,5};
    int target = 6;
    int n = 3;
    vector<int>ds;
    prints(arr,target,n,ds,0,0);
    cout<<"now the second one"<<endl;
    prints1(arr,target,n,ds,0,0);
    cout<<"taking count"<<endl;
   cout<< printc(arr,target,n,0,0);
    return 0;
}