nums = input()
rst = 0
for num in nums:
    if "A" <= num and num <= "C":
        rst += 3
    elif "D" <= num and num <= "F":
        rst += 4
    elif "G" <= num and num <= "I":
        rst += 5
    elif "J" <= num and num <= "L":
        rst += 6
    elif "M" <= num and num <= "O":
        rst += 7
    elif "P" <= num and num <= "S":
        rst += 8
    elif "T" <= num and num <= "V":
        rst += 9
    else:
        rst += 10
print(rst)
