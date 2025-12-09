## 📝 Instructions

Create a program that defines a structure named `Pair` containing a character array for a key and an integer for a value.  
Declare an array of this structure to store multiple key-value pairs.  
Use the `strcpy` function to assign the key `age` with a custom integer value, and the key `score` with another custom value.  
Finally, print both key-value pairs to the console.

## 📚 What you will learn

- How to define and use structures in C
- How to store and access multiple structures in an array
- How to copy strings with `strcpy`
- How to print structure members

## 💡 Tips

<details>
<summary>Tip 1</summary>

Declare a structure:

```C
typedef struct {
  char key[50];
  int value;
} Pair;
```

</details>

<details>
<summary>Tip 2</summary>

Define the key with `strcpy` and store a custom value. Repeat the same process for `score`.

</details>

<details>
<summary>Tip 3</summary>

Print the value of the structure with your two key value pairs.

</details>
