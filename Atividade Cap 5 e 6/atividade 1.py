x = 10  

def g():
    x = 20 
    print("Dentro de g, antes de chamar f:")
    f()

def f():
    print(f"Valor de x dentro de f: {x}")

print("Executando g():")
g()