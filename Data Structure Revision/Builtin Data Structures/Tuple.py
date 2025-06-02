# tuple -> Ordered, immutable, allows duplicates
Countries = ("USA", "Canada", "Mexico")
print(Countries)
# Tuples are immutable, meaning they cannot be changed after creation
# Countries.append("Brazil")  # This will raise an AttributeError
# Countries.insert(1, "Argentina")  # This will also raise an AttributeError
# Countries.remove("Mexico")  # This will also raise an AttributeError
# Countries.sort()  # This will also raise an AttributeError
# Countries.reverse()  # This will also raise an AttributeError
# Countries.pop()  # This will also raise an AttributeError
# Countries.clear()  # This will also raise an AttributeError
# To create a new tuple with an additional element, you can concatenate tuples
Countries = Countries + ("Brazil",) # if we want to add a single element, we need to add a comma otherwise it is considered as a string
print(Countries)
# To create a new tuple with an element inserted at a specific position, you can use slicing
Countries = Countries[:1] + ("Argentina",) + Countries[1:]
print(Countries)
# To create a new tuple with an element removed, you can use a comprehension or slicing
Countries = tuple(country for country in Countries if country != "Mexico")
print(Countries)            