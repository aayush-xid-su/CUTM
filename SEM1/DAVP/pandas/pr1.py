import pandas as pd

# Load the dataset
df = pd.read_csv("/home/ayushhh/CUTM/SEM1/DAVP/IRIS.csv")

# Display the first five rows
print("FIRST FIVE ROWS")
display(df.head())

# Display dataset dimensions
print("\nDATASET SHAPE")
print(df.shape)

# Display column names
print("\nCOLUMN NAMES")
print(df.columns.tolist())

# Display data types and non-null counts
print("\nDATASET INFORMATION")
df.info()

# Count missing values
print("\nMISSING VALUES")
print(df.isnull().sum())

# Count duplicate rows
print("\nDUPLICATE ROWS")
print(df.duplicated().sum())

# Count species
print("\nSPECIES COUNTS")
print(df["Species"].value_counts())

# Display numerical statistics for flower measurements
print("\nMEASUREMENT STATISTICS")
display(df[measurement_columns].describe())