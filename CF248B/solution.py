product = 210

def solve(n):
    if n < 3:
        return '-1'
    
    if n == 3:
        return '210'
    
    r = pow(10, n - 1, product)
    last_digits = str(product - r)

    return '1' + '0' * (n - 1 - len(last_digits)) + str(last_digits)

if __name__ == '__main__':
    n = int(input())

    print(solve(n))
