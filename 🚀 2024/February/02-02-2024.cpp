// https://www.geeksforgeeks.org/problems/implement-atoi/1

int atoi(string s) {
        int num = 0;
        bool flag = false;
        
        for(int i = 0; i<s.size(); i++){
            if(i == 0 && s[i] == '-') flag = true;
            else{
                int digit =  s[i] - '0';
                if(digit >= 0 && digit <= 9)
                num = num * 10 + digit;
                else
                return -1;
            }
            
        }
        
        return flag == true ? num*-1 : num;
    }
