#ifndef CHAR_CIRCULAR_BUFFER_H
#define CHAR_CIRCULAR_BUFFER_H

#include <iostream>
#include <memory>
#include <fstream> // for filewrite

using namespace std;

/**
 * Create a buffer for c characters and reset it by calling reset()
 * @param c - capacity for the buffer
 */
void create(int c);

/**
 * Put a single character into the circular buffer
 * The head is moved by one.
 * If the buffer is full, the last character (tail) is overwritten.
 * Update full status after placement into the buffer.
 * @param ch - character to place in the buffer
 */
void put(char ch);

/**
 * Grab the last character in the buffer (tail)
 * If the buffer is not empty, tail is moved by one.
 * @return - the last character in the buffer (tail)
 */
char get();

/**
 * Reset the buffer
 */
void reset();

/**
 * @return if the buffer is full
 */
bool isFull();

/**
 * @return if the buffer is empty
 */
bool isEmpty();

/**
 * @return total capacity allowed for the buffer
 */
int getCapacity();

/**
 * @return total characters in the buffer
 */
int getSize();

/**
 * A helper function to print the status of the buffer
 */
void printStatus();

extern ofstream myFile;

#endif
