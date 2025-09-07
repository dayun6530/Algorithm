#10950 A+B -3

n=int(input())
arr = []
for i in range(0,n):
    a, b = map(int, input().split())
    arr.append(a+b)

for i in range(0,n):
    print(arr[i])