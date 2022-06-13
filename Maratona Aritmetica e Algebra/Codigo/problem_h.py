import math

def run():
    _ = int(input())
    for i in range(_):
        value = int(input())
        print(math.factorial(value))


if __name__ == '__main__':
    run()