
def run():
    _ = int(input())
    bolhas = 0
    for i in range(_):
        value = int(input())
        if value > 3:
            bolhas += value - 3

    print(bolhas)


if __name__ == '__main__':
    run()