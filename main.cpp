#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> tasks;
    int choice;
    string task;

    while (true) {
        cout << "\n1. Add Task\n2. View Tasks\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter task: ";
            cin.ignore(); // clear newline from input buffer
            getline(cin, task);
            tasks.push_back(task);
        } else if (choice == 2) {
            cout << "\nTo-Do List:\n";
            for (int i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << tasks[i] << "\n";
            }
        } else if (choice == 3) {
            cout << "Goodbye!\n";
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
