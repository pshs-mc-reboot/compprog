# Fair Nut and String

The Fair Nut found a string $s$. The string consists of lowercase Latin letters. The Nut is a curious guy, so he wants to find the number of strictly increasing sequences $p_{1}, p_{2}, ..., p_{k}$ such that:

1. For each $i$ ($1\leq{i}\leq{k}$), $s_{p_{i}}=$ `'a'`.
2. For each $i$ ($1\leq{i}<k$), there is such $j$ that $p_{i}<j<p_{i+1}$ and $s_{j}=$ `'b'`.

The Nut is upset because he doesn't know how to find the number. Help him.

This number should be calculated modulo $10^{9}+7$.

## Input

The first line contains the string $s$ ($1\leq{|s|}\leq{10^{5}})$ consisting of lowercase letters.

## Output

In a single line print the answer to the problem—the number of such sequences $p_{1}, p_{2}, ..., p_{k}$ modulo $10^{9}+7$.
