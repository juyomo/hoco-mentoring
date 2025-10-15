'''39. H-index'''
class Solution:
    def hIndex(self, citations: List[int]) -> int:
        # I thought using stack at first and got so lost to build the logic, but found out sorting makes the problem much easier. Got a new insight!

        # sort citations in desceding order
        citations.sort(reverse=True)

        # try each possible h-index value from largest to smallest
        for h in range(len(citations), 0, -1):
            if citations[h-1] >= h: # it should be [h-1] because of 0-based indexes.
                return h
        
        return 0

# Here's how the code works with the input citations = [3, 0, 6, 1, 5]

# Step 1. sort the input in descending order
# => [6, 5, 3, 1, 0]

# Step 2. check each possible h-index value from larget to smallest
# our len(citations) is 5, so we start from h = 5

# h = 5 -> is citations[4] >= 5?, i.e., is 0 >= 5?, no!
# h = 4 -> is citations[3] >= 4?, i.e., is 1 >= 4?, no!
# h = 3 -> is citations[2] >= 3?, ie.., is 3 >= 3?, yes!
# thus we return h = 3, whch means we have three papers with at least three citations.
# (note: we don't care about 6, 5 in our sorted citations because the h = 3 naturally leads us to conclude those two papers(6 and 5) have at least three citations by themselves as can be seen in the sorted array.)
# else we return zero