#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to remove Nth node from the end
ListNode* removeNthFromEnd(ListNode* head, int n) {
    // Step 1: Create a dummy node pointing to head
    ListNode dummy(0);
    dummy.next = head;

    ListNode* fast = &dummy;
    ListNode* slow = &dummy;

    // Step 2: Move fast n+1 steps ahead
    for (int i = 0; i <= n; i++) {
        if (fast) fast = fast->next;
    }

    // Step 3: Move both pointers until fast reaches end
    while (fast) {
        fast = fast->next;
        slow = slow->next;
    }

    // Step 4: Delete the nth node from end
    ListNode* nodeToDelete = slow->next;
    slow->next = slow->next->next;
    delete nodeToDelete; // free memory (optional but good practice)

    // Step 5: Return updated head
    return dummy.next;
}

// Helper: Build list from initializer list
ListNode* buildList(const initializer_list<int>& vals) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int v : vals) {
        ListNode* node = new ListNode(v);
        if (!head) head = tail = node;
        else { tail->next = node; tail = node; }
    }
    return head;
}

// Helper: Print list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = buildList({1, 2, 3, 4, 5});
    cout << "Original List: ";
    printList(head);

    int n = 2;
    head = removeNthFromEnd(head, n);

    cout << "After Removing " << n << "th Node From End: ";
    printList(head);

    return 0;
}