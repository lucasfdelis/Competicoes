def primo(n):

    resultado = False
    
    if n > 1:

        for i in range(2, int(n/2)+1):
            if (n % i) == 0:
                resultado = False
                break
        else:
            resultado = True

    return resultado

a,b = input().split()
soma = int(a) + int(b)
if(primo(soma) == True):
    print("Xau")
else:
    print("Xi")