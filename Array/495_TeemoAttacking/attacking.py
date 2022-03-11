class Solution:
    def findPoisonedDuration(self, timeSeries: List[int], duration: int) -> int:
        if not timeSeries:
            return 0
        
        dura = 0
        lastTime = 0
        for i, t in enumerate(timeSeries):
            if i < len(timeSeries) - 1:
                dura = timeSeries[i+1] - t
            else:
                dura = duration
            if dura > duration:
                lastTime += duration
            else:
                lastTime += dura
        return lastTime
