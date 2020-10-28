class Base:
    def __init__(self, x):
        self.x = x

    def show(self):
        print('Base', self.x)


class Derivative(Base):
    def __init__(self):
        super().__init__(20) # явный вызов конструктора
        self.name = ''


a = Base(10)
b = Derivative()
a.show()
b.show()


