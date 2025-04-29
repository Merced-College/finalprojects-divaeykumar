#include "Task.h"
#include <iostream>

// Constructor: Initialize all attributes
Task::Task(std::string taskName, std::string taskDueDate, int taskPriority)
    : name(taskName), dueDate(taskDueDate), priority(taskPriority) {}

// Get task name
std::string Task::getName() const {
    return name;
}

// Get task due date
std::string Task::getDueDate() const {
    return dueDate;
}

// Get task priority
int Task::getPriority() const {
    return priority;
}

// Set task name
void Task::setName(const std::string& taskName) {
    name = taskName;
}

// Set task due date
void Task::setDueDate(const std::string& taskDueDate) {
    dueDate = taskDueDate;
}

// Set task priority
void Task::setPriority(int taskPriority) {
    priority = taskPriority;
}

// Display task information
std::string Task::toString() const {
    return "Task: " + name + "\nDue Date: " + dueDate + "\nPriority: " + std::to_string(priority);
}

// Implementing the displayTask method
void Task::displayTask() const {
    std::cout << "Task Name: " << name << "\n"
              << "Due Date: " << dueDate << "\n"
              << "Priority: " << priority << "\n";
}
