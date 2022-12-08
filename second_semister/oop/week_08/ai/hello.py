import requests
from bs4 import BeautifulSoup
import re

url = "https://en.wikipedia.org/wiki/IPhone"

data = requests.get(url).text.encode("utf-8").decode("ascii", "ignore")

soup = BeautifulSoup(data, "lxml")
table = soup.find("table", class_="wikitable")
rows = table.find_all("tr")[1:]

iphone_data = {}
for row in rows:
    data = row.find_all(["th", "td"])
    try:
        # print(data[0].a.text)
        phone_name = data[0].a.text
        phone_price = data[-1].text
        version_text = phone_name.split(" ")[1]
        version = re.sub(r"\D", "", version_text)
        price_text = phone_price.split("$")[-1]
        price = int(re.sub(r"\D", "", price_text))
        if version and price > 100:
            iphone_data[int(version)] = price
            print(version, price)
    except:
        pass
        # print(row[0])

print(iphone_data)

csv_fields = ["version", "price"]
import csv

# for key, value in iphone_data.items():
#     print([key, value])
with open("data.csv", "w", newline="") as f:
    csvwrite = csv.writer(f)
    csvwrite.writerow(csv_fields)

    for key, value in iphone_data.items():
        csvwrite.writerow([key, value])
    f.close()
