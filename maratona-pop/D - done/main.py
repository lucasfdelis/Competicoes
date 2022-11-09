n = int(input())
v = list()
for i in range(n):
    x = int(input())
    v.append(x)

prefixSum = v[::]
for i in range(1, len(prefixSum)):
    prefixSum[i] += prefixSum[i-1] 

sufixSum = v[::]
if(n > 1):
    for i in range(len(sufixSum)-2, -1, -1):
        sufixSum[i] += sufixSum[i+1] 

minQuantity = 100000010
for i in range(n-1):
    minQuantity = min(minQuantity, abs(prefixSum[i]-sufixSum[i+1]))

if minQuantity == 100000010:
    print(v[0])
else:
    print(minQuantity)