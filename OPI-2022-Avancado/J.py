a,b = input().split()
a = int(a)
b = int(b)
matriz = []
count = 0
for i in range(a):
    lista = input().split()
    matriz.append(lista)

for i in range(a):
    for j in range(b):
        if(i != j):
            Va = matriz[i][i]
            Vb = matriz[i][j]
            Vc = matriz[j][i]
            Vd = matriz[j][j]
            lista = [Va,Vb,Vc,Vd]
            print(lista)
            if(lista.count('*') == 3):
                count = count+1
            if(lista.count('*') == 4):
                count = count+4
print(count/2)