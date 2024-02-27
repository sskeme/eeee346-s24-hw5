#include "CharCircularBuffer.h"

/**
 * Total character count allowed in the buffer
 */
int capacity;

/**
 * Index of the front (head) of the buffer
 * Putting new characters goes here
 */
int head;

/**
 * Index of the end (tail) of the buffer
 * Getting characters comes from here
 */
int tail;

/**
 * Keeps track of the full state of the buffer
 */
bool full;

/**
 * A smart pointer to dynamically allocate memory to the buffer
 */
unique_ptr<char[]> buffer;


void create(int c) {
  // TODO: write your code
}

void put(char ch) {
  // TODO: write your code
}

char get() {
  if (isEmpty()) {
    return char(); // returns a null character
  }

  // TODO: write your code
}

bool isFull() {
  return full;
}

bool isEmpty() {
  // TODO: write your code
}

int getCapacity() {
  return capacity;
}

int getSize() {
  // TODO: write your code
}

void reset() {
  head = 0;
  tail = 0;
  full = false;
}

void printStatus() {
  myFile << "------------------------------------\n";
  myFile << "Buffer Capacity: " << getCapacity() << endl;
  myFile << "Buffer Size: " << getSize() << endl;
  myFile << "Buffer isEmpty: " << isEmpty() << endl;
  myFile << "Buffer isFull: " << isFull() << endl;
  myFile << "------------------------------------\n";
}
