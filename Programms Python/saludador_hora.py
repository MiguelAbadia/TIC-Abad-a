def saludador_hora():
    h=input("Dime que hora es:")
    if 8<h<=12:
        print "Buenos días"
    if 12<h<=16:
        print "Que aproveche"
    if 16<h<=21:
        print "Buenas tardes"
    if 21<h<=24:
        print "Buenas noches"
    if 0<h<=8:
        print "Deberías estar en la cama"
saludador_hora()
