//https://www.geeksforgeeks.org/problems/search-pattern0205/1

vector <int> search(string pat, string txt)
        {
            vector<int> ans;
            bool check = false;
            
            for(int i = 0; i<txt.size(); i++){
                
                if(txt[i] == pat[0]){
                    int temp = i;
                    for(int j = 0; j<pat.size() ; j++){
                        if(pat[j] == txt[temp]){
                            temp++;
                        }
                        else{
                            check = true;
                            break;
                        }
                    }
                    if(!check){
                        ans.push_back(i+1);
                    }
                        check = false;
                    
                }
            }
            
            return ans;
        }
