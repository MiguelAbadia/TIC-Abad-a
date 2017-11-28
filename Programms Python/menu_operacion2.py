def menu_operacion():
    seguir="SI"
    suma=0
    division=0
    multiplicacion=0
    resta=0
    num1=input("Dime un  numero:")
    num2=input("Dime otro numero:")
    def suma(num1,num2):
        resp=num1+num2
        return resp
    def resta(num1,num2):
        resp=num1-num2
        return resp
    def multiplicacion(num1,num2):
        resp=num1*num2
        return resp
    def divison(num1,num2):
        resp=num1/num2
        return resp
    while(seguir=="SI"):
        print "Que deseas hacer con los numeros:"
        print "1.Sumarlos"
        print "2.Restarlos"
        print "3.Multiplicarlos"
        print "4.Dividirlos"
        respuesta=input()
        if(respuesta==1):
            print num1,"+",num2,"=",suma(num1,num2)
        if(respuesta==2):
            resta=num1-num2
            print num1,"-",num2,"=",resta(num1,num2)
        if(respuesta==3):
            multiplicacion=num1*num2
            print "La multiplicación da",multiplicacion
        if(respuesta==4):
            resto=num1%num2
            division=(num1/num2)
            print "La division da",division,",",resto
menu_operacion()
