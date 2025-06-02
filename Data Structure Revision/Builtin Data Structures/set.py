# Set -> Unordered, mutable, does not allow duplicates
nums = {1, 2, 2, 3}
print(nums)  
nums.add(4)
print(nums)  
nums.remove(2)
print(nums) 
nums.discard(5)  # No error if 5 is not present
print(nums)
nums.clear()
print(nums)
# Set operations
set1 = {1, 2, 3}
set2 = {3, 4, 5}
print(set1.union(set2))  
print(set1.intersection(set2))
print(set1.difference(set2)) 
print(set1.symmetric_difference(set2))  
# Set comprehensions
# Creating a set of squares of even numbers from 0 to 9
squares = {x**2 for x in range(10) if x % 2 == 0}
print(squares)  
# Creating a set of unique characters from a string
unique_chars = {char for char in "hello world"}
print(unique_chars)  
# Creating a set of unique words from a sentence
unique_words = {word for word in "hello world hello".split()}
print(unique_words)  
# Creating a set of unique numbers from a list
unique_numbers = {num for num in [1, 2, 2, 3, 4, 4]}
print(unique_numbers) 
# Creating a set of unique letters from a string
unique_letters = {char for char in "banana"}
print(unique_letters)  
# Creating a set of unique words from a list of sentences
sentences = ["hello world", "hello", "world"]
unique_words_from_sentences = {word for sentence in sentences for word in sentence.split()}
print(unique_words_from_sentences)      