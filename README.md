# pipex
A C program for handling pipes

### Description
This project lets you explore pipes in UNIX by implementing a program that executes shell commands through pipes.

### Getting Started
Clone the repository:

### Usage
The program takes four arguments:

<pre>
<ul>
<li> file1: The first input file </li>
<li> cmd1: The first command </li>
<li> cmd2: The second command </li>
<li> file2: The output file </li>
</ul>
</pre>

The program executes cmd1 using the content of file1 as input, pipes the output to cmd2, and saves the final output to file2.
