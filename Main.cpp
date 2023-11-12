#include <iostream>
#include <string>
#include<limits>
#include "TodoList.cpp"

using namespace std;

void print(string str)
{
    cout << str + "\n";
}

int main()
{
    cout << "Hello\n";

    TodoList todo = TodoList();
    bool quit = false;
    while (!quit)
    {
        todo.print();
        print("Enter 'a' to add a todo item, 'r' to remove a todo item or 'q' to quit.");
        char letter;
        cin >> letter;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        string item;
        int itemnumber;
        int index;
        switch (letter){
            case 'a':
                print("Enter the todo item description");
                
                
                getline(cin, item);

                todo.add(item);
                break;
            case 'r':
                print("Enter the item number");
                cin >> itemnumber;
                index = itemnumber - 1;
                todo.remove(index);
                break;
            case 'q':
                quit = true;
                break;
            default:
                print("option not recognised");
        }
    }

    return 0;
}

