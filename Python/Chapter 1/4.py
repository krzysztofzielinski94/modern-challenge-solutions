def is_prime(number):
    if number <= 3:
        return number > 1

    range_numbers = range(2, round(number / 2))

    for num in range_numbers:
        if number % num == 0:
            return False
    return True
    
if __name__ == '__main__':
    print ('The greates prime number lower than input value')
    print ('Input a: ', end='')
    a = eval(input())

    for i in range(a-1, 1, -1):
        if is_prime(i):
            print (f'The greates prime number lower than input value = {i}')
            break