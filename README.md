# Simple Shell

Simple Shell is a custom shell program that can execute commands from the standard input or from a file. It is written in C as part of the ALX School curriculum.

## Prerequisites

To use this program, you need to have a Linux operating system and the GNU Compiler Collection (GCC).

## Installation

To install this program, follow these steps:

1. Clone this repository:

	`git clone https://github.com/KyoZer0/simple_shell.git`

2. Change directory to the repository:

	`cd simple_shell`

3. Compile the source files: 

	`gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

4. Run the program:

	`./hsh`

## Usage

You can use this program in two modes: interactive and non-interactive.

- **Interactive mode:** In this mode, you can type commands directly to the program and see the results. To enter this mode, run the program without any arguments: `./hsh`. You will see a prompt (`$ `) where you can enter your commands. To exit this mode, type `exit` or press Ctrl-D.

- **Non-interactive mode:** In this mode, you can pass commands to the program from a file or from another program. To enter this mode, run the program with arguments: `./hsh file` or `echo "command" | ./hsh`. The program will execute the commands and exit.

The program for now can handle the following built-in commands:

- `env`: Prints the current environment variables.

- `exit`: Exits the program.


The program can also execute any other command that is available in the PATH environment variable, such as `ls`, `cat`, `pwd`, etc.

## Authors

- [@Lahcen Aharouane](https://www.github.com/KyoZer0)
- [@Dawit Zeyede](https://www.github.com/Dawit-Zeyede)
