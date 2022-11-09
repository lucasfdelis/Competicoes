valor, tipo = input().split()
valor = int(valor)

array_init = [i for i in range(valor)]
meio = valor//2

def shufflingalong(array, meio):

    if(tipo == 'out'):
        if(valor%2 == 0):
            metade1 = array[:meio]
            metade2 = array[meio:]
            new_array = [metade1[i//2] if i%2 == 0 else metade2[i//2] for i in range(valor)]
        else:
            metade1 = array[:(meio+1)]
            metade2 = array[(meio+1):]
            new_array = [metade1[i//2] if i%2 == 0 else metade2[i//2] for i in range(valor)]
    else:
        if(valor%2 == 0):
            metade1 = array[:meio]
            metade2 = array[meio:]
            new_array = [metade2[i//2] if i%2 == 0 else metade1[i//2] for i in range(valor)]
        else:
            metade1 = array[:meio]
            metade2 = array[meio:]
            new_array = [metade2[i//2] if i%2 == 0 else metade1[i//2] for i in range(valor)]

    return new_array
count = 0
def rec(array,meio,count):
    array2 = shufflingalong(array,meio)
    if(array2 == array_init):
        return count+1
    else:
        return rec(array2,meio,count+1)

print(rec(array_init,meio,count))