//https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

queue<int> modifyQueue(queue<int> q, int k) {
        stack<int> s;
        queue<int> ans;
        for(int i = 0; i<k; i++){
            s.push(q.front());
            q.pop();
        }
        for(int i = 0; i<k; i++){
            ans.push(s.top());
            s.pop();
        }
        while(!q.empty()){
            ans.push(q.front());
            q.pop();
        }
        return ans;
    }
