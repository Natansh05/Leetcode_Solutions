
//is approach me hum log do pointers lenge each at node1 and node 2 
//temp will store previous node 
//head will create new node and adds data in it and at new iteration we update temp to head

class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2){
        Node *head=NULL,*temp=NULL;
        
        while(node1 && node2){
            temp = head;
            head = new Node;
            if(node1->data <= node2->data){
                head->data = node1->data;
                node1 = node1->next;
            }
            else{
                head->data = node2->data;
                node2 = node2->next;
            }
            head->next = temp;
        }
        
        if(node1){
            while(node1){
                temp = head;
                head = new Node;
                head->data = node1->data;
                head->next = temp;
                node1 = node1->next;
            }
        }
        if(node2){
            while(node2){
                temp = head;
                head = new Node;
                head->data = node2->data;
                head->next = temp;
                node2 = node2->next;
            }
        }
        
        return head;
        // your code goes here
    }  
};
