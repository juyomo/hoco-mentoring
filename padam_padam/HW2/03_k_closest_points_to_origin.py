import math

class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        points = sorted(points, key=lambda x : math.sqrt(x[0]**2 + x[1]**2))
        # ⬆️ orign is [0, 0], so we don't need to define the origin variable

        return points[:k]