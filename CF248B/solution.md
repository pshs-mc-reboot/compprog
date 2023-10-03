# Chilly Willy

Find the minimum positive $n$-digit number which is divisible (without remainder) by $2$, $3$, $5$, and $7$.

## Insights

1. All the numbers are prime. Therefore, a number $N$ divisible (without remainder) by these four numbers is also divisible (without remainder) to the product of these four numbers.
   1. If the numbers weren't prime, we would need to get the least common multiple (LCM) of these numbers.
2. The product of said numbers is $210$. Therefore, for $n<3$, the program must output `-1`. Additionally, the output for $n=3$ must be `210`.
3. For $n>3$, we may follow the following algorithm:
   1. Let $R$ be the remainder of $10^{n-1}$ at $210$.
   2. Given $R$, it must follow that $10^{n-1}+210-R$ is divisible (without remainder) to $210$.
   3. We could also see that $10^{n-1}+210-R$ is the smallest multiple of $210$ that is at exactly $n$ digits of length.
