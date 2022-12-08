class Shopper:
    def __init__(self, name):
        self.name = name
        self.cart = []

    def add_to_cart(self, item, price, quantity):
        self.cart.append({'item': item, 'price': price, 'quantity': quantity})

    def checkout(self, amount):
        price = 0
        for item in self.cart:
            price += item['price'] * item['quantity']

        if amount < price:
            print(f"Please give me more money : {price - amount}")
        elif price < amount:
            print(f"Hare is the items and extra money : {amount-price}")


sh = Shopper("Imran")
sh.add_to_cart("Pen", 10, 5)
sh.add_to_cart("Bat", 50, 3)
sh.add_to_cart("Ball", 100, 1)
sh.add_to_cart("Cat", 70, 1)

print(sh.cart)

sh.checkout(1000)