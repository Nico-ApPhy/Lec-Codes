import csv

with open('DOH COVID Data Drop_ 20200430 - 05 Case Information.csv') as file:
	# Create DictReader
	reader = csv.DictReader(file)

	# Open CSV file that contains the cases of a city
	with open('city.csv', 'w') as city:
		# Create writer
		writer = csv.writer(city)

		# Write header
		writer.writerow(['CaseCode', 'Age', 'HealthStatus', 'Quarantined'])

		# Iterave over the whole case file
		for row in reader:
			# If it's our city of interest
			if row['CityMunRes'] == 'City of Manila':
				# Write row
				writer.writerow([row['CaseCode'], row['Age'], row['HealthStatus'], row['Quarantined']])