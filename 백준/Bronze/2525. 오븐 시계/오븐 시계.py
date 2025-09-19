#2525 오븐 시계

h, m = map(int, input().split())
t = int(input())
m = m+t
while(m>=60):
    h = h+1
    m = m-60
if(h>23):
    h = h-24
print(h, m)