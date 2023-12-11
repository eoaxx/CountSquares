### Problem
Provide a solution to the “How many squares?”
problem. On an infinite lattice you are given an n x n square, for an arbitrary value of
n. How many squares can you see? For instance: for n = 1 we can see one square, for n
= 2 we can see 5 squares, and so on.

### Solution
```
iteration 1 - 1 square
iteration 2 - 2*2 ways to place n-1 squares
iteration 3 - 3*3 ways to place n-2 squares
continue  until n - x <= 0
```
By rearranging we get:
```
n*n + (n-1)*(n-1) + (n-2)*(n-2) + ...
```
