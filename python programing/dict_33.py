dic={ "name": "kavy","study":"cse"
}
print(dic)
print(type(dic))
print(dic["name"])
# print(dic["name2"])
print(dic.get("name2"))

print(dic.keys())

for key in dic.keys():
    print(dic[key])