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

	Only for the bonus program, it supports not only the single angle bracket for the STDOUT (>), but also the double angle bracket for the STDOUT (>>).
The single angle bracket will overwite the entire file, but the double angle bracket will append after the file.
This can be done by writing the arguments with the index 1 has the here_doc.
In this case, the double bracket for the STDIN (<<) will be supported instead of the single bracket for the STDIN (<).
That means, infile will be replaced and the lines that a user typed will be written on the STDIN until typing the limiter.
When the limiter is typed, the first commands will be executed by taking all of the lines of the STDIN (except the limiter).

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
