def run():
    _ = int(input())
    for i in range(_):
        value = bin(int(input()))
        msg = ''

        for j, k in enumerate(value[::-1]):
            if k == '1':
                msg += f'{j} '
        print(msg[:-1])

if __name__ == '__main__':
    run()