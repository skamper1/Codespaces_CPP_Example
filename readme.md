# Intro

This is a repo with two c++ files that create a simple console based todolist app.

It also contains a bash script that will compile the classes and run the code.

You can call the script from codespace console with the command

```
bash build_and_run.sh
```

## Exercise 1 - Opening a codespace

Create a codespace of this repository by clicking "code" on the main repository page, then selecting the codespaces tab and clicking "Create a codespace on main".

You will open a VS Code interface in your browser with files `Main.cpp`, `TodoList.cpp`, `build_and_run.sh` and `readme.md` available.

Open the two c++ files and try to understand the code. (you can access the files via the left hand margin file icon or "ctrl + shift + e").

## Exercise 2 - compile and run

You can compile and run the code from the terminal (Terminal -> open or "ctrl + '") 

The compile command is:

```
g++ *.cpp -o main
```

The run command is:

```
./main
```

## Exercise 3 - implement the remove method

There is an empty method in the `TodoList.cpp` class file called `remove()`.

Implement the code to add this functionality to the todolist.

## Exercise 4 - Extensions for C/C++ support

Have a look at the extensions section (ctrl + shift + x) to see what additional features can be installed to improve the development environment (try out a "C/C++ for Visual Studio Code")