#ifndef TASKLINKEDLIST_H
#define TASKLINKEDLIST_H

#include "Task.h"

// Node structure to hold a Task and a pointer to the next node
struct TaskNode {
    Task data;
    TaskNode* next;

    // Constructor to initialize a node with task data
    TaskNode(const Task& t) : data(t), next(nullptr) {}
};

// Basic singly linked list to store tasks
class TaskLinkedList {
private:
    TaskNode* head;  // Pointer to the first node in the list

public:
    // Constructor
    TaskLinkedList();

    // Destructor
    ~TaskLinkedList();

    // Add a new task to the end of the list
    void add(const Task& t);

    // Print all tasks in the list
    void printAll() const;
};

#endif // TASKLINKEDLIST_H
