// Thread vs. Process: What's the difference between a thread and a process?

// Processes and threads are related to each other but are fundamentally different. 
// A process can be thought of as an instance of a program in execution. A process is an independent entity to which system resources (e.g., CPU time and memory) are allocated. Each process is executed in a separate  address space, and one process cannot access the variables and data structures of another process. If a process wishes to access another process' resources, inter-process communications have to be used. These include pipes, files, sockets, and other forms. 

// A thread exists within a process and shares the process' resources (including its heap space). Multiple threads within the same process will share the same heap space. This is very different from processes, which cannot directly access the memory of another process. Each thread still has its own registers and its own stack, but other threads can read and write the heap memory. A thread is a particular execution path of a process. When one thread modifies a process resource, the change is immediately visible to sibling threads.
