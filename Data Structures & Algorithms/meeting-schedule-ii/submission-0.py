"""
Definition of Interval:
class Interval(object):
    def __init__(self, start, end):
        self.start = start
        self.end = end
"""

class Solution:
    def minMeetingRooms(self, intervals: List[Interval]) -> int:
        starts = sorted([i.start for i in intervals])
        ends = sorted([i.end for i in intervals])

        result = 0;
        count = 0;
        start_p = 0;
        end_p = 0;
        while start_p < len(intervals):
            if starts[start_p] < ends[end_p]:
                count += 1;
                start_p += 1;
            else:
                count -= 1;
                end_p += 1;
            result = max(count, result)
        
        return result

        