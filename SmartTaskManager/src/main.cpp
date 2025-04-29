#include <iostream>
#include <string>
#include "TaskManager.h"

int main() {
    TaskManager Manager;
    int choice;

    while (true) {
        std::cout << "\n==== Smart Task Manager ====\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. Remove Task\n";
        std::cout << "3. View All Tasks\n";
        std::cout << "4. Sort Tasks by Priority\n";
        std::cout << "5. Save Tasks to File\n";
        std::cout << "6. Load Tasks from File\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(); // Clear the newline

        if (choice == 0) break;
        
        switch (choice) {
            case 1: {
                std::string name, dueDate;
                int priority;

                std::cout << "Enter task name: ";
                std::getline(std::cin, name);

                std::cout << "Enter due date (YYYY-MM-DD): ";
                std::getline(std::cin, dueDate);

                std::cout << "Enter priority (1 = High, 2 = Medium 3 = Low): ";
                std::cin >> priority;
                std::cin.ignore();

                Task newTask(name, dueDate, priority);
                Manager.addTask(newTask);
                break;
            }

            case 2: {
                std::string name;
                std::cout << "Enter task name to remove: ";
                std::getline(std::cin, name);
                if (!Manager.removeTask(name)) {
                    std::cout << "Task not found.\n";
                }
                break;
                    
            }

            case 3:
                Manager.displayTasks();
                break; 
            
            case 4:
                Manager.sortTasksbyPriority();
                std::cout << "Tasks sorted by priority.\n";
                break;

            case 5: {
                std::string filename;
                std::cout << "Enter filename to save tasks: ";
                std::getline(std::cin, filename);
                Manager.saveTasks(filename);
                break;
            }

            case 6: {
                std::string filename;
                std::cout << "Enter filename to load tasks: ";
                std::getline(std::cin, filename);
                Manager.loadTasks(filename);
                break;
            }

            default:
                std::cout << "Invalid option. Try again.\n";
                break;

        }

    }

    std::cout << "That's all folks!\n";
    return 0;

}
