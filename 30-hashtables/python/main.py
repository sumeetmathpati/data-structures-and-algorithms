# Create dictionary.
mydict = {
    'name': 'sumeet',
    'age': 21,
    2: 2
}

# Access elements
print("Hello, I am", mydict.get('name'))
print('My age is ', mydict['age'])
print(mydict[2])

# If key is not present get() returns None, while [] gives error.

# Get list of keys and vlaues
keys = mydict.keys()
values = mydict.values()
print(keys)
print(values)

# Iterating
for k, v in mydict.items():
    print(k, " --> ", v)

# Check if key exists
if 'name' in mydict:
    print("Name exists.")

if 'education' not in mydict:
    print("education does NOT exists.")

# Update values
mydict['name'] = "Sherlock"
mydict.update({'name': 'Sherlock', 'occupation': 'Consulting Detective'})
thisdict.pop(2)

print("Hello, I am "), mydict['name']
print('I am a ', mydict['occupation'])