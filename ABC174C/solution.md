# Repsept

Find the first occurrence of a multiple of $K$ in the sequence $7$, $77$, $777$, $...$.

## Insights

1. Note that the $i$-th term of the sequence can be written as $7\times{(1+10+10^{2}+}$$...$$+10^{i-1})$. When expressed as a sum of a geometric series, this is $\frac{7(10^{i}-1)}{9}$.
2. Writing it down as an equality, given $K$...
   $$
   \begin{aligned}
      7(10^{i}-1)=9K
   \end{aligned}
   $$
3. Given the above, we have two cases:
   1. If $K$ is a multiple of $7$, we can find the first multiple in the sequence by considering whether $10^{i}-1$ is divisible by $\frac{9K}{7}$.
   2. Otherwise, we can find the first multiple in the sequence by considering whether $10^{i}-1$ is divisible by $9K$.
