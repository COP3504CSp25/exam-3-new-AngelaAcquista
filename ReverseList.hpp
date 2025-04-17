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
        list.addHead(current->data);
        if(current->next != nullptr){
            list.addHead(current->data);
            return list;
        }
        while(current->next != nullptr){
            current = current->next;
            list.addHead(current->data);
        }
        return list;
    }

    Node* head = nullptr;
};
