mod = int(1e9 + 7)
a = 'a'
b = 'b'

def solve(s):
    result = 1
    count = 1

    for c in s:
        if c == a:
            count += 1
        elif c == b:
            result = (result * count) % mod
            count = 1
    
    result = (result * count) % mod

    return (result - 1) % mod

if __name__ == '__main__':
    s = input()

    print(solve(s))
