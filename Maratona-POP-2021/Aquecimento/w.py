frase = input()
frase = frase.lower()
for i in range(len(frase)):
    lista = list(frase)
    lista[i] = lista[i].upper()
    print("".join(lista))