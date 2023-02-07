class Node:
    def __init__(self,val) -> None:
        self.val = val
        self.left = None
        self.right = None
class BST:
    def __init__(self) -> None:
        self.root = None
    def insert(self,val):
        if self.root == None:
            self.root = Node(val)
        else:
            current = self.root
            while True:
                if val <= current.val:
                    if current.left:
                        current = current.left
                    else:
                        current.left = Node(val)
                        break
                else:
                    if current.right:
                        current = current.right
                    else:
                        current.right = Node(val)
                        break
    def search(self,x):
        if not self.root:
            return "root is empty"
        
        current = self.root
        while True:
            if current.val == x:
                return "found"
            elif current.val > x:
                if current.left:
                    current = current.left
                else:
                    return "not found"
            else:
                if current.right:
                    current = current.right
                else:
                    return "not found"
    def Height_treed(self):
        def FindHeight(root):
            if root == None:
                return 0
            left_heightt = FindHeight(root.left)
            right_height = FindHeight(root.right)

            return max(left_heightt, right_height) + 1
        current = self.root
        return FindHeight(current)
    # def remove(self,x):
    #     if self.root ==None:
    #         print('root is emplty')
    #     current = self.root
    #     if self.root.val == x:
    #         root
    #     while True:
    #         if current.val == x:
    #             current
        



    
        



root = BST()
# print(root.search(2))
root.insert(15)
root.insert(10)
root.insert(20)
root.insert(34)
root.insert(12)
root.insert(1)
# print(root.search(4))
# print(root.search(15))

print(f'height is {root.Height_treed()}')
# root.priniting()