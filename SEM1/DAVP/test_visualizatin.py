import matplotlib.pyplot as plt

students = ["aysuh", "priyanshu", "sourav", "siba"]
marks = [95, 92, 87, 83]

plt.bar(students, marks)

plt.title("students Marks")
plt.xlabel("Students")
plt.ylabel("Marks")

plt.show()