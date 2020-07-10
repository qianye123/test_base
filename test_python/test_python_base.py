
#this is some tests for python

#from test_class import pidcontorller
import test_class


tests = ['11', '23', '34', '32', '35', 354]

for i in range(len(tests)):
    print(tests[i], len(tests))



print("***************************")

for i in range(0, len(tests)):
    print(tests[i])
print("***************************")

tests = {'a': 5, 'c' : 7, 'b': 6}
print(tests.items())

for key,value in tests.items():
    print(key + ' : ' + str(value))

for key in sorted(tests.keys()):
    print(key)

for value in tests.values():
    print(value)
print(tests)


print("***************************")

tests_list = [1, 2, 3, 4, 5]
tests_dict = {'name' : 'qianye', 'point' : tests_list}
print(tests_dict)
print(tests_dict['point'][3])

for i in range(len(tests_dict['point'])):
    print(str(i) + ':' + str(tests_dict['point'][i]))
print("***************************")

message = input('Tell me something, and i will repeat it  : ')
print(message)
nums = input()
print(nums)
print("***************************")

def func_1(temp_lists):
    temp_lists.append(12)
    del temp_lists[2]

def func_2(temp_lists):
    temp_lists.append(12)
    del temp_lists[2]

temp_lists = [1, 2, 3, 4]
func_2(temp_lists[:])
print(temp_lists)
func_1(temp_lists)
print(temp_lists)


test = test_class.pidcontorller(10)
temp_hz = test.gethz()
print(temp_hz)
test.setkp(5)

control = test.setcontrol(10)
print(test.output)