class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class LinkedList:
    def __init__(self):
        self.head=None

    def insert_end(self,val):
        newnode=Node(val)
        if not self.head:self.head=newnode;return
        temp=self.head
        while temp.next: temp=temp.next
        temp.next=newnode

    def reverse(self):
        prev=None
        curr=self.head
        while curr:
            nxt=curr.next
            curr.next=prev
            prev=curr
            curr=nxt
        self.head=prev

    def display(self):
        temp=self.head
        while temp: print(temp.data,end=" "); temp=temp.next
        print()

ll=LinkedList()
ll.insert_end(10); ll.insert_end(20); ll.insert_end(30); ll.insert_end(40)
ll.reverse()
ll.display()
