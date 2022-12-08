d = {'!': 1, '@': 2, '#': 3, '$': 4, '%': 5, '^': 6}


def create_list():
    all_keys = list(d.keys())
    all_values = list(d.values())
    output = []
    for i in range(len(d)):
        output.append(all_keys[i])
        output.append(all_values[i])
    print(output)


create_list()
