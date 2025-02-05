# Sliding-Puzzle---LeetCode-in-cpp
📌 Problem: "Sliding Puzzle" (LeetCode Hard) Given a 2x3 board representing a sliding puzzle with numbers 1-5 and an empty cell represented as 0, return the minimum number of moves to reach the solved state [[1,2,3], [4,5,0]]. If impossible, return -1.

link https://leetcode.com/problems/sliding-puzzle/description/

...

# 💡 Solution Approach

✔️ Use BFS (Breadth-First Search) for shortest path.
✔️ Treat the board as a string state ("123450") and move the 0 to adjacent positions.
✔️ Use a queue & visited set to track states efficiently.

---

# ⏳ Time Complexity

BFS traversal: O(N!) (worst case for 2x3 grid ~ 720 states).
Efficient state pruning avoids unnecessary searches.

---

# 📧 Contact & Contribution

📩 surajpratap469@gmail.com
<br>
⭐ If you like this project, please star the repository! 🚀
