<h1 align="center">
	📖 Pipex
</h1>

<p align="center">
	<b><i>Implementing pipe concept</i></b><br>
</p>
<p align="center">
<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/Cloneg7/pipex?color=lightblue" />
<img alt="Code language count" src="https://img.shields.io/github/languages/count/Cloneg7/pipex?color=yellow" />
<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/Cloneg7/pipex?color=blue" />
</p>

## 📜 Table of Contents

- [💡 Mandatory Part](#m)
- [💡 Bonus Part](#b)

# 💡 Mandatory Part <a name = "m"></a>

> _This program :._

	takes the infile, outfile to redirect the STDIN (<), STDOUT (>) and 2 commands to pipe.
    To execute the mandatory program, type the command listed below.
    The arguments will be processed as same as < infile cmd1 | cmd2 > outfile on the shell.

### Requirements

The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. To use the function in your code, simply include its header:**

```C
#include "pipex_mandatory.h"
```

#### 📋 Testing
> _Simply run this command :_
```shell
./pipex <infile> <cmd1> <cmd2> <outfile>
```
-------
# 💡 Bonus Part <a name = "b"></a>

> _As a <code>bonus</code> to the Mandatory requirement, the function should manage multiple commands or here_doc._
	<ul>
  	<li>It supports both single (>) and double (>>) angle brackets for STDOUT.
    	<ul>
      	<li>The single angle bracket (>) overwrites the entire file.</li>
      	<li>The double angle bracket (>>) appends to the file.</li>
    	</ul>
  	</li>
  	<li>Arguments with an index of 1 will use the here_doc feature.</li>
  	<li>For STDIN, it supports the double angle bracket (<<) instead of the single angle bracket (<).
    	<ul>
      	<li>The infile will be replaced.</li>
      	<li>Lines typed by the user will be written to STDIN until a specified limiter is typed.</li>
      	<li>Once the limiter is typed, the first command will be executed using all the lines from STDIN, except the 	limiter.</li>
    	</ul>
  	</li>
	</ul>

**1. To use the function in your code, simply include its header:**

```C
#include "pipex_bonus.h"
```

#### 📋 Testing
> _Simply run this command :_
```shell
./pipex_bonus <infile> <cmd1> <cmd2> ... <outfile>
```
> _Or :_
```shell
./pipex_bonus "here_doc" <limiter> <cmd1> <cmd2> ... <outfile>
```
