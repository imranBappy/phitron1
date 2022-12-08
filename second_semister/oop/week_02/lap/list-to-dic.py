my_list = ["@F1", "OBCD", '!', "@F1", "ADDAB", "!", "@F3", "OKKA", "!"]

# print(my_list[0].replace("@", ""))

new_list = []
key = ""
value = ""
for item in my_list:
    if item.startswith("@"):
        new_dic = dict()
        new_dic[key] = value
        new_list.append(new_dic)
        key = item.replace("@", "")
        value = ""
    else:
        value += item
new_dic = dict()
new_dic[key] = value
new_list.append(new_dic)
key = item.replace("@", "")

del new_list[0]
print(new_list)

# print(my_dic)
