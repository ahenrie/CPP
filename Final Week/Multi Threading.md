# Learning Objectives
1. Describe concurrency and parallelism and their differences
2. Demonstrate their usage in a C++ program
3. Descrive deadlock and how it happens
4. Demonstrate at least 2 tecniques for avoiding deadlock.

## Concurrency
Concurrency: When multiple independent tasks are logically active at the same time. This possible on a single processor, in which case it is called cooperative multi-tasking

## Parallelism
Parallelism: Multiple, independent tasks actually running simultanesouly (special case of concurency). This requres multiple processors/cores.

### Threads
Threads: A peice of code (usually a function) that can run concurrently with other threads.

## How does it work in C++?
- Create a thread object
- pass it the name of the function
- ...

### Joion
Eventually we will have to wait for a thread to finish
The calling thread (the one that created the thread object) waits for its child thread to finish
Call .join() to wiat for the child thread

### Mutual Exclusion (Mutex)
Has lock and unlock functions
Only one thread at a time can hold the lock
The mutex must exist outside the scope of the threads' functions
Usually static
