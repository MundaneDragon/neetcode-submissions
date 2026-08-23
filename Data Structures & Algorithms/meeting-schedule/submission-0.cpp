
#include <algorithm>

/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        if (intervals.empty()) {
            return true;
        }

        std::sort(intervals.begin(), intervals.end(), [](Interval a, Interval b){
            return a.start < b.start;
        });

        for (auto i = 1; i < intervals.size(); i++) {
            if (intervals[i-1].end > intervals[i].start) {
                return false;
            }
        }

        return true;
    }
};
