| Concept | Pandas method | Purpose |
|---|---|---|
| Detect missing values | `df.isnull()` | Identifies missing values |
| Count missing values | `df.isnull().sum()` | Counts missing values per column |
| Count all missing values | `df.isnull().sum().sum()` | Returns the total missing count |
| Remove missing rows | `df.dropna()` | Removes rows containing missing values |
| Fill missing values | `df.fillna(value)` | Replaces missing values |
| Detect duplicates | `df.duplicated()` | Identifies repeated rows |
| Remove duplicates | `df.drop_duplicates()` | Removes exact duplicate rows |
| Rename columns | `df.rename(columns={...})` | Changes selected column names |
| Convert data types | `df.astype()` | Converts compatible values to specified types |
| Convert text to numbers | `pd.to_numeric()` | Parses numeric data |
| Standardise text | `df["column"].str.strip()` | Removes leading and trailing spaces |
| Replace values | `df.replace()` | Replaces specified values |
| Calculate quartiles | `.quantile(0.25)` / `.quantile(0.75)` | Calculates Q1 and Q3 |
| Detect potential outliers | IQR bounds | Flags values outside statistical thresholds |
| Save cleaned data | `df.to_csv()` | Exports a DataFrame to CSV |