#include <iostream>

// Define the structure for a linked list node
struct Node {
    int data;
    Node* next;
};

// Function to add a new node to the end of the linked list
void append(Node*& head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        // If the list is empty, the new node becomes the head of the list
        head = newNode;
    } else {
        // Traverse to the end of the list and append the new node
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to print the linked list
void display(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    Node* head = nullptr;

    // Add nodes to the linked list
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);

    // Display the linked list
    std::cout << "Linked List: ";
    display(head);

    return 0;
}
