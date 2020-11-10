x = int(input("Введіть значення аргумента X "))
n = int(input("Введіть ціле значення N, до якого плануєте розраховувати суму "))
Sum=0
factorial=1
for i in range(0, n+1):
    for j in range(1,2*i+1):
        factorial=factorial*j
    expression=(-1)**i*(x**(2*i)/factorial)
    factorial=1
    Sum=Sum+expression
    print("При N = %-d значення суми дорівнює: %-10.18f"%(i, expression))#для зручності перевірки даних
print("Сума дорівнює %10.18f"%Sum)







