# Introduction

In this homework assignment, you will be implementing a circular buffer for characters. It will give you practice in using a smart pointer and a string as well as a commonly used data structure.

# Background: Circular Buffer

As an electrical engineer, it is often you are writing programs/firmware for resource-constrained platforms such as a microcontroller. The circular buffer (or ring buffer) is a data structure often used in this situation.

The circular buffer is a fixed-sized buffer that treats the memory as if it is a circular structure. Two location pointers are used for this buffer:
1. Insertion location (head) for putting values
2. Extraction location (tail) for getting values

Upon initialization of a circular buffer, the head and tail locations are the same.
When a value is inserted into the buffer, the head location is updated.
When a value is extracted from the buffer, the tail location is updated. 
It is possible that the circular buffer can become full.
When inserting into a full buffer, the head and tail are updated, causing values to be overwritten.
When implementing the circular buffer, the head/tail locations often go past the capacity and will wrap back around.
Valid data are between tail and head locations.
See the figure below.

![download](https://github.com/sskeme/test/assets/154963758/706144ef-a7b6-46c0-94f1-0a9cbec71116)

More details on circular buffers can be found at: https://www.embedded.com/ring-buffer-basics/.

# Tasks
1. Read all the comments in CharCircularBuffer.h, which explain what each method is/does.
2. Implement the non-provided functions in CharCircularBuffer.cpp (`create()`, `put()`, `get()`, `isEmpty()`, and `getSize()`). DO NOT shift values by copying them down. That is NOT a circular buffer!!!

# Pseudocode
```
function put(character to put)

    Place new character at the head location

    if full
        Move tail up one location

    Move head up one location

    Set full if head == tail
```

```
function get() - Return the oldest value

    if empty
        return char();

    Grab/store value at the tail location

    Update full to false

    Move tail up one location

    return value that was pulled out of the buffer
```

# Hints

* Incrementing the tail/head can cause their locations to wrap around. The modulus operator can be used to handle the wrap-around. Consider the following equation:
```
next_position = (current_position + 1) % total_positions
```
* getSize() calculations change based on head >= tail or not.
* isEmpty() returns True when the buffer is not full AND head == tail.
* When using a smart pointer to point to an array of characters, the following may be used.
```
make_unique<char[]>(SIZE)
```
* You can use the buffer like a normal array.

# Compile and Test

1. Type the following commands on Terminal.

```
g++ -o main *.cpp *.h
```
```
./main
```

2. Input
* The first input is an integer to specify the buffer capacity.
* The second input is a string to push into the circular buffer.
* Example:
```
20
Spring is coming
```

3. Output
* Check the created result.txt file.

# Submit

1. Type the following commands on Terminal.

```
git add .
```
```
git commit -m "your_message_or_note_for_this_submission"
```
```
git push
```

2. You can verify that your program is working properly with predetermined inputs on GitHub Actions.
