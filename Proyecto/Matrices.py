import dis


def Matrices():
    print("____Introduzca el tamaño de cada matriz:____")
    n = 3

    # Crear matriz A
    A = []
    for i in range(n):
        A.append([0] * n)
    print("__Datos para la matriz A:__")
    for i in range(n):
        for j in range(n):
            A[i][j] = int(input("   Numero para Matriz A en posicion (%d,%d): " % (i, j)))

    # Crear matriz B
    B = []
    for i in range(n):
        B.append([0] * n)
    print("__Datos para la matriz B:__")
    for i in range(n):
        for j in range(n):
            B[i][j] = int(input("   Numero para Matriz B en posicion (%d,%d): " % (i, j)))

    # Imprimir ambas matrices
    print("Matriz A")
    for i in range(n):
        print(A[i])
    print("Matriz B")
    for i in range(n):
        print(B[i])
    print("")
    print("")
    print("____FUNCIONES____")
    print("")
    print("La suma de las matrices es: ")
    RSuma = []
    for i in range(n):
        RSuma.append([0] * n)
    for i in range(n):
        for j in range(n):
            RSuma[i][j] = A[i][j] + B[i][j]
    for i in range(n):
        print(RSuma[i])
    print("____________________________")
    print("La resta de las matrices es: ")
    RResta = []
    for i in range(n):
        RResta.append([0] * n)
    for i in range(n):
        for j in range(n):
            RResta[i][j] = A[i][j] - B[i][j]
    for i in range(n):
        print(RResta[i])
    print("____________________________")
    print("La multiplicacion de las matrices es: ")
    RMultiplicacion = []
    for i in range(n):
        RMultiplicacion.append([0] * n)
    for i in range(n):
        for j in range(n):
            RMultiplicacion[i][j] = A[i][j] * B[i][j]
    for i in range(n):
        print(RMultiplicacion[i])
    print("____________________________")
    print("La division de las matrices es: ")
    RDivision = []
    for i in range(n):
        RDivision.append([0] * n)
    for i in range(n):
        for j in range(n):
            RDivision[i][j] = A[i][j] / B[i][j]
    for i in range(n):
        print(RDivision[i])
    print("____________________________")
    print("")
    #Metodos Get y Set
    resp = int(input("Deseas cambiar o conseguir un valor de una matriz? 1:SI 2:NO"))
    if resp == 1:
        nuevaResp = int(input("Quieres setear o getear algo? \n 1:SET 2:GET"))
        #Sets
        if nuevaResp == 1:
            matriz = input("Que matriz deseas setear? A o B?")
            if matriz == "A":
                valor = int(input("Introduce el valor a setear:"))
                fila = int(input("Introduce la fila del nuevo valor: "))
                columna = int(input("Introduce la columna del nuevo valor: "))
                A[fila][columna] = valor
                print("Se ha seteado el nuevo valor")
            elif matriz == "B":
                valor = int(input("Introduce el valor a setear:"))
                fila = int(input("Introduce la fila del nuevo valor: "))
                columna = int(input("Introduce la columna del nuevo valor: "))
                B[fila][columna] = valor
                print("Se ha seteado el nuevo valor")
        elif nuevaResp == 2:
            #Get
            matriz = input("Que matriz deseas getear? A o B?")
            if matriz == "A":
                fila = int(input("Introduce la fila del valor buscado: "))
                columna = int(input("Introduce la columna del valor buscado: "))
                print("El valor buscado es: ")
                print(A[fila][columna])
            elif matriz == "B":
                fila = int(input("Introduce la fila del valor buscado: "))
                columna = int(input("Introduce la columna del valor buscado: "))
                print("El valor buscado es: ")
                print(B[fila][columna])

    else:
        print("Adios!")


dis.dis(Matrices)
