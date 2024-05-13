# pipex
A C program for handling pipes

### Description
This project lets you explore pipes in UNIX by implementing a program that executes shell commands through pipes.

### Getting Started
Clone the repository:

### Usage
The program takes four arguments:

<pre>
<code>
file1: The first input file
cmd1: The first command
cmd2: The second command
file2: The output file
</code>
</pre>

The program executes cmd1 using the content of file1 as input, pipes the output to cmd2, and saves the final output to file2.
