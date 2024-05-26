# Get Next Line Project

## Overview

The Get Next Line project is part of the 42 network curriculum, aimed at teaching efficient file reading techniques in C. The goal is to implement a function that reads a line from a file descriptor, handling edge cases and ensuring optimal performance.

## Concepts Learned

### File I/O

* **File Descriptors**: Understanding and managing file descriptors for reading files.
* **Buffered Reading**: Implementing buffered reading to handle large files efficiently.

### Memory Management

* **Dynamic Allocation**: Efficiently using dynamic memory allocation to handle variable-length lines.
* **Resource Management**: Ensuring proper allocation and deallocation of memory to prevent leaks.

### String Manipulation

* **String Functions**: Developing and using custom string manipulation functions to handle reading and storing lines using linkedlist.

## Project Description

**Get Next Line**: Implement a function that reads a single line from a file descriptor. The function must:
- Read efficiently even if the file size is large.
- Handle multiple file descriptors simultaneously.
- Return each line terminated by a newline character, except for the last line if it doesn't end with a newline.

## Implementation

* **Buffering**: Using a buffer to read chunks of data from the file.
* **Linked Lists**: Optionally using linked lists to manage dynamically growing lines.
    
## Compilation and Execution

```bash
git clone https://github.com/khalidlakbuichy/get_next_line.git
```
```bash
cd get_next_line
```
```bash
make
```
```bash
./get_next_line file.txt
```
## Lessons Learned
* **Efficient File Reading**: Techniques for reading files efficiently in C.
* **Memory Management**: Handling dynamic memory allocation and preventing leaks.
* **String Operations**: Implementing custom string handling functions.

## Conclusion

The Get Next Line project provided deep insights into file I/O, memory management, and efficient programming practices in C, essential for developing high-performance applications.
