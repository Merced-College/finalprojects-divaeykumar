#include "TaskLinkedList.h"
#include <iostream>


// Constructor: initialize head to nullptr
TaskLinkedList::TaskLinkedList() : head(nullptr) {}

// Destructor: delete all nodes to prevent memory leaks
TaskLinkedList::~TaskLinkedList() {
    TaskNode* current = head;
    while (current != nullptr) {
        TaskNode* next = current->next;
        delete current;
        current = next;
    }
}

// Add a task to the end of the list
void TaskLinkedList::add(const Task& t) {
    TaskNode* newNode = new TaskNode(t);

    if (head == nullptr) {
        head = newNode;
    } else {
        TaskNode* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Print all tasks in the list
void TaskLinkedList::printAll() const {
    TaskNode* current = head;
    int index = 1;
    while (current != nullptr) {
        std::cout << index << ". ";
        current->data.displayTask();
        current = current->next;
        ++index;
    }

    if (index == 1) {
        std::cout << "No tasks in the list.\n";
    }
}
