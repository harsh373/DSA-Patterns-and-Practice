//combination sum1 problem 
//where we had to find subsequence where the no can be repeated.



class Solution {
private:
 void findCombination(int ind,int target,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans){
    if(ind==arr.size()){
        if(target==0)ans.push_back(ds);
        return;
    }
    if(target>=arr[ind]){
        ds.push_back(arr[ind]);
        findCombination(ind,target-arr[ind],arr,ds,ans);
        ds.pop_back();

    }
    findCombination(ind+1,target,arr,ds,ans);


    
 }    
public:
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
    
        findCombination(0,target,arr,ds,ans);
        return ans;


        
    }
};


//combination sum2 problem will be done by that same principle that would BE APPLIED WIll be see after it 

