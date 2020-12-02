import unittest
from fib import fib


class TestFibonacci(unittest.TestCase):

    def test_simple(self):
        for param, result in [(0, 0), (1, 1), (2, 1), (3, 2), (10, 55)]:
            self.assertEqual(fib(param), result)

    def test_stress(self):
        self.assertEqual(fib(9999), fib(9998) + fib(9997))
        with self.assertRaises(ValueError):
            fib(10000)

    def test_negative(self):
        with self.assertRaises(ValueError):
            fib(-1)
        with self.assertRaises(ValueError):
            fib(-100)

    def test_wrong_param_type(self):
        with self.assertRaises(TypeError):
            fib(2.5)
        with self.assertRaises(TypeError):
            fib('Hello')


if __name__ == '__main__':
    unittest.main()
