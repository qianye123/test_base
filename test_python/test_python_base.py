
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

print('***********************************************')
#file operation

with open('test_file.txt') as file_obj:
    contents = file_obj.read()
    #print(contents)
    print(contents.rstrip())


file_path = '/home/qianye/github/publish/test_base/README.md'
with open('/home/qianye/github/publish/test_base/README.md') as file_obj_2:
    contents = file_obj_2.read()
    print(contents.rstrip())
with open(file_path) as file_obj_3:
    contents = file_obj_3.read()
    print(contents.rstrip())

with open('test_file.txt') as file_obj_4:
    lines = file_obj_4.readlines()

for line in lines:
    print(line.rstrip())

with open('test_file.txt', 'w') as file_obj_5:
    file_obj_5.write('this is is write')
with open('test_file.txt') as file_obj:
    contents = file_obj.read()
    #print(contents)
    #print(contents.rstrip())

print('****************************************')
'''' 试试注释 '''
while True:
    first_num = input('Please input fenzi\n')
    if first_num == 'q' :
        break
    second_num = input('Please input fenmu\n')
    if second_num == 'q' :
        break
    
    try:
        value = float(first_num) / float(second_num)
        print(value)
    except ZeroDivisionError:
        print('you cant divide by 0!')
    #else:
    #    print(value)
