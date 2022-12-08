import pandas
from sklearn.linear_model import LinearRegression

data = pandas.read_csv("data.csv")
print(data.shape)
model = LinearRegression()
model.fit(data[["version"]], data[["price"]])

predicted_price = model.predict([[100]])
print(predicted_price)
