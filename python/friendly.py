import sys

def sumDevidors(victim):
    sum = 1
    i = 2
    while i*i < victim:
        if victim % i == 0:
            sum += + i + (victim / i)
        i += 1
    if i*i == victim:
        sum += + i
    return sum

top = int(sys.argv[1])
print "top is " + str(top)
for candidate in range(1, top):
    mate = sumDevidors(candidate)
    if mate <= candidate:
        continue
    if candidate == sumDevidors(mate):
        print candidate, mate

