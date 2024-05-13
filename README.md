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
    <pre><code id="clone-command"># Bash
git clone https://github.com/Cloneg7/pipex.git</code></pre>
    <!-- Button to trigger copy -->
    <button class="copy-btn" onclick="copyToClipboard('#clone-command')">Copy</button>
</div>

<script>
    function copyToClipboard(elementId) {
        var copyText = document.querySelector(elementId);
        var range = document.createRange();
        range.selectNode(copyText);
        window.getSelection().removeAllRanges();
        window.getSelection().addRange(range);
        document.execCommand("copy");
        window.getSelection().removeAllRanges();
    }
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
