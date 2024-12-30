# single strings

name = "kavy"
friend = 'dipesh is a "samrt boy"'
print(name,friend)

# multiline strings

shayar= '''
          "koi hamari tarah chahe to btana 🥰
    koi hamari tarah satae to btana 😭😅 "
          "pyar to koi bhi kar lega aapse 💯
    aap pyare hi itne ho 👸🏼❤️‍🔥🥰  "
          "par koi hamari tarah nibhae to batana 🥹 "
'''
print(shayar)

# index printing print(name[4]) throws an error
print(name[0])

# let using for loops 
print("let use a for loop\n")
for character in name:
    print(character)

# length and slicing of strings
print(len(name))
print(name[0:3])

fruit= "mango"
print(fruit[0:len(fruit)-3])
print(fruit[-3:-1])

nm= "riddhi"
print(nm [-6:-3])
