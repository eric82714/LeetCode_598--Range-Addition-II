class Solution:
    def maxCount(self, m: int, n: int, ops: List[List[int]]) -> int:
        return min(i[0] for i in ops) * min(j[1] for j in ops) if ops else m * n
