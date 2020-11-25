def hypotenuse(leg1, leg2):
    return (leg1**2 + leg2**2)**0.5


def hypotenuse(leg1, leg2):
    # Square root from sum of squares of tirangle legs.
    # [2] Pifagor. Geometry of Euclid.
    return (leg1**2 + leg2**2)**0.5  


def hypotenuse(leg1: float, leg2: float) -> float:
    """
    Calculates length of hypotenuse of right triangle.
    # Look here: [2] Pifagor. Geometry of Euclid.

    :param leg1: length of the **first** triangle leg.
    :param leg2: length of the _other_ triangle leg.
    :return: length of the hypotenuse.
    """
    # Square root from sum of squares of triangle legs.
    return (leg1**2 + leg2**2)**0.5


def hypotenuse(leg1: float, leg2: float) -> float:
    """
    Calculates length of hypotenuse of right triangle.
    # Look here: [2] Pifagor. Geometry of Euclid.

    :param leg1: length of the **first** triangle leg.
    :param leg2: length of the _other_ triangle leg.
    :return: length of the hypotenuse.
    """
    # Square root from sum of squares of triangle legs.
    length = (leg1**2 + leg2**2)**0.5
    assert length**2 == leg1**2 + leg2**2, "OUCH!!! Pifagor theorem doesn't work! Stopping program."
    return length


def main():
    x, y = [float(a) for a in input().split()]
    print('Hypotenuse is', hypotenuse(x, y))


if __name__ == "__main__":
    # assert 2 + 2 == 5, 'Joke!'
    main()
