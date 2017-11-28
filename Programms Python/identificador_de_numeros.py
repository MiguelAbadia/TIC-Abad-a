def identificador_de_numeros():
    x=input("Dime dos numeros")
    y=input("Dame otro numero")
    restox= x%2
    restoy= y%2
    if restox==0 and restoy==0:
        print "Los dos son pares"
    if restox==0 or restoy==0:
        print "Uno de ellos es impar"
    else:
        print "Los dos son impares"
identificador_de_numeros()
