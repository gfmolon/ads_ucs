#aprovacao aluno
#media maior que 7

materia1 = float(input("Informe a nota da matéria 1\n"))
materia2 = float(input("Informe a nota da matéria 2\n"))
materia3 = float(input("Informe a nota da matéria 3\n"))

media = (materia1+materia2+materia3)/3

print(f"{media:.2f}")
if media > 7:
    print("Aluno aprovado")
else:
    print("Você precisa estudar!")