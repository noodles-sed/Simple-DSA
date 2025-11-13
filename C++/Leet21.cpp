#include <iostream>
using namespace std;

// Definition for singly-linked list node.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Iterative merge (splicing nodes, no new nodes created except dummy pointer)
ListNode* mergeTwoListsIterative(ListNode* l1, ListNode* l2) {
    // Dummy node simplifies head handling
    ListNode dummy(0);
    ListNode* tail = &dummy;

    while (l1 != nullptr && l2 != nullptr) {
        if (l1->val <= l2->val) {
            tail->next = l1;   // attach l1 node
            l1 = l1->next;     // move l1 forward
        } else {
            tail->next = l2;   // attach l2 node
            l2 = l2->next;     // move l2 forward
        }
        tail = tail->next;     // advance tail to newly attached node
    }

    // At least one list is now null; attach the remainder
    if (l1 != nullptr) tail->next = l1;
    else tail->next = l2;

    return dummy.next;
}

// Recursive merge (also splices nodes)
ListNode* mergeTwoListsRecursive(ListNode* l1, ListNode* l2) {
    if (l1 == nullptr) return l2;
    if (l2 == nullptr) return l1;

    if (l1->val <= l2->val) {
        l1->next = mergeTwoListsRecursive(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeTwoListsRecursive(l1, l2->next);
        return l2;
    }
}

// Helper: build a linked list from an array of ints and return head
ListNode* buildList(const initializer_list<int>& vals) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int v : vals) {
        ListNode* node = new ListNode(v);
        if (!head) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }
    return head;
}

// Helper: print a linked list
void printList(ListNode* head) {
    ListNode* cur = head;
    while (cur) {
        cout << cur->val;
        if (cur->next) cout << " -> ";
        cur = cur->next;
    }
    cout << '\n';
}

// Helper: free nodes in a list to avoid memory leak in examples
void freeList(ListNode* head) {
    while (head) {
        ListNode* tmp = head;
        head = head->next;
        delete tmp;
    }
}

int main() {
    // Example 1
    ListNode* a = buildList({1, 2, 4});
    ListNode* b = buildList({1, 3, 4});

    cout << "List A: ";
    printList(a);
    cout << "List B: ";
    printList(b);

    // Use iterative merge (splicing nodes)
    ListNode* merged = mergeTwoListsIterative(a, b);
    cout << "Merged (iterative): ";
    printList(merged);

    // Free merged list nodes (they were allocated by buildList)
    freeList(merged);

    // Example 2 (using recursive merge)
    ListNode* c = buildList({2, 5, 7});
    ListNode* d = buildList({1, 3, 4, 8});
    cout << "\nList C: ";
    printList(c);
    cout << "List D: ";
    printList(d);

    ListNode* mergedRec = mergeTwoListsRecursive(c, d);
    cout << "Merged (recursive): ";
    printList(mergedRec);
    freeList(mergedRec);

    return 0;
}
