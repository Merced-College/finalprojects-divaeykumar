//header
#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class User {
private:
    std::string username;
    std::vector<std::string> tasks;

public:
// Constructor
User(const std::string& name);

// Get username
std::string getUsername() const;

// Add a task
void addTask(const std::string& task);

// Remove task by index
void removeTask(int index);

// Get all tasks
std::vector<std::string> getTasks() const;

// Show the user's info/input
void displayUser() const;
};

#endif