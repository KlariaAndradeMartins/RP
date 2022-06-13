def run():
    _ = int(input())
    if _ <= 10:
        print(int(_/5))
    else:
        print(int((_-10)/5*2+2))


if __name__ == '__main__':
    run()