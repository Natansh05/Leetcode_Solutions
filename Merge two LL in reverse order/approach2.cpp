//hum log normal ascending order me LL bana denge and then reverse kar denge 
//thoda time isme jyada lagega coz number of traversals jyada hai approach 1 se 
//so i recommend the use of approach1 as it is optimal then this one
class Solution {
public:
    struct Node *reverseList(Node *curr) {
        if (!curr || !(curr->next))
            return curr;
        auto res = reverseList(curr->next);
        curr->next->next = curr;
        curr->next = NULL;
        return res;
    }

    struct Node *mergeResult(Node *node1, Node *node2) {
        if (!node1)
            return reverseList(node2);
        if (!node2)
            return reverseList(node1);

        Node *curr = new Node;
        Node *head = curr;

        while (node1 && node2) {
            if (node1->data < node2->data) {
                curr->next = node1;
                node1 = node1->next;
            } else {
                curr->next = node2;
                node2 = node2->next;
            }
            curr = curr->next;
        }

        if (node1) {
            curr->next = node1;
        }

        if (node2) {
            curr->next = node2;
        }

        head = head->next;
        return reverseList(head);
    }
};
