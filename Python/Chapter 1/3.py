def gcd(a, b):
    return a if b == 0 else gcd(b, a % b)

def lcm(a, b):
    return a * b / gcd(a, b) 

if __name__ == '__main__':
    print ('Lowest common multiple for 2 values')
    print ('Input a: ', end='')
    a = eval(input())
    print ('Input b: ', end='')
    b = eval(input())

    print (f'lcm({a}, {b}) = ', lcm(a, b))
