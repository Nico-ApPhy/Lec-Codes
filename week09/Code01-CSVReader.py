import csv

# Open CSV file
with open('DOH COVID Data Drop_ 20200430 - 05 Case Information.csv') as file:
	# Create DictReader
	reader = csv.DictReader(file)

	# Iterate over CSV file, printing each case
	for row in reader:
		print(row['CaseCode'], row['CityMunRes'])