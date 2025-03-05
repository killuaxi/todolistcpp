#include <iostream>
#include <vector>
#include <string>
using namespace std;

class TodoList {
public:
    vector<string> Tasks;

    // Метод для добавления задачи
    void addTasks() {
        string task;
        cout << "Add Task for today: " << endl;
        cin.ignore();
        getline(cin, task);
        Tasks.push_back(task);
        cout << "Task: " << task << " added successfully" << endl;
    };

    // Метод для удаления задачи
    void DeleteTask() {
        if (Tasks.empty()) {
            cout << "Todo list is empty" << endl;
            return;
        }
        cout << "Current Tasks: " << endl;
        for (int i = 0; i < Tasks.size(); i++) {
            cout << i + 1 << ". " << Tasks[i] << endl;
        }

        int taskNumber;
        cout << "Enter task number to delete, or 0 to back to the main menu " << endl;
        cin >> taskNumber;
          if(taskNumber == 0) {
            return;
        }

        if (taskNumber >= 1 && taskNumber <= Tasks.size()) {
            cout << "Task \"" << Tasks[taskNumber - 1] << "\" deleted" << endl;
            Tasks.erase(Tasks.begin() + taskNumber - 1);
        } else {
        cout << "Wrong command, Try again" << endl;

        }

    };

    // Метод для просмотра списка задач
    void taskInfo() {
        if (Tasks.empty()) {
            cout << "Todo list is empty!" << endl;
            return;
        }
        cout << "Current Tasks: " << endl;
        for (int i = 0; i < Tasks.size(); i++) {
            cout << i + 1 << ". " << Tasks[i] << endl;
        }
        int backMenu;
        cout << "Enter 0 for main menu ";
        cin >> backMenu;
        if(backMenu == 0) {
            return;
        }else {
        return;
        }

    };

    // Меню программы
    void menu() {
        int choice;
        do {
            cout << "--- To-Do List ---" << endl;
            cout << "1. Add Task" << endl;
            cout << "2. Delete Task" << endl;
            cout << "3. View Tasks" << endl;
            cout << "4. Exit" << endl;
            cout << "-----------------" << endl;
            cout << "Please, choose options (1/2/3/4): ";
            cin >> choice;

            switch (choice) {
                case 1:
                    addTasks();
                    break;
                case 2:
                    DeleteTask();
                    break;
                case 3:
                    taskInfo();
                    break;
                case 4:
                    cout << "closing the app...." << endl;
                    break;
                default:
                    cout << "Wrong Command, Try again." << endl;
            }
        } while (choice != 4);  // Цикл будет работать до выбора опции 4 (выход)
    }
};

int main() {
    TodoList mylist;  // Создание объекта списка задач
    mylist.menu();  // Вызов меню
    return 0;
}
