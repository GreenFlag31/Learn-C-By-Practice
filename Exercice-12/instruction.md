# 🎲 Instructions

Write a program that generates an array of 10 random integers using dynamic memory allocation. The program should:

- Use a function to allocate memory for an array of 10 integers and fill it with random values.
- Print each value of the array in the main function.
- Free the allocated memory at the end.

## 📚 What you will learn

- How to use dynamic memory allocation with `malloc` and `free`
- How to generate random numbers in C
- How to return a pointer from a function
- How to access array elements using pointers

## 💡 Tips

<details>

<summary>Tip 1: Seeding the random generator</summary>
Call <code>srand((unsigned)time(NULL));</code> once at the start of <code>main</code> to get different random numbers each run.

</details>

<details>

<summary>Tip 2: Memory allocation</summary>
Use <code>malloc</code> to allocate memory for 10 integers. Always check if the allocation succeeded.
</details>

<details>

<summary>Tip 3: Freeing memory</summary>
Don't forget to call <code>free</code> at the end to avoid memory leaks.

</details>
