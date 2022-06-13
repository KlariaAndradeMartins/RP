
def capicua(_):
    x = int(str(_)[::-1])
    if x == _:
        return True
    else:
        return False

def run():
    _ = int(input())
    if capicua(_):
        return _
    for i in range(4):
        x = int(str(_)[::-1])
        _ += x
        if capicua(_):
            return _
        
    return 'Nao foi possivel encontrar um numero capicua com 4 iteracoes!'


if __name__ == '__main__':
    print(run())