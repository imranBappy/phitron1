import pandas as pd

dct = [{"name": "Rahim", "age": 20},{"name": "Korim", "age": 20},]
df = pd.DataFrame(dct, index=range(0, 2))
print(df)
# df = pd.read_csv("./diabetes.csv", index_col="Outcome")
# print(df.head()) for showing 5 rows data

# print(df.describe()) for all detail info
# df_head = df.head()
# print(df_head)
# print(df_head.groupby("Age").sum())
# print(df_head["Outcome"].value_counts())
# print(df_head.groupby("Age").mean())
# print(df_head.loc[1])
# print(df_head.loc[1])
# df_head.sort_values(["Age", "Pregnancies"], ascending=[False, True], inplace=True)
# print(df_head)
# print(df_head.isnull())
# print(df_head.dropna())
# print(df_head.fillna(0))
