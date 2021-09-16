#include <iostream>
using namespace std;

struct Node{
    int value;
    struct Node* next;
};

int main(){

    Node *head = NULL;
    Node *second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();

    // Assign value to head
    head->value = 0;
    head->next = second;

    // Assign value to second
    second->value = 1;
    second->next = third; // Segmentation fault

    // Assign value to second
    third->value = 2; // Segmentation fault
    third->next = second; 

    return 0;
}