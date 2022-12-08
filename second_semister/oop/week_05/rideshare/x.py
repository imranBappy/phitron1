import sqlite3

data_person_name = [
    ("Michael", "Fox"),
    ("Adam", "Miller"),
    ("Andrew", "Peck"),
    ("James", "Shroyer"),
    ("Eric", "Burger"),
]
con = sqlite3.connect("qoq")
c = con.cursor()
c.execute(
    """CREATE TABLE IF NOT EXISTS people ( person_id INTEGER PRIMARY KEY AUTOINCREMENT,first_name text NOT NULL,last_name text NOT NULL)
    """
)
c.execute(
    """
              INSERT INTO people (first_name,last_name)
VALUES('John','Smith');
              """
)
for row in c.execute("SELECT * FROM people"):
    print(row)
