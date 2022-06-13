
def run():
    _ = int(input())
    names = []
    average = 0
    for i in range(_):
        value = input()
        n, x = value.split(':')
        names.append(n)
        average += float(x)

    for name in names:
        print(name)
    print(average/_)


if __name__ == '__main__':
    run()