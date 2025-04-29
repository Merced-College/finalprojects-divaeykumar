#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <vector>
#include <string>
#include "Task.h"

class TaskManager {
private:
    std::vector<Task> tasks;

    public:
    // Constructor
    TaskManager();

    //Implement a task
    void addTask(const Task& task);
    
    //Delete task by name
    bool removeTask(const std::string& taskName);
    
    //Obtain all tasks
    std::vector<Task> getAllTasks() const;
    
    //Obtain a specific task by name
    Task* getTask(const std::string& taskName);

    //Show all tasks
    void displayTasks() const;

    //sort tasks by importance and or significance
    void sortTasksbyPriority();

    //Save tasks to File
    void saveTasks(const std::string& filename) const;

    //Download tasks from file
    void loadTasks(const std::string& filename);
};

#endif