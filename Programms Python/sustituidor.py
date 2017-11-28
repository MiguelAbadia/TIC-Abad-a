def sustituidor():
    x=raw_input("Dime una frase")
    for cont in range(0,len(x),1):
        if x[cont]=='a' or x[cont]=='u' or x[cont]=='i' or x[cont]=='o':
           print 'e',
        else:
            print x[cont],
sustituidor()
