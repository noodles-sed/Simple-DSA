
def min_operations_to_zero(nums):
    n = len(nums)
    if n == 0:
        return 0

    values = sorted({x for x in nums if x > 0})
    ops = 0

    for v in values:
        i = 0
        while i < n:
            while i < n and nums[i] < v:
                i += 1
            if i >= n:
                break

            contains_v = False
            while i < n and nums[i] >= v:
                if nums[i] == v:
                    contains_v = True
                i += 1

            if contains_v:
                ops += 1

    return ops

# Example test
if __name__ == "__main__":
    arr = [3,1,2,1,3]
    print(min_operations_to_zero(arr))
