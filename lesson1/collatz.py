def collatz(n):
    res = []
    while n!=1:
        res.append(n)
        if n%2==0:
            n=n//2
        else:
            n=3*n+1
    res.append(1)
    return res

def format(l):
    return ' '.join(str(a) for a in l)

print('n=', end='')
n=int(input())
print(format(collatz(n)))
