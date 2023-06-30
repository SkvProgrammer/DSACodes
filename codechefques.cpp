def check(N, M, K, weed_days):
    weed_count = [0] * (M + 1)
    for day in weed_days:
        if day <= M:
            weed_count[day] += 1
    for day in range(1, M + 1):
        if weed_count[day] >= K:
            return "No"
        weed_count[day] += weed_count[day - 1]
    return "Yes"

t = int(input())

for _ in range(t):
    N, M, K = map(int, input().split())
    weed_days = list(map(int, input().split()))

    print(check(N, M, K, weed_days))
