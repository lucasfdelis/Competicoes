maior_a = 0
maior_b = 0
menor_a = 9999
menor_b = 9999
i = 0
lista = []
while(i < 3):
    a,b = input().split()
    lista.append(''.join([a,b]))
    if(int(a)>maior_a):
        maior_a = int(a)
    if(int(b)>maior_b):
        maior_b = int(b)
    if(int(a)<menor_a):
        menor_a = int(a)
    if(int(b)<menor_b):
        menor_b = int(b)
    i = i+1

if(''.join([str(maior_a),str(maior_b)]) not in lista):
    print(maior_a,maior_b)
if(''.join([str(maior_a),str(menor_b)]) not in lista):
    print(maior_a,menor_b)
if(''.join([str(menor_a),str(maior_b)]) not in lista):
    print(menor_a,maior_b)
if(''.join([str(menor_a),str(menor_b)]) not in lista):
    print(menor_a,menor_b)