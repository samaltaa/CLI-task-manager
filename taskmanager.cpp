#include <iostream>
#include <string>
#include <vector>

class Task {
public:
    Task(const std::string& name, const std::string& description) 
        : taskName(name), taskDescription(description) {}

    std::string getName() const {
        return taskName;
    }

    std::string getDescription() const {
        return taskDescription;
    }

private:
    std::string taskName;
    std::string taskDescription;
};

class TaskManager {
public:
    void addTask(const Task& task) {
        tasks.push_back(task);
    }

    void listTasks() const {
        std::cout << "Tasks: \n";
        for (const Task& task : tasks) {
            std::cout << "- " << task.getName() << ": " << task.getDescription() << "\n";
        }
    }

private:
    std::vector<Task> tasks;
};

int main() {
    TaskManager taskManager;

    while(true){
        std::cout << "1. Add Task\n";
        std::cout << "2. List Tasks\n";
        std::cout << "3. Quit\n";
        std::cout << "Choose an option: ";

        int choice;
        std::cin >> choice;
    }
}