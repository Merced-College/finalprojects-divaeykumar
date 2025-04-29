#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
private:
    std::string name;
    std::string dueDate;
    int priority;

public:
    Task(std::string taskName, std::string taskDueDate, int taskPriority);
    std::string getName() const;
    std::string getDueDate() const;
    int getPriority() const;

    void setName(const std::string& taskName);
    void setDueDate(const std::string& taskDueDate);
    void setPriority(int taskPriority);

    // Implement declaration
    std::string toString() const;

    // Method to display details for given task
    void displayTask() const;
};

#endif