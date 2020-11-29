import csv
import sqlite3

# Create database
open('covid.db', 'w').close()
db = sqlite3.connect('covid.db')
cursor = db.cursor()

# Create table
cursor.execute(
	'''CREATE TABLE CovidCases (
		CaseCode TEXT, Age INT, Sex TEXT, DateRepConf DATE, DateDied DATE, DateRecover DATE, 
		Region TEXT, Province TEXT, CityMun TEXT, SymptomType TEXT, QuarantineStatus TEXT)''')

with open('DOH COVID Data Drop_ 20200430 - 05 Case Information.csv') as file:
	# Create DictReader
	reader = csv.DictReader(file)

	# Iterate over the CSV file
	for row in reader:
		# Insert case record
		sql = '''INSERT INTO CovidCases (CaseCode, Age, Sex, DateRepConf, DateDied, DateRecover, Region, Province, CityMun, 
			SymptomType, QuarantineStatus) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)'''
		caseData = (row['CaseCode'], row['Age'], row['Sex'], row['DateRepConf'], row['DateDied'], row['DateRecover'],
			row['RegionRes'], row['ProvRes'], row['CityMunRes'], row['HealthStatus'], row['Quarantined'])
		cursor.execute(sql, caseData) 		
db.commit()
cursor.close()