# Remainder Minimization 2019

Find the minimum positive value of $(i\times{j})\mod{2019}$ where $0\leq{L}\leq{i}<j\leq{R}\leq{2\times{10^{9}}}$.

## Insights

1. Given arbitrary positive integers $a$, $b$, and $m$, $(a\times{b})\mod{m}$ is the same as $((a\mod{m})\times{(b\mod{m})})\mod{m}$. Therefore, with $m=2019$, we can always find the answer within $2019^{2}$ steps.
