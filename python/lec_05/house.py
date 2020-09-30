
def draw_house(x, y, width, height):
    """
    Нарисовать домик ширины width и высоты height от опорной точки (x, y),
    которая находится в середине нижней точки фундамента.
    :param x: координата x середины домика
    :param y: координата y низа фундамента
    :param width: полная ширина домика (фундамен или вылеты крыши включены)
    :param height: полная высота домика
    :return: None
    """
    print('Типа рисую домик...', x, y, width, height)
    pass  # do nothing


x, y = 300, 400
width, height = 200, 300

draw_house(x, y, width, height)
