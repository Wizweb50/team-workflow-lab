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