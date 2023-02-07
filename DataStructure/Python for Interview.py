# 1. negative number difference from other language
print(-3//2)   # gives -2 but other languge gives -1
print(int(-3/2)) # gives the -1 like other language but make sure that it should be integer 



# 2. module is also same problem
print(-10 % 3) # gives the 2 result but other language gives -1. modulo result always becomes positive in python
import math
print(math.fmod(-10,3)) # gives the same result -1 like other languge but floating result
print(math.ceil(3/2)) #gives 2 int
print(math.floor(3/2)) #gives 1 int
print(math.sqrt(9)) # gives 3.0 floating
print(math.pow(2,3)) # gives 8.o as floating



# 3. float max and min (this automatically handle big integer) so there is no overflow for the value
print(float('inf')) # max float
print(float('-inf')) # gives min float



# 4. array or list can be used as stack
array = [1,2,3,4]
array.append(3) #like push
print(array)
array.pop() # like pop
print(array)
array.insert(1, 7) # inserting the 7 into 1 index O(n) operation
print(array)
arr = [0] * 5 # gives the value 0 for 5 index
print(arr)
print(array[::-1]) # reversing the array

# 5. unpacking 
a, b, c = [1,2,3]
print(a, b, c)
nums1 = [1,2,3,4]
nums2 = [9,8,7,6] 

for n1,n2 in zip(nums1,nums2):  #this gives the values from same index. size should be same otherwise it will give value from small list lenth
    print(n1, n2) 

nums1.reverse() #give the reverse list inplace
print(nums1) 


# 6. sorting
ls = ["raj","mehedi","md","hasan"] #
ls.sort() # by default it sort according to alphabates
print(ls)
# custom sort by length
ls.sort(key= lambda x: len(x))
print(ls)




# 7. deque or double ended queue. append and pop can be performed from both side
from collections import deque
queue = deque()
queue.append(1)
queue.appendleft(2)
print(queue)
queue.pop()
queue.popleft()
print(queue)


# 8. hash set  where we can search in constant time
mySet = set()
mySet.add(1) # here add is used instead of append
mySet.add(2)
print(mySet)

#checking elements
print(1 in mySet)
print(2 in mySet)
print(3 in mySet)

#remove
mySet.remove(1)
# set comprehension is also possible



# 9. hash map or dictionary is second most used 
mymap = {}
mymap["bob"] = 1
mymap["alice"]= 2
mymap["justine"]= 3
print(len(mymap)) # give the length of key
print("alice" in mymap) # checking the key in hasmap
mymap.pop("alice")
print(mymap)
mymap = {i:i*2 for i in range(10)} # map comprehension or hash map comprehension
print(mymap)
print(mymap[2])

# looping through the map
for key in mymap:
    print(key, mymap[key])
for val in mymap.values(): # direct access of value from hash map
    print(val)
for key, val in mymap.items(): # unpacking the key and val
    print(key, val)


# 10. tuples == immutable, can not modify like tp[0] = 2

tp = (1,2,3)
print(tp[0])
my_map = {(1,2):3} # tuple as map key but list can not be as hash key

# 11. heapsort 
import heapq
minheap = []
heapq.heappush(minheap,12) # this is using heap. default is minheap so minheap[0] gives the min result
heapq.heappush(minheap,3)
print(minheap[0])

while len(minheap): #loop through heap
    print(heapq.heappop(minheap))

# for doing maxheap we have to follow some rules like while pushing multiply -1, while poping same thing so that we get original value
print('max heap results')
maxheap = []
heapq.heappush(maxheap,-1*12) # this is using heap. default is minheap so minheap[0] gives the min result
heapq.heappush(maxheap,-1*3)
print(-1*maxheap[0])
# print(maxheap)
while len(maxheap): #loop through heap
    print(-1*heapq.heappop(maxheap))

# if i already have a list of value we built a heap by calling heapify function in linear time
ls = [1,3,52,26,72]
heapq.heapify(ls) # O(n)

while ls:
    print(heapq.heappop(ls))


# 11. updating the value in thr function using nonlocal keyword

def double(arr, val): # though one function can change the list but nested funtion can not change the value. so for doing this need to use nonlocal 
    def helper():
        # nonlocal ls
        for i, n in enumerate(arr):
            arr[i] *= 2
        #it will do only double in helper scope
        nonlocal val # this value will be updated to double loop
        val*=2
    helper()
    print(arr, val)
ls = [1,2,3,4]
double(ls,2)


# 12. class
class MyClass:
    #constructor
    def __init__(self,nums) -> None:
        # create member variable
        self.nums = nums
        self.size = len(nums)

    def getLength(self):
        return self.size





