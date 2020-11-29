import sqlite3

db = sqlite3.connect('covid.db')
cursor = db.cursor()

sql = 'SELECT CityMun, COUNT(CaseCode) FROM CovidCases GROUP BY CityMun'
data = cursor.execute(sql).fetchall()
for city, cases in data:
	print(city, ':', cases)

cursor.close()