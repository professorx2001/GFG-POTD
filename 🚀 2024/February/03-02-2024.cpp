//https://www.geeksforgeeks.org/problems/decimal-equivalent-of-binary-linked-list/1

long long unsigned int decimalValue(Node *head)
        {
           const int mod = 1e9 + 7;
           long long unsigned int ans = 0;
           while(head){
               ans = (ans*2 + head->data) % mod;
               head = head->next;
           }
           return ans;
        }
