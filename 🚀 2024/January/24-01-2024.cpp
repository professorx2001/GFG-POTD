//https://www.geeksforgeeks.org/problems/is-it-a-tree/1
//C

int isTree(int n, int m, vector<vector<int>> &adj) {
        vector<int> adjList[n];
        vector<int> visited(n, 0);
        vector<int> parent(n, -1); 
        
        for (auto i : adj){
            adjList[i[0]].push_back(i[1]);
            adjList[i[1]].push_back(i[0]);
        }
        
        queue<int> q;
        q.push(0);
        visited[0] = 1;
        
        while (!q.empty()){
            int data = q.front();
            q.pop();
            
            for(int i : adjList[data]) {
                if(!visited[i]){
                    visited[i] = 1;
                    parent[i] = data;
                    q.push(i);
                }
                else{
                    if(i != parent[data])
                        return 0;
                }
            }
        }
        
        for (int i = 0; i < n; ++i) {
            if (!visited[i])
                return 0;
        }
        return 1;
    }
