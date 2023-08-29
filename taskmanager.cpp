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