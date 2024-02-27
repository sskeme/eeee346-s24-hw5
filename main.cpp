#include <string>
#include <fstream> // for filewrite
#include "CharCircularBuffer.h"

ofstream myFile; // for filewrite

int main() {
  myFile.open("result.txt");
  
  int capacity;
  string msg;

  // receive the buffer capacity
  cin >> capacity;
  
  // create a circular buffer
  create(capacity);

  // print the buffer status
  printStatus();

  // receive a message for the buffer
  getline(cin >> ws, msg);

  // put each character of the message into the buffer
  myFile << "Putting values in buffer" << endl;
  for (int i=0; i<msg.size(); i++) {
    put(msg.at(i));
  }
  printStatus();

  // print out what is in the buffer
  myFile << "Buffer contents: " << endl;
  while (!isEmpty()) {
    myFile << get();
  }
  myFile << endl;

  // reset the buffer and print the buffer status
  myFile << "Resetting buffer" << endl;
  reset();
  printStatus();

  myFile.close();

  return 0;
}
