t = int(input()) # Number of test cases

for _ in range(t):
    n = int(input()) # Length of the array
    arr = list(map(int, input().split())) # The array
    
    # Check if the array has only one unique element
    if len(set(arr)) == 1:
        print("-1") # If all elements are the same, the array remains beautiful
    else:
        count = 0 # Counter for the minimum number of elements to remove
        
        for i in range(1, n - 1): # Iterate through the array starting from the second element
            while (arr[i - 1] == arr[i + 1]): # Check if the element can be removed to make the array not beautiful
                count += 1 # Increment count
                i += 1 # Skip the next element as it's removed
                
        if count > 0:
            print(count)
        else:
            print("-1") # If no such element exists, the array remains beautiful
