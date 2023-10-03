def solve(k):
    if not k % 2 or not k % 5:
        return -1
    
    answer = 1
    current = 7 % k

    while current:
        current = (current * 10 + 7) % k
        answer += 1
    
    return answer

if __name__ == '__main__':
    k = int(input())

    print(solve(k))
