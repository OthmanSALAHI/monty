# 0x19. C - Stacks, Queues - LIFO, FIFO

# Usage

- Clone the repository

```sh
$ git clone https://github.com/othmansalahi/monty.git
```

- The code will be compiled this way:

```sh
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

- The monty program

```sh
$ ./monty <file.m>
```
## Testing
To test the functionality of the "monty" program, you can create a Monty bytecode file with a series of instructions and run the program with that file. Here's an example of a test file:
```
$ cat test.m
push 1
push 2
push 3
pall
```
Running the "monty" program with the test file:
```
$ ./monty test.m
```
The above test file pushes three elements (1, 2, 3) to the stack and then prints all the values on the stack.

Feel free to create your own test files and experiment with different stack and queue operations.

## License
This program is open-source software licensed under the MIT license.

## Contact
For any questions or inquiries, please contact [ootmansalhi.24@gmail.com].

### Acknowledgements
We would like to thank the contributors and maintainers of this project for their dedication and support.