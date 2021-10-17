x,y = input().split()
x = int(x)
y = int(y)
m = []
lista = []
for i in range(x):
    linha = input()
    lista[:0] = linha
    m.append(lista)
    lista = []

rez = [[m[j][i] for j in range(len(m))] for i in range(len(m[0]))]
for row in rez:
    print("".join(row))