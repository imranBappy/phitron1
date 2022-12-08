class User:
    def __init__(self, first, last):
        self.first = first
        self.last = last
        self.email = f"{first}.{last}@user.com"

    @property
    def get_email(self):
        return self.email

    @property
    def full_name(self):
        return f"{self.first} {self.last}"

    @get_email.setter
    def get_email(self, value):
        self.email = value

    @get_email.deleter
    def get_email(self):
        del self.email

    def name(self, first, last):
        self.first = first
        self.last = last


imran = User("Imran", "Hossen")
# email = imran.get_email()
# print(email)

# imran.email = "imran@gmail.com"
# print(imran.get_email())

# imran.get_email = "imran@gmail.com"
# print(imran.get_email)
imran.name("Imran", "Hossen")
del imran.get_email

print(imran.full_name)
