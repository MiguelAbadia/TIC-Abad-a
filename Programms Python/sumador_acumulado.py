def sumador_acumulado():
    x= input("Dime hasta que quieres sumar:")
    suma=0
    for cont in range(1,x+1,1):
        suma=suma+cont
    print "suma =",suma
sumador_acumulado()
