def nr_gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a 


def r_gcd(a , b):
    return a if b == 0 else r_gcd(b, a % b)
    
if __name__ == '__main__':
    print ('Greates common divisor: gcd(a,b)')
    print ('Input a: ', end='')
    a = eval(input())
    print ('Input b: ', end='')
    b = eval(input())

    print(f'r_gcd({a}, {b}) = ', r_gcd(a, b))
    print(f'nr_gcd({a}, {b}) = ', nr_gcd(a, b))