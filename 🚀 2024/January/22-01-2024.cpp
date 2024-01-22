//https://www.geeksforgeeks.org/problems/paths-from-root-with-a-specified-sum/1

vector<int> temp;
    vector<vector<int>> ans;
    void solve(Node* root, int sum){
        if(!root) return ;
        
        temp.push_back(root->key);
        
        if(sum - root->key == 0)
        ans.push_back(temp);
        
        solve(root->left,sum-root->key);
        solve(root->right,sum-root->key);
        
        temp.pop_back();
    }
    public:
    vector<vector<int>> printPaths(Node *root, int sum){
        solve(root,sum);
        return ans;
    }
