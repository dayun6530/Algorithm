#2884 알람시계

h, m = map(int, input().split())
m = m-45
if(m<0):
    m = m+60
    if(h==0):
        h=23
    else:
        h = h-1
print(h,m)