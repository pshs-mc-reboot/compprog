mod = 998244353

def solve(w, h):
    return pow(2, w + h, mod)

if __name__ == '__main__':
    w, h = map(int, input().split())

    print(solve(w, h))
