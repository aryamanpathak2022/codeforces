def bracket_coloring(t, cases):
    results = []
    
    for case in cases:
        n, s = case

        
        stack = []
        color = [0] * n
        color2=[0]*n

        color_counter = 1
        color_counter2 = 1
        was_changed=0;
        
        # print(f"colour counter at case {n} is {color_counter}")
        # Step 1: Attempt to create beautiful sequences
        for i in range(n):
            if s[i] == '(':
                stack.append(i)
            else:
                if stack:
                    opening_index = stack.pop()
                    color[opening_index] = color_counter
                    color[i] = color_counter
                    # print(color_counter)
                    was_changed=0
                   
                else:
                    color[i] = -1
                   
                    was_changed=1
        # print(f"colour  case {n} is {color}")

        # Step 2: Check if all brackets were matched
        if stack:
            for i in stack:
                color[i] = -1
        # print(color)
        # if(color_counter in color):
        #     color_counter=color_counter+1
        
        # print(f"colour counter at case {n} is {color_counter}")
        
        # Step 3: Try to create a beautiful sequence with remaining brackets
        stack = []
        if(color_counter  in color):
            color_counter=2
        
        for i in range(n):
            if color[i] == -1:
                if s[i] == ')':
                    stack.append(i)
                else:
                    if stack:
                        opening_index = stack.pop()
                        color[opening_index] = color_counter 
                        color[i] = color_counter 
                    else:
                        color[i] = -1
                        # if(color_counter not in color):
                        #     continue
                        # color_counter = color_counter + 1
        
        for i in range(n):
            if s[i] == ')':
                stack.append(i)
            else:
                if stack:
                    opening_index = stack.pop()
                    color2[opening_index] = color_counter2
                    color2[i] = color_counter2
                    # print(color_counter)
                    was_changed=0
                   
                else:
                    color2[i] = -1
                   
                    was_changed=1
        # print(f"colour  case {n} is {color}")

        # Step 2: Check if all brackets were matched
        if stack:
            for i in stack:
                color2[i] = -1
        # print(color)
        # if(color_counter in color):
        #     color_counter=color_counter+1
        
        # print(f"colour counter at case {n} is {color_counter}")
        
        # Step 3: Try to create a beautiful sequence with remaining brackets
        stack = []
        if(color_counter2  in color2):
            color_counter2=2
        
        for i in range(n):
            if color2[i] == -1:
                if s[i] == '()':
                    stack.append(i)
                else:
                    if stack:
                        opening_index = stack.pop()
                        color2[opening_index] = color_counter2 
                        color2[i] = color_counter2
                    else:
                        color2[i] = -1
                        # if(color_counter not in color):
                        #     continue
                        # color_counter = color_counter + 1
        #
        # Step 4: Verify if a valid coloring was possible
        if -1 in color:
            results.append("-1")
        else:
            
            results.append(f"{min(max(color),max(color2))}")
            if(max(color)<max(color2) and -1 not in color):
                results.append(" ".join(map(str, color)))
            elif (max(color)>max(color2) and -1 not in color2):
                results.append(" ".join(map(str, color2)))
            elif(max(color)<max(color2) and -1 in color):
                results.append(" ".join(map(str, color2)))
            elif(max(color)>max(color2) and -1 in color2):
                results.append(" ".join(map(str, color)))
    
    return results

# Input reading
import sys
input = sys.stdin.read
data = input().split()

t = int(data[0])
cases = []
index = 1

for _ in range(t):
    n = int(data[index])
    s = data[index + 1]
    cases.append((n, s))
    index += 2

# Function call
results = bracket_coloring(t, cases)

# Output results
for result in results:
    print(result)
