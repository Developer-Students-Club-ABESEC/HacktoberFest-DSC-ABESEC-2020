n = int(input())
s = set(map(int, input().split()))
N = int(input())
for i in range(N):
    d = input().split(" ")
    if d[0] == "pop":
        s.pop()
    if d[0] == "remove":
        s.remove(int(d[-1]))
    if d[0] == "discard":
        s.discard(int(d[-1]))
print(sum(s))
