# My first try of implementing a linked list in Python
# Linked List Implementation in Python
# A linked list is a linear data structure where elements are stored in nodes, each pointing to the next node.
# It allows for efficient insertion and deletion of elements.
# A linked list consists of nodes, where each node contains data and a reference to the next node.
# This implementation includes basic operations like appending elements and displaying the list.
   
# class Node:
#          def __init__(self,data):
#                self.data = data
#                self.next = None
# class LinkedList:
#          def __init__(self):
#                self.head = None
#           def append(self,data):
#                 if self.head == None:
#                      self.head = Node(data)
#                       return
#                  while (self.next!=None):
#                           self.head = self.next
#                    self.head = self.data
#                    return

#                def print_list(self):
#                      while (self.next!=None):
#                           print(self.head , end="->")
#                           self.head = self.next

# linklist = LinkedList()
# linklist.append(5)
# linklist.append(15)
# linklist.append(25)
# linklist.print_list() 
                                      
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def append(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        current = self.head
        while current.next:
            current = current.next
        current.next = new_node

    def print_list(self):
        current = self.head
        while current:
            print(current.data, end=" -> ")
            current = current.next
        print("None")
linklist = LinkedList()
linklist.append(5)
linklist.append(15)
linklist.append(25)
linklist.print_list()  
