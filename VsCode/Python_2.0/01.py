#list

items=["Bananas", "Apple", "Grapes", "Chilly"]
print("\n\n",items,"\n\n")
print(items[2])

#modify your items
items[1]='Fruits'
print(items)

#Suppose you want only 2 items among the list
print(items[0: 3])
#reverse printing
print(items[-1])

#suppose you want extra one item then?
items.append("Pasta")
print(items)

#if you want to combinned two items
item2=["Paneer", 'Dhokla']
items= items+ item2 #you could also overwrite.
print(items)

#predefined function -- using
print(len(items))

#check whether your searching item is present or not
print("Paneer" in items)

print("Soda" in items)