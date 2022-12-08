import pandas
import matplotlib.pyplot as plt
import numpy as np

data = pandas.read_csv("data.csv")

print(data["version"])

plt.scatter(data["version"], data["price"])
plt.show()
