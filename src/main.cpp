#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
  // Flush after every std::cout / std:cerr
  cout << unitbuf;
  cerr << unitbuf;

  set<string> builtins = {"echo", "exit", "type"};

  while (true)
  {
    cout << "$ ";
    string command;
    getline(cin, command);

    if (command == "exit")
      break;

    if (command.substr(0, 5) == "type ")
    {
      string arg = command.substr(5);
      if (builtins.count(arg))
        cout << arg << " is a shell builtin" << endl;
      else
        cout << arg << ": not found" << endl;
    }
  }
}
