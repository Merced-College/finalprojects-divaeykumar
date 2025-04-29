#include "User.h"
#include <iostream>

// Constructor: initializes username
User::User(const std::string& name) : username(name) {}

// Get username
std::string User::getUsername() const {
    return username;
}

// Add a task
void User::addTask(const std::string& task) {
    tasks.push_back(task);
}

// Remove a task by index (safely)
void User::removeTask(int index) {
    if (index >= 0 && index < static_cast<int>(tasks.size())) {
        tasks.erase(tasks.begin() + index);
    }
    else {
        std::cout << "Invalid task index.\n";
    }
}

// Return the task list
std::vector<std::string> User::getTasks() const {
    return tasks;
}

// Display the user's information and tasks
void User::displayUser() const {
    std::cout << "User: " << username << std::endl;
    std::cout << "Tasks:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << "  " << (i + 1) << ". " << tasks[i] << std::endl;
    }
}
