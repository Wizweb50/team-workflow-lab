#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Task
{
    int id;
    string title;
    bool completed;
};

void addTask(vector<Task> &tasks, int id, const string &title)
{
    if (title.empty())
    {
        cout << "Task title cannot be empty.\n";
        return;
    }

    tasks.push_back({id, title, false});
    cout << "Task added successfully!\n";
}

void listTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }

    for (const Task& task : tasks) {
        cout << "ID: " << task.id << endl;
        cout << "Title: " << task.title << endl;
        cout << "Status: "
             << (task.completed ? "Completed" : "Pending")
             << endl;
        cout << "-------------------\n";
    }
}