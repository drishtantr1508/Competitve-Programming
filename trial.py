def solve():
    n = int(input())
    lists = [int(i) for i in input().split()]

    max_val = max(lists)
    print(max_val + (sum(lists)-max_val)/(n-1))

if __name__ == '__main__':
    t = int(input())
    while t>0:
        solve()
        t = t-1