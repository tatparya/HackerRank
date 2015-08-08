def check(a , b):
    for d in a:
        if d in b:
            return True
    return False
    
          
            
n = input()
for _ in range(n):
    a = raw_input()
    b = raw_input()
    d1 = {}
    d2 = {}
    for l in a:
        d1[l] = l
    for l in b:
        d2[l] = l
    if check(d1 , d2):
        print "YES"
    else:
        print "NO"
