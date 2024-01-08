//Md Zaki Hussain
//https://www.geeksforgeeks.org/problems/merge-2-sorted-linked-list-in-reverse-order/1\


class Solution
{
    public:
    Node* reverse(Node* node){
        Node* prev = NULL;
        
        while(node){
            Node* forward = node->next;
            node->next = prev;
            prev = node;
            node = forward;
        }
        return prev;
    }
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        node1 =  reverse(node1);
        node2 = reverse(node2);
        
        //now merging
        Node* curr = NULL;
        Node* newHead = NULL;
        Node* tempNode = NULL;
        while(node1 and node2){
            if(node1->data > node2->data){
                if(!curr){
                    curr = new Node;
                    curr->data = node1->data;
                    newHead = curr; 
                }
                else{
                   tempNode = new Node;
                   tempNode->data = node1->data;
                   curr->next = tempNode;
                   curr = tempNode;
                }
               
               node1 = node1->next;
            }
            else{
                if(!curr){
                    curr = new Node;
                    curr->data = node2->data;
                    newHead = curr; 
                }
                else{
                   tempNode = new Node;
                   tempNode->data = node2->data;
                   curr->next = tempNode;
                   curr = tempNode;
                }
                node2 = node2->next;
            }
        }
        
        while(node1){
            if(!curr){
                    curr = new Node;
                    curr->data = node1->data;
                    newHead = curr; 
                }
                else{
                   tempNode = new Node;
                   tempNode->data = node1->data;
                   curr->next = tempNode;
                   curr = tempNode;
                }
               
               node1 = node1->next;
        }
        while(node2){
            if(!curr){
                    curr = new Node;
                    curr->data = node2->data;
                    newHead = curr; 
                }
                else{
                   tempNode = new Node;
                   tempNode->data = node2->data;
                   curr->next = tempNode;
                   curr = tempNode;
                }
                node2 = node2->next;
        }
        return newHead;
    }
};
