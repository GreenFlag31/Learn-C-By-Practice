# 🧩 Instructions

Write a program that declares a 2D array of integers, then uses a pointer to access and print all its elements.

- Define a 2D array (e.g., 2 rows × 4 columns) and initialize it with values. Use preprocessor directives (ie. `#define`) to set the constants.
- Declare a pointer to an array of 4 integers and assign it to the 2D array.
- Use the pointer to print all elements of the array, row by row.

## 📚 What you will learn

- How to declare and initialize a 2D array in C
- How to use a pointer to access elements of a 2D array
- How to use nested loops to traverse a matrix

## 💡 Tips

<details>
<summary>Tip 1: Pointer declaration</summary>
Declare your pointer as <code>int (*ptr)[4]</code> to point to a row of 4 integers.
</details>
<details>
<summary>Tip 2: Accessing elements</summary>
You can access the element at row <code>i</code> and column <code>j</code> with <code>*(ptr[i] + j)</code>.
</details>
