        j = 0
        result = 0

        while j < len(nums):

            freq[nums[j]] = freq.get(nums[j], 0) + 1

            while freq[nums[j]] > k:
                freq[nums[i]] -= 1
                i += 1

            length = j - i + 1

            if length > result:
                result = length

            j += 1
        i = 0

        freq = {}
class Solution:
    def maxSubarrayLength(self, nums, k):

        return result
