# C - File I/O
## General
* How to create, open, close, read and write files
* What are file descriptors
* What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
* How to use the I/O system calls `open`, `close`, `read` and `write`
* What are and how to use the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`
* What are file permissions, and how to set them when creating a file with the open system call
## Tasks
0. Tread lightly, she is near
* Write a function that reads a text file and prints it to the POSIX standard output;
	* Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
1. Under the snow
* Create a function that creates a file;
	* Prototype: `int create_file(const char *filename, char *text_content);`
2. Speak gently, she can hear
* Write a function that appends text at the end of a file;
	* Prototype: `int append_text_to_file(const char *filename, char *text_content);`
3. cp
* Write a program that copies the content of a file to another file
