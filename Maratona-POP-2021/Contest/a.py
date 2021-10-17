#errado

n = int(input())
j = 0
while(j < n):
    valor = int(input())
    lista = input().split()
    menor = 0
    maior = 0
    soma = 0
    for i in range(valor):
        soma = soma+int(lista[i])
        if(soma >= 0):
            if(soma > maior):
                maior = soma
        else:
            if(soma < menor):
                menor = soma
    print(maior,menor)
    if(menor == 0 and maior != 0):
        print(valor+1,10-maior)
    if(menor != 0 and maior == 0):
        print(valor+1,10)
    if(menor != 0 and maior != 0):
        print(valor+1,10+maior-menor)
    j = j+1