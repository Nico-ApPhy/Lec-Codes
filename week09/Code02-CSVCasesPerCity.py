import csv

# For counting cases per city
cities = {}

with open('DOH COVID Data Drop_ 20200430 - 05 Case Information.csv') as file:
	# Create DictReader
	reader = csv.DictReader(file)

	# Iterate over CSV file
	for row in reader:
		city = row['CityMunRes']

		# Add the case to corresponding city count
		if city in cities:
			cities[city] += 1
		else:
			cities[city] = 1

# Print the cases of each city
for city, count in cities.items():
	print(city, count, sep=': ')
