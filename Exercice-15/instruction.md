# 📝 Instructions

Write a program that:

- Declares an integer variable and initializes it (e.g., `int num = 5;`).
- Declares a pointer to this integer, and a double pointer (pointer to pointer).
- Modifies the value of the integer using the double pointer.
- Prints the final value of the integer.

## 📚 What you will learn

- How to declare and use pointers and double pointers in C
- How to manipulate a variable through a pointer to pointer
- How to print the value of a variable after indirect modification

## 💡 Tips

<details>
<summary>Tip 1: Pointer declaration</summary>
Declare a pointer to int (`int *p`) and a pointer to pointer (`int **pp`).
</details>
<details>
<summary>Tip 2: Accessing and modifying</summary>
Use `**pp = value;` to modify the original variable through the double pointer.
</details>
<details>
<summary>Tip 3: Printing</summary>
Use `printf("%d", num);` to print the value of the integer.
</details>
