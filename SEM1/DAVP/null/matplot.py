import matplotlib.pyplot as plt
day = [10, 20, 30, 40, 50]
month = [1, 2, 3, 4, 5]
colors = ["r", "g", "y", "b", "r"]
sizes = [100, 200, 300, 400, 500]
plt.scatter(day,month,color=colors,s=sizes,marker="*")
plt.title("scatter", color="r",fontsize=30)
plt.xlabel("day",color="g",fontsize=30)
plt.ylabel("month",color="y",fontsize=20)
plt.show()