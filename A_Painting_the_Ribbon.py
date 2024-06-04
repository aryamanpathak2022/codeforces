t = int(input())

for _ in range(t):
    n, m, k = map(int, input().split())
    if n % m == 0:
        if k >= (n // m) * (m - 1):
            print("NO")
        else:
            print("YES")
    else:
        if k >= (n // m) * (m - 1) + ((n % m) -1):
            print("NO")
        else:
            print("YES")
