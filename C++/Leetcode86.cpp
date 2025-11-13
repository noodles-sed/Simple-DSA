#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to partition the linked list
ListNode* partition(ListNode* head, int x) {
    ListNode* beforeHead = new ListNode(0); // Dummy head for nodes < x
    ListNode* afterHead = new ListNode(0);  // Dummy head for nodes >= x
    ListNode* before = beforeHead;
    ListNode* after = afterHead;
    
    while (head) {
        if (head->val < x) {
            before->next = head;
            before = before->next;
        } else {
            after->next = head;
            after = after->next;
        }
        head = head->next;
    }
    
    after->next = nullptr;       // End the list
    before->next = afterHead->next; // Connect the two partitions
    
    ListNode* newHead = beforeHead->next;
    delete beforeHead;
    delete afterHead;
    return newHead;
}

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Example usage
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(4);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(2);
    
    int x = 3;
    cout << "Original List: ";
    printList(head);
    
    ListNode* newHead = partition(head, x);
    cout << "Partitioned List around " << x << ": ";
    printList(newHead);
    
    return 0;
}
