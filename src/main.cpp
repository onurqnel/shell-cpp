#include <iostream>
#include <string>

using namespace std;

int main() {
  // Flush after every std::cout / std:cerr
  cout << unitbuf;
  cerr << unitbuf;
  
  cout << "$ ";

  string command;
  getline(cin,command);
  // TODO: Uncomment the code below to pass the first stage
 cout << command << ": command not found" << endl;
}
