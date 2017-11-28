def nosemeocurrenada():
    x=input("Dime un nuemero:")
    n_par=0
    n_impar=0
    while x>0:
        cifra=x%2
        if cifra==0:
            n_par=n_par+1
        else:
            n_impar=n_impar+1
        x=x/10
    print "El numero tiene",n_par,"numeros pares y",n_impar,"impares"
nosemeocurrenada()
        
