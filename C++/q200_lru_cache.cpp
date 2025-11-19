// Question 200: LRU Cache
// Author: Veda Vyasa
// Description: Implementation of a Least Recently Used (LRU) Cache using
// a doubly linked list and an unordered_map. All operations run in O(1).
// Language: C++

#include <bits/stdc++.h>
using namespace std;

class LRUCache {
public:
    int capacity;

    // Doubly linked list node
    struct Node {
        int key, value;
        Node *prev, *next;
        Node(int k, int v) : key(k), value(v), prev(nullptr), next(nullptr) {}
    };

    Node *head, *tail;
    unordered_map<int, Node*> mp;

    LRUCache(int cap) {
        capacity = cap;

        // Dummy head and tail nodes
        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    // Move node to front (most recently used)
    void moveToFront(Node* node) {
        // Remove from current position
        node->prev->next = node->next;
        node->next->prev = node->prev;

        // Insert after head
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }

    int get(int key) {
        if (mp.find(key) == mp.end())
            return -1;

        Node* node = mp[key];
        moveToFront(node);
        return node->value;
    }

    void put(int key, int value) {
        // If key exists, update and move to front
        if (mp.find(key) != mp.end()) {
            Node* node = mp[key];
            node->value = value;
            moveToFront(node);
            return;
        }

        // If cache is full → evict LRU
        if (mp.size() == capacity) {
            Node* lru = tail->prev;
            mp.erase(lru->key);

            lru->prev->next = tail;
            tail->prev = lru->prev;

            delete lru;
        }

        // Insert new node at front
        Node* newNode = new Node(key, value);
        newNode->next = head->next;
        newNode->prev = head;
        head->next->prev = newNode;
        head->next = newNode;

        mp[key] = newNode;
    }
};
