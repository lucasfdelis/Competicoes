n = int(input())
lista1 = []
lista2 = []
for i in range(n):
    A,B = input().split()
    A = int(A)
    B = int(B)
    lista1.append(A)
    lista2.append(B)

verif = False
for i in range(0, len(lista1)):
    for j in range(0, len(lista2)):
        if(lista1[i] < lista1[j] and lista2[i] > lista2[j]):
            verif = True
            break
    if(verif):
        break
if(verif):
    print("YES")
else:
    print("NO")
