cube = lambda x:  x**3     #lambda function
def fibonacci(n): #iterable 
    li = [0,1]
    a,b = 0,1
    if n == 0 :
        return []
    elif n == 1:
        return [0]
    else:
        while len(li) < n:

            s = a + b
            li.append(s)
            a = b
            b = s
        return li
    

    # return a list of fibonacci numbers

if __name__ == '__main__':
    n = int(input())
    print(list(map(cube, fibonacci(n))))
