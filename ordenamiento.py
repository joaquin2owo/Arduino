def bubble_sort(arr):
    n = len(arr)  # Se obtiene la longitud del arreglo.
    
    for i in range(n):  # Se itera desde 0 hasta n-1.
        swapped = False  # Se inicializa una variable para verificar si hubo intercambios en esta pasada.
        
        for j in range(0, n-i-1):  # Se itera desde 0 hasta n-i-1 (el último elemento ya está ordenado después de cada pasada).
            if arr[j] > arr[j+1]:  # Si el elemento actual es mayor que el siguiente, se realiza un intercambio.
                arr[j], arr[j+1] = arr[j+1], arr[j]  # Se intercambian los elementos.
                swapped = True  # Se marca como True porque se realizó un intercambio.
            # Imprimir la inversión realizada
                print(f"Intercambio: {arr[j+1]} <-> {arr[j]}, Resultado: {arr}")
        if not swapped:  # Si no hubo intercambios en esta pasada, la lista ya está ordenada y se puede romper el bucle.
            break
    
    return arr  # Se retorna el arreglo ordenado.

print("resultado final: ", bubble_sort([5,4,3,2,1,0]))