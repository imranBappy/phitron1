import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split

dt = pd.read_csv("HR_comma_sep.csv")
# print(dt.isnull().values.any())

# print(dt.salary.unique())
# print(dt.Department.unique())

# replase data
clean_up_values = {"salary": {"low": 1, "medium": 2, "high": 3}}

dt.replace(clean_up_values, inplace=True)

dummies = pd.get_dummies(dt.Department)

merged = pd.concat([dt, dummies], axis="columns")

# print(dt)

final_dt = merged.drop(["Department"], axis="columns")

# plt.scatter(x=final_dt.salary, y=final_dt.left)
# print(final_dt.columns)
# plt.show()

X = final_dt.drop("left", axis="columns")
y = final_dt.left

x_train, x_test, y_train, y_test = train_test_split(X, y, test_size=0.2)

model = LogisticRegression()
model.fit(x_train, y_train)
accuracy = model.score(x_test, y_test)
# print(accuracy)
# print(X.columns)


# result = model.predict([[0.37, 0.52, 2, 159, 3, 0, 1, 0, 1, 21, 1, 1, 1, 1]])
# print(dt.shape)
print(dt.size)

