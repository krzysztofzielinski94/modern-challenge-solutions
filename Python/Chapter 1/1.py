if __name__ == '__main__':
    print ('Sum of natural numbers divided by 3 or 5')    
    limit_value = eval(input())
    sum_value = 0

    for _ in range(3, limit_value):
        if _ % 3 == 0 or _ % 5 == 0:
            sum_value += _

    print ('Sum = ', sum_value)