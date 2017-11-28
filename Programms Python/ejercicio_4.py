def ejercicio_4():
    x=input("Dime un  número entero")
    suma=0
    for cont in range(0,x,1):
        suma=x/cont+x%cont
    print "La suma es",suma
ejercicio_4()
