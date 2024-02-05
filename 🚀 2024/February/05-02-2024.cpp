//https://www.geeksforgeeks.org/problems/sorted-insert-for-circular-linked-list/1

Node *sortedInsert(Node* head, int data)
    {
        if (head == NULL) {
            Node* newNode = new Node(data);
            head = newNode;
            newNode->next = newNode;
            return head;
        }
        
        // Insert at head
        if (data < head->data) {
            Node* temp = head;
            Node* newNode = new Node(data);
            newNode->next = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            head = newNode;
            return head;
        }
        
        // Insert at middle or end
        Node* temp = head;
        while (temp->next != head) {
            if (data <= temp->next->data) {
                Node* newNode = new Node(data);
                newNode->next = temp->next;
                temp->next = newNode;
                return head;
            }
            temp = temp->next;
        }
        
        // Insert at end
        Node* newNode = new Node(data);
        newNode->next = head;
        temp->next = newNode;
        
        return head;

    }
