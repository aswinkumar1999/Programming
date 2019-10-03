# cook your dish here

def multiply( a , n ):
    if n == 0:
        return(a[n])
    else:
        return (a[n] * multiply(a, n - 1))

from itertools import combinations

n, k = list(map(int, input().rstrip().split()))

a = list(map(int, input().rstrip().split()))

freq = {}

count = 0

freq_arr = []

for i in a:
    if(i not in freq):
        freq[i] = 1
    else:
        freq[i] += 1

freq_arr = list(freq.values())

c = 0

#freq_index = [i for i in range(len(freq_arr))]

while(c <= k):
    if(c == 0):
        count += 1
    elif(c == 1):
        count += len(a)
    else:
        l = []
        if(c <= len(freq_arr)):
            g = 0
            #l = combinations(freq_index,c)
            for x in combinations(freq_arr,c):
                g += multiply(x,len(x) - 1)
            count += g


    c += 1

print(int(count%1000000007))
        
