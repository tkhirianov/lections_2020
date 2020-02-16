

def euclid_gcd(a: int, b: int):
    # Алгоритм Евклида поиска НОД
    while a != b:
        if a > b:
            a -= b
        else:
            b -= a
    return a

x = int(input("Enter integer. x = "))
y = int(input("Enter integer. y = "))
print("GCD(x, y) =", euclid_gcd(x, y))
