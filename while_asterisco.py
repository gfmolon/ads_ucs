n = int(input("Digite um número"))

while (n <= 0): 
    n = int(input("Digite um número"))

print(f"{n} é válido.")

formatacao = "*"
while (0 < n):
    print(f"{n}")
    n=n-1
    print(formatacao*n)


