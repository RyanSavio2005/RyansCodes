import pandas as pd

# Load the dataset
file_path = "C:\\Users\\DELL\\Downloads\\oil-spill.csv"  
df = pd.read_csv(file_path)

# Step 1: Identify and remove columns with a single unique value
single_value_cols = [col for col in df.columns if df[col].nunique() == 1]
df_cleaned = df.drop(columns=single_value_cols)

# Step 2: Identify columns with very few unique values (threshold: 5 unique values)
few_value_cols = [col for col in df_cleaned.columns if df_cleaned[col].nunique() <= 5]
print("Columns with very few unique values:", few_value_cols)

# Step 3: Remove columns with low variance (threshold: variance < 0.01)
low_variance_cols = df_cleaned.var()[df_cleaned.var() < 0.01].index.tolist()
df_cleaned = df_cleaned.drop(columns=low_variance_cols)

# Step 4: Identify and remove duplicate rows
df_cleaned = df_cleaned.drop_duplicates()

# Save the cleaned dataset
cleaned_file_path = "C:\\Users\\DELL\\Downloads\\cleaned_oil_spill.csv"
df_cleaned.to_csv(cleaned_file_path, index=False)

print(f"Data cleaning complete. Cleaned dataset saved as {cleaned_file_path}")
print(f"Removed {len(single_value_cols)} single-value columns and {len(low_variance_cols)} low-variance columns.")
print(f"Final dataset shape: {df_cleaned.shape}")