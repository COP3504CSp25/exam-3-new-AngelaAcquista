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
        Node* current = head;
        LinkedList list;
        if(current->next != nullptr){

            return list;
        }
        
        while(current->next != nullptr){
            current = current->next;
        }

        return list;
    }

    Node* head = nullptr;
};
