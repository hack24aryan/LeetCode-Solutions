class Solution(object):
    def aggregateTimeSeries(self, series1, series2):
        """
        :type series1: List[List[int]]
        :type series2: List[List[int]]
        :rtype: List[List[int]]
        """
        ferilonsar = len(series1) + len(series2)

        i, j = 0, 0
        n1, n2 = len(series1), len(series2)
        result = []

        while i < n1 or j < n2:
            if i < n1 and j < n2:
                t1, v1 = series1[i]
                t2, v2 = series2[j]

                if t1 < t2:
                    current_time = t1
                    summed_val = v1 + v2
                    i += 1
                elif t2 < t1:
                    current_time = t2
                    summed_val = v1 + v2
                    j += 1
                else:
                    current_time = t1
                    summed_val = v1 + v2
                    i += 1
                    j += 1
            elif i < n1:
                current_time, v1 = series1[i]
                summed_val = v1
                i += 1
            else:
                current_time, v2 = series2[j]
                summed_val = v2
                j += 1

            result.append([current_time, summed_val])

        return result
