def ejercicio_1():
    completo=0
    x=raw_input("Dime un nombre")
    y=raw_input("Dime un apellido")
    z=raw_input("Dime el segundo apellido")
    for cont in [x,y,z]:
        completo=x+" "+y+" "+z
    print "Tu nombre es",completo
ejercicio_1()
