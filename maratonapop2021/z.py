from itertools import cycle, islice, dropwhile

t = int(input())
i = 0
while(i < t):
    n,v = input().split()
    n = int(n)
    v = int(v)
    lista = []
    for x in range(n):
        lista.append(x+1)

    dedos = input().split()
    soma = 0
    for j in range(len(dedos)):
        soma = soma+(int(dedos[j]))
    if(soma == 0):
        print(f'Caso {i+1}:',v)
    else:     
        if(soma < 0):
            lista = lista[::-1]
            soma = soma*(-1)
        cycled = cycle(lista)  
        skipped = dropwhile(lambda x: x != v+1, cycled)  
        sliced = islice(skipped, None, soma)  
        result = list(sliced)  
        print(f'Caso {i+1}:',result[-1])
    i = i+1