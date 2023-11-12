#include <vector>
#include <string>
#include <iostream>

using namespace std;

class TodoList {



    public:  
        vector<string> items;

    TodoList(){
        items = vector<string>();
    }

    void print(){
        cout << "\n#################################\n             Todo List\n#################################\n";
        cout << "Your list currently has " + to_string(items.size()) + " items\n";
        for (int i = 0; i < items.size(); i++){
            string item = items.at(i);
            cout << "Item " + to_string(i+1) + " : " + item + "\n";
        }
        cout << "\n---------------------------------\n";
    }

    void add(string item){
        items.push_back(item);
    }

    void remove(int index){

    }


};


