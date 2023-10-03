# Tiles

Find the number of possible valid tilings modulo $998244353$ (a prime number).

## Insights

1. Given a positive integer $i$ such that $1\leq{i}\leq{w}$ and $j$ such that $1\leq{j}\leq{h}$, let there be two fixed tiles at $(i-1, j)$ and $(i, j-1)$. We could see that there is exactly one valid way of placing a tile at $(i, j)$.
2. As a result, when all tiles $(i, 1)$ and $(1, j)$ are placed, the rest are determined uniquely. Therefore, we only need to count the number of ways to tile the first row and column.
3. There are four ways of placing a tile at $(1, 1)$. After that, each tile in the first row or column has exactly two ways of being placed. Therefore, there are $2^{w+h}$ possible valid tilings.
