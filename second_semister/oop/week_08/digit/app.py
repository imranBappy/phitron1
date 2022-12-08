from sklearn.datasets import load_digits
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
import matplotlib.pyplot as plt
import numpy as np
from sklearn.metrics import confusion_matrix
from sklearn.metrics import plot_confusion_matrix


digits = load_digits()

# print(digits.data.shape)

# plt.gray()
# plt.matshow(digits.images[2])
# plt.show()
X = digits.data
Y = digits.target

X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.2)
# print(X_train.shape)
# print(X_test.shape)

model = LogisticRegression(random_state=0).fit(X_train, Y_train)

result = model.predict([digits.data[1705]])
# print(digits.target[170])

accuracy = model.score(X_test, Y_test)
y_predicted = model.predict(X_test)
confution = confusion_matrix(Y_test, y_predicted)

plot_confusion_matrix(model, X_test, Y_test)

print(accuracy)

print(confution)
plt.show()
