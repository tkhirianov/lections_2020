def fib(n):
    """
    Вычисляет число Фибонаачи номер n.

    Выбрасывает исключение TypeError, если вызвана не для целочисленного типа.
    Выбрасыват исключение ValueError, если число отричательное или больше допустимого по контракту.
    :param n: целое число от 0 до 9999
    :return: целое число от 0 до ...
    >>> fib(1)
    1
    >>> fib(2)
    1
    >>> fib(3)
    2
    >>> fib(5)
    5
    >>> fib(10)
    55
    >>> fib(20)
    6765
    """
    if not isinstance(n, int):
        raise TypeError("Fibonacci function can work only with <class 'int'> type.")
    if n < 0:
        raise ValueError("Fibonacci can't work with negative numbers.")
    if n >= 10000:
        raise ValueError("Fibonacci can't work with numbers larger than 9999.")
    if n == 0:
        return 0
    f_2 = 0
    f_1 = 1
    for i in range(2, n + 1):
        f_1, f_2 = (f_1 + f_2), f_1
    return f_1


if __name__ == "__main__":
    import doctest
    doctest.testmod()
