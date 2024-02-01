//https://www.geeksforgeeks.org/problems/pangram-checking-1587115620/1

bool checkPangram (string s) {
       if(s.length()<26)
       return false;
       
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        unordered_set<char> temp;
        for(auto i : s){
          if(i >= 'a' && i <= 'z')
            temp.insert(i);
        }
       return temp.size()==26;
    }
