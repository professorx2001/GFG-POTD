//https://www.geeksforgeeks.org/problems/all-unique-permutations-of-an-array/1

//Solution 1:
set<vector<int>> st;
  void solve(int index,vector<vector<int>> ans, vector<int> &arr, int n){
      if(index == n){
          st.insert(arr);
          return;
      }
      for(int j = index; j<n; j++){
          swap(arr[index], arr[j]);
          solve(index+1, ans, arr, n);
          //backtracking
          swap(arr[index], arr[j]);
      }
  }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
         vector<vector<int>> ans;
         solve(0, ans, arr, n);
         for(auto i: st){
            ans.push_back(i);
         }
         return ans;
    }


//Solution 2:
vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        
        ans.push_back(arr);
        //it will give next iterations so first we will push arr
        while(next_permutation(arr.begin(), arr.end())){
            ans.push_back(arr);
        }
        
        return ans;
    }
