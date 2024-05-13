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
    <!-- Include Clipboard.js -->
    <script src="git clone https://github.com/Cloneg7/pipex.git"></script>
    <style>
        }
    </style>
</head>
<body>

<div>
    <h1>Getting Started</h1>
    <p>Clone the repository:</p>
    <pre><code id="clone-command"># Bash
git clone https://github.com/Cloneg7/pipex.git</code></pre>
    <!-- Button to trigger copy -->
    <button class="copy-btn" data-clipboard-target="#clone-command">Copy</button>
</div>

<script>
    // Initialize Clipboard.js
    new ClipboardJS('.copy-btn');
</script>

</body>
</html>

-----

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
