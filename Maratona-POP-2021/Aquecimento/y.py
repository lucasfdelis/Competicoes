n = int(input())
i = 0
while(i < n):
    tamanho = int(input())
    frase = input()
    frase = list(frase.lower())
    frase2 = []
    for j in range(tamanho):
        if(frase[j] == 'y' or frase[j] == 'e' or frase[j] == 's'):
            frase2.append(frase[j])
    print((''.join(frase2)).count('yes'))
    i = i+1

        