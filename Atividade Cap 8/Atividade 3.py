def processar_numeros(lista):
   
    for numero in lista:
        if numero < 0:
            print(f"Pulando numero negativo: {numero}")
            continue  
        if numero == 0:
            print("Numero 0 encontrado. Parando a execucao.")
            break 
        if numero % 2 == 0:
            print(f"Primeiro numero par encontrado: {numero}. Retornando o dobro.")
            return numero * 2 
    print("Loop concluido sem encontrar numeros pares ou o numero 0.")
    return None 

numeros = [3, 5, -2, 8, 7, 0, 4]
resultado = processar_numeros(numeros)
if resultado is not None:
    print(f"Resultado final da funcao: {resultado}")

