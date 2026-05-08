#include <iostream>
#include <string>
using namespace std;



/*Problem Statement:
Managing a to-do list dynamically without using arrays or STL — 
instead using a linked list where each task is a node,
 allowing efficient insertion and deletion without fixed memory allocation.
 I wish you good look solving this.*/

struct Node {
    int id;
    string task;
    Node* next;
};

class TaskManager {
    Node* head;
    int counter;

public:
    TaskManager() {
        head = NULL;
        counter = 1;
    }

    void addTask(string task) {
        Node* newNode = new Node();
        newNode->id = counter++;
        newNode->task = task;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }

        cout << "Task added successfully!\n";
    }

    void deleteTask(int id) {
        if (head == NULL) {
            cout << "No tasks found.\n";
            return;
        }

        if (head->id == id) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Task deleted.\n";
            return;
        }

        Node* temp = head;
        while (temp->next != NULL && temp->next->id != id)
            temp = temp->next;

        if (temp->next == NULL) {
            cout << "Task with ID " << id << " not found.\n";
        } else {
            Node* toDelete = temp->next;
            temp->next = toDelete->next;
            delete toDelete;
            cout << "Task deleted.\n";
        }
    }

    void viewTasks() {
        if (head == NULL) {
            cout << "No tasks available.\n";
            return;
        }

        cout << "\n--- Task List ---\n";
        Node* temp = head;
        while (temp != NULL) {
            cout << "[" << temp->id << "] " << temp->task << "\n";
            temp = temp->next;
        }
        cout << "-----------------\n";
    }

    void clearAll() {
        while (head != NULL) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        cout << "All tasks cleared.\n";
    }
};

int main() {
    TaskManager tm;
    int choice;
    string taskName;
    int taskId;

    cout << "============================\n";
    cout << "  Linked List Task Manager  \n";
    cout << "============================\n";

    while (true) {
        cout << "\n1. Add Task\n";
        cout << "2. Delete Task\n";
        cout << "3. View Tasks\n";
        cout << "4. Clear All\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter task: ";
                getline(cin, taskName);
                tm.addTask(taskName);
                break;
            case 2:
                cout << "Enter task ID to delete: ";
                cin >> taskId;
                tm.deleteTask(taskId);
                break;
            case 3:
                tm.viewTasks();
                break;
            case 4:
                tm.clearAll();
                break;
            case 5:
                cout << "Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
