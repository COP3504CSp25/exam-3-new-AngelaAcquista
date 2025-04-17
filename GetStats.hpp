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

    int* getStats() const{
        //write your function here!
        int* arr = new int[3];
        arr[0] = 0;
        arr[1] = 0;
        arr[2] = 0;
        if(head == nullptr){
            int* ptr = &arr[0];
            return ptr;
        }
        Node* current = head;
        arr[0] = current->data;
        arr[1] = current->data;
        int count;
        while(current->next != nullptr){
            if(arr[0] > current->data){
                arr[0] = current->data;
            }
            if(arr[1] < current->data){
                arr[1] = current->data;
            }
            arr[2] += current->data;
            current = current->next;
            count++;
        }
        arr[2] /= count;
        int* ptr = &arr[0];
        return ptr;
    }
    

private:
    Node* head = nullptr;
};
