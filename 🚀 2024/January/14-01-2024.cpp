//https://www.geeksforgeeks.org/problems/find-duplicate-rows-in-a-binary-matrix/1

vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
       vector<int> ans;
       unordered_map<string, bool> present;
       
       for(int i = 0; i<M; i++){
           string temp = "";
           for(int j = 0; j<N; j++){
               temp += matrix[i][j];
           }
           if(present[temp])
           ans.push_back(i);
           else
           present[temp] = true;
       }
      return ans;
    } 
