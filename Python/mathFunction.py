def factorial(n):
    '''Returns the factorial of a number '''
    if n<=1:
        return 1
    return  n*factorial(n-1)

def premutation(n,r):
    ''' Return the permutation number by using 2 factors n and r '''
    return  factorial(n)//factorial(n-r)

def combination(n,r):
    ''' Return the combination number by using 2 factors n and r '''
    return factorial(n)//(factorial(n)*factorial(n-r))