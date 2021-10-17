n = int(input())
i = 0
soma = 0
soma2 = 0
while(i < n):
    v = int(input())
    soma = soma+v
    soma2 = soma2+(v-1)
    i = i+1
print(soma2,soma)