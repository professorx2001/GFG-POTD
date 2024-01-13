//https://www.geeksforgeeks.org/problems/insertion-sort-for-singly-linked-list/1

Node* insertionSort(struct Node* head_ref)
    {
        if(!head_ref || !head_ref->next) return head_ref;
        
        Node* curr = head_ref;
        while (curr != NULL) {
            Node* temp = head_ref;
            while (temp != curr && temp != NULL){
                if (temp->data > curr->data){
                    int tempData = curr->data;
                    curr->data = temp->data;
                    temp->data = tempData;
                }
                else{
                    temp = temp->next;
                }
            }
            curr = curr->next;
        }
        return head_ref;
    }
