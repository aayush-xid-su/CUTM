
# Phase 3: Data Cleaning and Preprocessing

## 3.1 Introduction

Data cleaning and preprocessing is an important stage of the Cyberattack Data Analysis and Visualization Using Python project.

The purpose of this phase was to identify and handle data quality issues in the CIC-IDS2017 Wednesday working-hours dataset before performing Exploratory Data Analysis (EDA).

The original dataset contained missing values, infinite values, invalid negative values, duplicate records, and a timestamp column stored as text.

Python and Pandas were used to clean and prepare the dataset while preserving the original data.

### Dataset Information

- **Dataset:** CIC-IDS2017
- **File:** Wednesday-workingHours.pcap_ISCX.csv
- **Original Records:** 692,703
- **Original Features:** 85
- **Programming Language:** Python
- **Libraries:** Pandas, NumPy

---

## 3.2 Creating a Working Copy

The original dataset was preserved by creating a separate working DataFrame named `df_clean`.

```python
df_clean = df.copy()
```

All preprocessing operations were performed on `df_clean`, ensuring that the original DataFrame remained unchanged.

---

## 3.3 Standardizing Column Names

Some column names contained unnecessary leading or trailing spaces.

These spaces were removed to make column names consistent and easier to access.

```python
df_clean.columns = df_clean.columns.str.strip()
```

This prevented errors when accessing columns using their names.

---

## 3.4 Missing Value Analysis

The dataset was examined to identify missing values.

The initial analysis identified:

- Total missing values: 1,008
- Affected feature: `Flow Bytes/s`
- Affected records: 1,008

The missing values were associated with flow-rate calculations.

After further preprocessing, the missing-value counts increased because invalid and infinite values were also converted into missing values.

### Missing Values After Cleaning

| Feature | Missing Values |
|---|---:|
| Flow Duration | 21 |
| Flow Bytes/s | 1,313 |
| Flow Packets/s | 1,318 |
| **Total Missing Cells** | **2,652** |

The number of rows containing at least one missing value was 1,318.

### Missing Value Patterns

The missing-value combinations were investigated.

| Flow Duration | Flow Bytes/s | Flow Packets/s | Records |
|---|---|---|---:|
| Not Missing | Missing | Missing | 1,297 |
| Missing | Missing | Missing | 16 |
| Missing | Not Missing | Missing | 5 |

The analysis showed that all 1,297 zero-duration records had missing values in both flow-rate features.

The remaining 21 records had invalid negative flow-duration values, which were later converted into missing values.

### Missing Values by Traffic Label

| Traffic Label | Affected Records | Affected Percentage |
|---|---:|---:|
| BENIGN | 369 | 0.0839% |
| DoS Hulk | 949 | 0.4107% |
| DoS GoldenEye | 0 | 0.0000% |
| DoS Slowhttptest | 0 | 0.0000% |
| DoS slowloris | 0 | 0.0000% |
| Heartbleed | 0 | 0.0000% |

Missing values were retained instead of replacing them with zero because zero and missing values represent different meanings.

---

## 3.5 Identification of Infinite Values

Infinite values were checked in the numerical features.

The initial analysis identified:

| Feature | Infinite Values |
|---|---:|
| Flow Bytes/s | 289 |
| Flow Packets/s | 1,297 |
| **Total** | **1,586** |

These infinite values were associated with zero-duration flows.

Since flow-rate calculations involve division by flow duration, a zero duration can produce undefined or infinite rate values.

The infinite values were replaced with `NaN`.

```python
df_clean.replace([np.inf, -np.inf], np.nan, inplace=True)
```

This preserved the records while preventing infinite values from affecting statistical calculations.

---

## 3.6 Duplicate Record Analysis

The dataset was checked for exact duplicate records.

Initial results:

- Duplicate groups: 17
- Total records involved in duplicate groups: 23

The duplicate records belonged to the following traffic categories:

| Traffic Label | Duplicate Records |
|---|---:|
| BENIGN | 21 |
| DoS Hulk | 2 |
| **Total** | **23** |

The duplicate records were identical across all 85 columns.

After investigation, exact duplicate rows were removed while retaining the first occurrence.

```python
df_clean = df_clean.drop_duplicates(keep="first").copy()
```

Results:

- Duplicate rows before removal: 17
- Duplicate rows after removal: 0
- Records removed: 17

---

## 3.7 Identification of Invalid Negative Values

Selected numerical features were examined for negative values.

Initial findings:

| Feature | Negative Values |
|---|---:|
| Flow Duration | 21 |
| Total Fwd Packets | 0 |
| Total Backward Packets | 0 |
| Total Length of Fwd Packets | 0 |
| Total Length of Bwd Packets | 0 |
| Fwd Packet Length Max | 0 |
| Fwd Packet Length Min | 0 |
| Bwd Packet Length Max | 0 |
| Bwd Packet Length Min | 0 |
| Flow Bytes/s | 16 |
| Flow Packets/s | 21 |

All 21 records with negative flow duration belonged to the BENIGN traffic category.

