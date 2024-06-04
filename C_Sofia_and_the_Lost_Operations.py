def can_transform(n, a, b, m, d):
    from collections import Counter
    
    # Find the differences and required operations
    diff = [(i, b[i]) for i in range(n) if a[i] != b[i]]
    needed_changes = Counter([b[i] for i in range(n) if a[i] != b[i]])
    available_changes = Counter(d)

    # Check if all required changes can be made
    for change in needed_changes:
        if needed_changes[change] > available_changes[change]:
            return "NO"
    
    # Ensure the last element in d is in b if there are any operations needed
    if diff and d[-1] not in [b[i] for i in range(n)]:
        return "NO"
    
    return "YES"

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    index = 0
    t = int(data[index])
    index += 1
    results = []
    
    for _ in range(t):
        n = int(data[index])
        index += 1
        a = list(map(int, data[index:index + n]))
        index += n
        b = list(map(int, data[index:index + n]))
        index += n
        m = int(data[index])
        index += 1
        d = list(map(int, data[index:index + m]))
        index += m
        
        result = can_transform(n, a, b, m, d)
        results.append(result)
    
    print("\n".join(results))

if __name__ == "__main__":
    main()
