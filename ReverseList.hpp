#pragma once

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    void addHead(const int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    
    LinkedList reverseList() const {
        // implement your function here!
        LinkedList list;
        if(head == nullptr){
            return list;
        }
        Node* current = head;
        if(current->next != nullptr){
            list.addHead(current->data);
            return list;
        }
        int count = 0;
        while(current->next != nullptr){
            current = current->next;
            count++;
        }
        for(int i = count; i != 0; --i){
            count = 0;
            current = head;
            while(count != i){
                current = current->next;
                count++;
            }
            list.addHead(current->data);
        }
        return list;
    }

    Node* head = nullptr;
};
