inputs = [int(i) for i in input().split(' ')]
output = []
frequency = {}

for i in inputs:
    if (frequency.get(i) == None):
        output.append(i)
        frequency[i] = True

print(output)