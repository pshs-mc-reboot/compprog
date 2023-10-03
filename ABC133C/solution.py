mod = 2019

def solve(l, r):
    result = mod

    for i in range(l, r):
        if not result:
            break

        for j in range(i + 1, r + 1):
            if not result:
                break

            result = min(result, (i * j) % mod)

    return result

if __name__ == '__main__':
    l, r = map(int, input().split())

    print(solve(l, r))