The negative values were treated as invalid measurements and replaced with `NaN`.

```python
features_to_clean = [
    "Flow Duration",
    "Flow Bytes/s",
    "Flow Packets/s"
]

for column in features_to_clean:
    df_clean.loc[df_clean[column] < 0, column] = np.nan
```

No records were deleted because of these invalid numerical values.

---

## 3.8 Timestamp Conversion

The `Timestamp` column was initially stored as a string.

The timestamp values followed the format:

`DD/MM/YYYY HH:MM`

The column was converted into Pandas datetime format.

```python
df_clean["Timestamp"] = pd.to_datetime(
    df_clean["Timestamp"],
    format="%d/%m/%Y %H:%M",
    errors="coerce"
)
```

Results:

- Timestamp conversion errors: 0
- Earliest timestamp: 2017-07-05 01:00:00
- Latest timestamp: 2017-07-05 12:59:00
- Final data type: datetime64

Converting the timestamp makes it possible to perform time-based traffic analysis and visualization in later phases.

---

## 3.9 Handling Invalid Numerical Values

Infinite values and invalid negative values were handled together.

The following operations were performed:

1. Positive and negative infinity values were replaced with `NaN`.
2. Negative `Flow Duration` values were replaced with `NaN`.
3. Negative `Flow Bytes/s` values were replaced with `NaN`.
4. Negative `Flow Packets/s` values were replaced with `NaN`.

After cleaning:

| Feature | Missing Values |
|---|---:|
| Flow Duration | 21 |
| Flow Bytes/s | 1,313 |
| Flow Packets/s | 1,318 |

All infinite values and negative values in these three features were eliminated.

---

## 3.10 Final Duplicate Removal

After identifying exact duplicate rows, 17 repeated records were removed.

The first occurrence of each duplicate group was retained.

The dataset shape changed from:

- Before duplicate removal: 692,703 rows and 85 columns.
- After duplicate removal: 692,686 rows and 85 columns.

No features were removed.

---

## 3.11 Final Data Validation

After all cleaning operations, the dataset was checked again to verify its quality.

### Final Validation Results

| Validation | Result |
|---|---:|
| Final Records | 692,686 |
| Final Features | 85 |
| Remaining Duplicate Records | 0 |
| Remaining Infinite Values | 0 |
| Negative Flow Duration Values | 0 |
| Negative Flow Bytes/s Values | 0 |
| Negative Flow Packets/s Values | 0 |
| Total Missing Cells | 2,650 |
| Timestamp Data Type | datetime64[us] |

All validation checks passed.

The remaining missing values were intentionally preserved for appropriate handling during future analysis or machine learning preprocessing.

---

## 3.12 Final Traffic Label Distribution

After duplicate removal, the traffic label distribution was:

| Traffic Label | Number of Records |
|---|---:|
| BENIGN | 440,015 |
| DoS Hulk | 231,072 |
| DoS GoldenEye | 10,293 |
| DoS slowloris | 5,796 |
| DoS Slowhttptest | 5,499 |
| Heartbleed | 11 |
| **Total** | **692,686** |

All six traffic categories were preserved after cleaning.

The dataset contains a significant imbalance between BENIGN and attack traffic categories, which will be examined further during Exploratory Data Analysis.

---

## 3.13 Saving the Cleaned Dataset

After preprocessing and validation, the cleaned dataset was saved as a compressed CSV file.

```python
df_clean.to_csv(
    "../Dataset/Wednesday_Cleaned.csv.gz",
    index=False,
    compression="gzip"
)
```

### Output File

`Wednesday_Cleaned.csv.gz`

The original dataset was not overwritten.

The cleaned dataset was stored separately in the `Dataset` directory.

---

## 3.14 Verification of the Saved Dataset

The saved dataset was loaded again to verify that it was stored correctly.

The following checks were performed:

1. Dataset dimensions.
2. Column names.
3. Missing-value count.
4. Traffic label distribution.

### Verification Results

| Verification | Result |
|---|---|
| Original and reloaded shapes match | True |
| Column names match | True |
| Missing-value counts match | True |
| Traffic label distributions match | True |
| Final verification | SUCCESS |

The reloaded dataset contained 692,686 records and 85 columns, matching the cleaned DataFrame.

---

## 3.15 Conclusion

Phase 3 successfully completed the cleaning and preprocessing of the CIC-IDS2017 Wednesday working-hours dataset.

The dataset was examined for missing values, infinite values, invalid negative values, duplicate records, and timestamp data type issues.

Invalid numerical values were converted into missing values rather than deleting entire records. Exact duplicate records were removed, and the timestamp column was converted into datetime format.

The final cleaned dataset contains **692,686 records and 85 features**. It has no duplicate rows, no infinite values, and no remaining negative values in the three corrected numerical features.

The cleaned dataset was saved separately as `Wednesday_Cleaned.csv.gz` and successfully verified after reloading.

This prepared dataset will be used in the next phase, **Phase 4: Exploratory Data Analysis (EDA)**, to understand traffic distributions, attack categories, network flow characteristics, and relationships between features.
