class Solution {
  public:
    void printList(Node *head) {
        Node *current = head;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
    }
};
