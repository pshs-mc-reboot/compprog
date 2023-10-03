# Fair Nut and String

From a string $s$ consisting of Latin lowercase letters, find the number of strictly increasing subsequences $p_{1}, p_{2}, ..., p_{k}$ such that:

1. For each $i$ ($1\leq{i}\leq{k}$), $s_{p_{i}}=$ `'a'`.
2. For each $i$ ($1\leq{i}<k$), there is such $j$ that $p_{i}<j<p_{i+1}$ and $s_{j}=$ `'b'`.

## Insights

1. The problem is asking for the number of strictly increasing subsequences wherein a `'b'` is sandwiched by `'a'`s, disregarding the other characters that may appear in between.
2. Since each strictly increasing subsequence is unique, we could "erase" all other characters aside from `'a'` and `'b'` without caring for the initial position of each character.
3. Let's imagine each `'b'` as a wall between each group of `'a'`s. This leaves us with `count('b')`$+1$ groups of `'a'`s.
4. Say that we pick at most one `'a'` from each group. If the number of `'a'`s that we chose is greater than $1$, then it is assured that there is at least one `'b'` sandwiched in between.
5. Therefore, we can abstract a "choice" that we make into `count('a')`$+1$, wherein we choose any of the `'a'`s or we don't pick any at all.
6. The answer then is the product of each group of choices that we make, minus one (for the case that we don't pick anything at all).
