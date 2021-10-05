def Trb(n):    
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return Trb(n-1) + Trb(n-2)+Trb(n-3)

print([Trb(n) for n in range(1, 10)])