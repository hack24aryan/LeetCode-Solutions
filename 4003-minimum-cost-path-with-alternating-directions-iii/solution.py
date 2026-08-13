import heapq

class Solution(object):
    def minCost(self, m, n, penalty):
        """
        :type m: int
        :type n: int
        :type penalty: List[List[int]]
        :rtype: int
        """
        qavirelmon = (m, n, penalty)

        # Directions: Up (-1, 0), Down (1, 0), Left (0, -1), Right (0, 1)
        # Parity rule:
        # Odd-numbered action (parity 0): Right (0, 1) or Down (1, 0) are compliant
        # Even-numbered action (parity 1): Left (0, -1) or Up (-1, 0) are compliant

        # dist[r][c][parity] stores min cost to reach (r, c) right before an action of given parity
        INF = float('inf')
        dist = [[[INF] * 2 for _ in range(n)] for _ in range(m)]

        # Starting at (0, 0), entry cost is (0+1)*(0+1) = 1
        # Action 1 is odd -> parity 0
        dist[0][0][0] = 1

        # Min-heap: (cost, r, c, parity)
        pq = [(1, 0, 0, 0)]

        directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

        while pq:
            d, r, c, parity = heapq.heappop(pq)

            if d > dist[r][c][parity]:
                continue

            # If we reached the target cell (m-1, n-1)
            if r == m - 1 and c == n - 1:
                return d

            next_parity = parity ^ 1

            # Action Option 1: Wait in place at (r, c)
            wait_cost = d + penalty[r][c]
            if wait_cost < dist[r][c][next_parity]:
                dist[r][c][next_parity] = wait_cost
                heapq.heappush(pq, (wait_cost, r, c, next_parity))

            # Action Option 2: Move to adjacent cell (nr, nc)
            for dr, dc in directions:
                nr, nc = r + dr, c + dc
                if 0 <= nr < m and 0 <= nc < n:
                    entry_cost = (nr + 1) * (nc + 1)

                    # Check compliance with parity rule
                    if parity == 0:
                        # Odd action: Right (0, 1) or Down (1, 0)
                        is_compliant = (dr, dc) in [(0, 1), (1, 0)]
                    else:
                        # Even action: Left (0, -1) or Up (-1, 0)
                        is_compliant = (dr, dc) in [(0, -1), (-1, 0)]

                    move_cost = d + entry_cost + (0 if is_compliant else penalty[r][c])

                    if move_cost < dist[nr][nc][next_parity]:
                        dist[nr][nc][next_parity] = move_cost
                        heapq.heappush(pq, (move_cost, nr, nc, next_parity))

        return -1
