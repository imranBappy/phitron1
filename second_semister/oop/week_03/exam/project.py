import random
import os


class Student:
    def __init__(self):
        self.data_path = "data.txt"

    def __unique_id(self):
        return random.randint(1000, 10000)

    def add(self, name, mark, ):
        self.__write_data(
            {"student_name": name, "mark": mark, "student_id": self.__unique_id()})

    def __write_data(self, data):
        f = open(self.data_path, "a")
        fr = open(self.data_path, "r")
        if len(fr.read()) == 0:
            f.write(f"{data}")
        else:
            f.write(f"|{data}")

    def __read_data(self):
        fr = open(self.data_path, "r")
        stds = []
        std_data = fr.read().split("|")
        for s in std_data:
            filed_data = self.__filter_extra(s, "}'{,:")
            s_list = filed_data.split(" ")
            s_dic = dict()
            for i in range(0, len(s_list)-1, 2):
                s_dic[s_list[i]] = s_list[i+1]
            stds.append(s_dic)
        return stds

    def __data_update(self, all_data):
        f = open(self.data_path, "w")
        for i in range(0, len(all_data)-1):
            f.write(f"{all_data[i]}|")
        f.write(f"{all_data[i]}")

    def __filter_extra(self, s, ex):
        l = []
        for c in s:
            if c not in ex:
                l.append(c)
        return "".join(l)

    def delete_data(self):
        os.remove(self.data_path)

    def remove(self, _id):
        data = self.__read_data()
        data = list(filter(lambda s: s["student_id"] != _id, data))
        self.__data_update(data)


s = Student()
s.add("gjhjg", 7866)
# s.remove("7920")
# print(s._Student__read_data())
