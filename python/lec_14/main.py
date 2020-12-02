import fib


def main():
    n = int(input("Введите номер числа Фибоначчи: "))
    f = fib.fib(n)
    print("Ваше число Фибоначчи:", f)


if __name__ == "__main__":
    main()
