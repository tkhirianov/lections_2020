def foo(x, y=0, z=0):
    return 100*x + 10*y + 1*z


def bar(*args, named_parameter="bar"):
    for arg in args:
        print(named_parameter, 'arg =', arg)


bar()
bar(['the', 'list', 'of', 'strings'])
bar(1, 2, 3)
bar("jelly", "fish")
bar("jelly", "fish", named_parameter='SEPARATOR')

'''print(foo(1, 2, 3))
print(foo(z=1, x=2, y=3))  # named parameters
print(foo(1, 2))
print(foo(7))
'''