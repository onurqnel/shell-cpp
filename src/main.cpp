#include <iostream>
#include <string>

using namespace std;

int main()
{
  // Flush after every std::cout / std:cerr
  cout << unitbuf;
  cerr << unitbuf;

  while (true)
  {

    cout << "$ ";

    string command;
    getline(cin, command);

    if (command.substr(0, 5) == "type" && command.substr(5, 10) == "echo "|| command.substr(5, 10) == "type " || command.substr(5, 10) == "exit ")
    {
      cout << command.substr(5) << " is a shell builtin"<< endl;
    }
    else
    {
      cout << command << ": command not found" << endl;
    }
  }
}
