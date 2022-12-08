class Shop:
    cart = []

    def __init__(self, name="Imran"):
        self.name = name
        self.ammount = 1120

    def add(self, item):
        self.cart.append(item)

    def show_cart(self):
        print(self.cart)


imranShop = Shop()
# imranShop.add("Kek")
# imranShop.add("Kola")

# imranShop.show_cart()
# print(imranShop.name)

# bappyShop = Shop("Bappy")
# bappyShop.add("Alu")
# bappyShop.show_cart()

print(imranShop.__dict__)
