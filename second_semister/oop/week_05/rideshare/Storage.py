import sqlite3


class DBMS:
    def __init__(self, db_name) -> None:
        self.__db_name = db_name
        self.__con = sqlite3.connect(self.__db_name)
        self.__cur = self.__con.cursor()

    def tb_create(self, __tb_name):
        self.__tb_name = __tb_name
        cmd = (
            "CREATE TABLE IF NOT EXISTS %s (ID INTEGER PRIMARY KEY AUTOINCREMENT, name text, email text, pwd text )"
            % self.__tb_name
        )
        self.__cur.execute(cmd)

    def db_insert(self, dt):
        self.__cur.executemany(
            "INSERT INTO %s (name, email, pwd)  VALUES (?, ?, ?)" % self.__tb_name, dt
        )
        self.__con.commit()
        # print("Successfully Inserted!")

    def query(self, id=0, name="", email=""):
        if id:
            self.__cur.execute(f"SELECT * FROM {self.__tb_name} WHERE ID='{id}'")
        elif name:
            self.__cur.execute(f"SELECT * FROM {self.__tb_name} WHERE name='{name}'")

        elif email:
            self.__cur.execute(f"SELECT * FROM {self.__tb_name} WHERE email='{email}'")

        data = []
        row = self.__cur.fetchone()
        while row:
            data.append(row)
            row = self.__cur.fetchone()
        return data

    def get_all(self):
        q = "SELECT * FROM %s" % self.__tb_name
        self.__cur.execute(q)
        row = self.__cur.fetchone()
        data = []
        while row:
            data.append(row)
            row = self.__cur.fetchone()
        return data

    def delete(self, id=0, name="", email=""):
        if id:
            self.__cur.execute(f"DELETE FROM {self.__tb_name} WHERE ID='{id}'")
        elif name:
            self.__cur.execute(f"DELETE FROM {self.__tb_name} WHERE name='{name}'")

        elif email:
            self.__cur.execute(f"DELETE FROM {self.__tb_name} WHERE email='{email}'")
        else:
            self.__cur.execute(f"DELETE FROM {self.__tb_name}")

        self.__con.commit()
        # print("Successfully Deleted!")


if __name__ == "__main__":

    db = Storage("bp.db")
    db.db_create("")
    # db.db_insert(
    #     [
    #         ("imran1", "imran@gmail.com", "pass123"),
    #         ("imran2", "imran@gmail.com", "pass123"),
    #         ("imran3", "imran@gmail.com", "pass123"),
    #     ]
    # )

    # r = db.get_all()
    r = db.delete()
    # print(r)
