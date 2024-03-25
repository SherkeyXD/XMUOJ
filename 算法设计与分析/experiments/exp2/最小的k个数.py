def quick_select(nums, k, start, end):
    if start == end:
        return nums[start]

    pivot = nums[start]
    left = start + 1
    right = end

    while True:
        while left <= right and nums[left] < pivot:
            left += 1
        while left <= right and nums[right] >= pivot:
            right -= 1
        if left <= right:
            nums[left], nums[right] = nums[right], nums[left]
        else:
            break

    nums[start], nums[right] = nums[right], nums[start]

    if k == right + 1:
        return nums[right]
    elif k < right + 1:
        return quick_select(nums, k, start, right - 1)
    else:
        return quick_select(nums, k, right + 1, end)


size, k = list(map(int, input().split()))
nums = list(map(int, input().split()))
end = nums.index(quick_select(nums, k, 0, size - 1))
print(" ".join(list(map(str, nums[: end + 1]))))
