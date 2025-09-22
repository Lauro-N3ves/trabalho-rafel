import math

print("Menu:")
print("1. Calcular o quadrado de um numero")
print("2. Calcular o fatorial de um numero")
print("3. Sair")
opcao = int(input("Escolha uma opcao: "))

if opcao == 1:
    num = int(input("Digite um numero: "))
    print(f"O quadrado de {num} e {num ** 2}")
elif opcao == 2:
    num = int(input("Digite um numero: "))
    print(f"O fatorial de {num} e {math.factorial(num)}")
elif opcao == 3:
    print("Saindo do programa.")
else:
    print("Opcao invalida!")

