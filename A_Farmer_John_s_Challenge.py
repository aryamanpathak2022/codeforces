def solve(n, k):
    if k == n:
        # If k and n are equal, print 1 n times
        print(*[1] * n)
    elif k == 1:
        # If k is 1, print a sequence from 2 to n+1
        # print 2 first and then sequaernce of 1 to n-1 except 2
        #dont print 2 again
        # print("2", end=" ")
        # for i in range(3, n+1):
        #     print(i, end=" ")
        print(*range(1, n+1))

    else:
        # Otherwise, print -1
        print(-1)

# Input number of test cases
t = int(input())

# Iterate through each test case
for _ in range(t):
    # Input n and k
    n, k = map(int, input().split())
    
    # Solve the test case
    solve(n, k)
