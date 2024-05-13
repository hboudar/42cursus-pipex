# pipex
A C program for handling pipes

### Description
This project lets you explore pipes in UNIX by implementing a program that executes shell commands through pipes.


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Clone Repository</title>
</head>
<body>

<div>
    <h1>Getting Started</h1>
    <p>Clone the repository:</p>
    <pre><code id="clone-command"><li>Bash</li>
git clone https://github.com/Cloneg7/pipex.git</code></pre>
    <!-- Button to trigger copy -->
</div>

</body>
</html>

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


-----------------------------

Pipex
Summary
This project allows you to delve into the intricacies of a UNIX mechanism you are already familiar with by implementing it in your program.

Version: 3

Contents
I. Foreword
II. Common Instructions
III. Mandatory Part
IV. Bonus Part
V. Submission and Peer-evaluation

Foreword
In this section, Cristina's amusing remark adds a touch of humor.

Common Instructions
This section outlines the common instructions that must be followed for the project, including the use of C language, adherence to the Norm, error handling, memory management, Makefile requirements, and the encouragement to create test programs.

Mandatory Part
The pipex program, as described, handles pipes. It takes four arguments: file1, cmd1, cmd2, and file2, behaving akin to a shell command < file1 cmd1 | cmd2 > file2.

Examples
Here are examples demonstrating the usage of pipex.

Requirements
This section specifies the rules the project must comply with, including the submission of a Makefile, error handling, memory management, and adherence to a specific command behavior.

Bonus Part
The bonus part includes handling multiple pipes and supporting << and >> when the first parameter is "here_doc".
