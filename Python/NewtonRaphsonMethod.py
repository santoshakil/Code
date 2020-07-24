def func(x):
    return x * x * x * x - x * x + 5


def derivFunc(x):
    return 3 * x * x * x - 5 * x

# Function to find the root


def newtonRaphson(x):
    h = func(x) / derivFunc(x)
    while abs(h) >= 0.0001:
        h = func(x)/derivFunc(x)

        # x(i+1) = x(i) - f(x) / f'(x)
        x = x - h

    print("The value of the root is : ",
          "%.4f" % x)


x0 = -20  # Initial values assumed
newtonRaphson(x0)
