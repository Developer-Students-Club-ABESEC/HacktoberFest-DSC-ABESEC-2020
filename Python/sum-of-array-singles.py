def repeats(arr):
    su = 0 #count variable
    for i in arr:
        if arr.count(i) == 1:
            su += i
    return su

print(repeats([4,5,7,5,4,8]))
