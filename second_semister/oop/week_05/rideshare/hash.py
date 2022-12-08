import hashlib


t_pass = "pass123"
e_pass = t_pass.encode()
h_pass = hashlib.md5(e_pass).hexdigest()

print(e_pass)
print(hashlib.md5())
