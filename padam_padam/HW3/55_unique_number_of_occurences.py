'''55. Unique Number of Occurrences'''
class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        num_freq = dict()

        for num in arr:
            if num not in num_freq:
                num_freq[num] = 1
            else:
                num_freq[num] += 1

        freq = list(num_freq.values())
        unique_freq = set(freq)

        if len(unique_freq) == len(freq): # so this is how to check whether there are repeated values!
            return True
        else:
            return False