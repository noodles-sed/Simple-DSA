# Minimum operations to make array zero

Given a non-negative integer array nums, in one operation you may pick any subarray [i, j]
and set all occurrences of the **minimum value in that subarray** to zero.

Return the **minimum number of operations** needed to convert entire array to all zeros.

## Approach

For each distinct value v > 0:
- Scan array and find contiguous segments where all elements ≥ v.
- If a segment contains v at least once, that segment needs **one** operation.

Total operations = sum of operations for all distinct positive values.
