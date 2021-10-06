# Python script to create single file of usernames and passwords
with open('names.txt', 'r') as infile:
    rawNames = [x[:-1].lower() for x in infile]
    names = []
    for raw in rawNames:
        tokens = raw.split()
        names.append('{0:s}.{1:s}'.format(tokens[0], tokens[1]))

    names.sort()

with open('passwords.txt', 'r') as infile:
    passwords = [x[:-1] for x in infile]

# merle has a baaaad password
for name, pw in zip(names, passwords):
    if name != 'merle.watkins':
        print(name, pw)
    else:
        print(name, 'password123')