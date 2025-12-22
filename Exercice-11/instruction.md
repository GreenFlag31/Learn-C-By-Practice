## 📝 Instructions

Create a function that receives 3 parameters. These parameters should be given by address (pointers) and the function should perform an addition, storing the result via the third pointer. The function should not return anything.

## 📚 What you will learn

- How to provide addresses to a function
- How to modify a variable by passing its address

## 💡 Tips

<details>
<summary>Tip 1</summary>

Create a function that takes three parameters and receives them by address.

```c
void add(int *a, int *b, int *c) { *c = *a + *b; }
```

</details>

<details>
<summary>Tip 2</summary>

Call the function and provide the addresses of the integers.

</details>
