# coding=UTF-8
class PositiveInt:
    __a = 0
    __counter = 0

    def set_a(self, a):
        self.__counter += 1
        if a >= 0:
            self.__a = int(a)
        else:
            print("Wrong parameter, an internal state won't change." )

    def get_a(self):
        print("Was set", self.__counter, "times.")
        return self.__a


if __name__ == "__main__":
    value = PositiveInt()

    print(value.get_a())

    value.set_a(10)
    print(value.get_a())

    value.set_a(-10)
    print(value.get_a())
