# 🔗 Instructions

Write a program that implements a simple linked list (stack) in C. Your program should:

- Define a structure for a node containing an integer value and a pointer to the next node.
- Create a function to add (push) elements to the stack.
- Create a function to remove (pop) elements to the stack.
- In `main`, add several values to the stack.
- Print the stack values in **insertion order**

## 📚 What you will learn

- How to define and use a linked list in C
- How to dynamically allocate and free memory for nodes
- How to traverse and print a linked list

## 💡 Tips

<details>

<summary>Tip 1: Node structure</summary>
Use a struct with an int value and a pointer to the next node.

</details>
<details>

<summary>Tip 2: Adding elements</summary>
To add (push) an element, allocate a new node, set its value, and point its next to the current head.

</details>
<details>

<summary>Tip 3: Printing the list in insertion order</summary>
Use recursion to print values from the stack, until you reach NULL.

</details>
