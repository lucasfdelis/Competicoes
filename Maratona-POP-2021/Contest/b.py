lista = [0,0,0,0,0]
lista[0] = int(input())
lista[1] = int(input())
lista[2] = int(input())
lista[3] = int(input())
lista[4] = int(input())
lista = sorted(lista)
soma = (lista[1]-lista[0]) + (lista[2]-lista[0]) + (lista[3]-lista[0]) + (lista[4]-lista[0])
print(soma)