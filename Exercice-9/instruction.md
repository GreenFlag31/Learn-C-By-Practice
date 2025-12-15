## 📝 Instructions

Create a function that converts a decimal number into a binary number. The function should take a parameter `n`, representing the decimal number to convert.

- The binary number should be represented in 32 bits. Example: `00000000000000000000000000000101`

## 📚 What you will learn

- Converting a decimal into a binary number using Bitwise operators

## 💡 Tips

<details>
<summary>Tip 1</summary>

Iterate from 31 to 0. Since integers are stored in 32 bits, shifting them with 32 will cause an count overflow.

</details>

<details>
<summary>Tip 2</summary>

Shift the bit to the right and check if it crosses `1` with the bitwise `&` operator.

</details>
