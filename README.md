# Min heap

This example takes the numbers 10, 4, 8, 12, 6, and 2 and turns them into a min heap.

I used heapify to compare a node with its children and swap it with the smaller child when needed. It starts near the bottom of the array and works toward the root.

The program prints the array after building the heap. It only builds the heap for now; it does not have functions to add or remove values.

To build and run it, you need a C++17 compiler and Make. Open a terminal in this folder and run:

```sh
make
make run
```

You can also run `make check` to check the sample output. That needs Python 3. Use `make clean` if you want to remove the compiled program.
