

tests = ['11', '23', '34', '32', '35', 354]

for i in range(len(tests)):
    print(tests[i], len(tests))
    tests.pop(i)


print("***************************")

for i in range(0, len(tests)):
    print(tests[i])