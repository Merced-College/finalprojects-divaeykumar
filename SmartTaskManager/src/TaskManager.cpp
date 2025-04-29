#include "TaskManager.h"
#include <algorithm>
#include <iostream>

TaskManager::TaskManager() {}

void TaskManager::addTask(const Task& task) {
    tasks.push_back(task);
}

bool TaskManager::removeTask(const std::string& taskName) {
    auto it = std::remove_if(tasks.begin(), tasks.end(), [&taskName](const Task& task) {
        return task.getName() == taskName;
    });

    if (it != tasks.end()) {
        tasks.erase(it, tasks.end());
        return true;
    }
    return false;
}

std::vector<Task> TaskManager::getAllTasks() const {
    return tasks;
}

Task* TaskManager::getTask(const std::string& taskName) {
    for (auto& task : tasks) {
        if (task.getName() == taskName) {
            return &task;
        }
    }
    return nullptr;
}

void TaskManager::displayTasks() const {
    for (const auto& task : tasks) {
        std::cout << task.toString() << std::endl;
    }
}

void TaskManager::sortTasksbyPriority() {
    std::sort(tasks.begin(), tasks.end(), [](const Task& a, const Task& b) {
        return a.getPriority() < b.getPriority();
    });
}

void TaskManager::saveTasks(const std::string& filename) const {
    // Implementation for saving tasks to a file
}

void TaskManager::loadTasks(const std::string& filename) {
    // Implementation for loading tasks from a file
}