//https://www.geeksforgeeks.org/problems/course-schedule/1
//C
//Kahn Algorithm

vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
        vector<int> inDegree(n, 0);
        unordered_map<int, vector<int>> adj;
        
        for(int i=0; i<m; i++) {
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];
            
            adj[v].push_back(u);
            inDegree[u]++;
        }
        
        queue<int> q;
        vector<int> ans;
        
        bool found = false;
        for(int i=0; i<n; i++) {
            if(inDegree[i] == 0) {
                q.push(i);
                found = true;
            }
        }
        
        if(!found) {
            return ans;
        }
        
        while(!q.empty()) {
            auto node = q.front();
            q.pop();
            
            ans.push_back(node);
            
            for(auto nbr: adj[node]) {
                inDegree[nbr]--;
                if(inDegree[nbr] == 0) {
                    q.push(nbr);
                }
            }
        }
        
        if(ans.size() != n) {
            return {};
        }
        return ans;
    }
