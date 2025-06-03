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
    def insert_in_start(self,data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node
        return
    def search(self,data):
        current = self.head
        while current:
            if current.data == data:
                return True
            else:
                current = current.next
        return False
        
    def delete(self,data):
        current = self.head
        
        if current and current.data == data:
            self.head = current.next
            return
        previous = current
        while current:
            if current.data == data:
                current = current.next
                previous.next = current
                return
            else:
                previous = current
                current = current.next
        if current == None:
            return
                
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

print(linklist.search(15))
print(linklist.search(5))
print(linklist.search(35))

linklist.insert_in_start(1)
linklist.print_list()

linklist.delete(1)
linklist.print_list()

linklist.insert_in_start(0)
linklist.delete(15)
linklist.print_list()




