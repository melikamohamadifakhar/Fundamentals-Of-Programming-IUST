FILENAME = "children-per-woman-UN.csv"
def read_file_lines(file_name):
    file = open(file_name)
    entire_file = file.read()
    lines = entire_file.splitlines()
    lines = lines[1:]
    return lines
def get_country_max_rate(country, lines):
    max_rate = 0
    max_rate_year =0
    country = country.lower()
    for line in lines:
        line_lower = line.lower()
        if line.lower().find(country) >= 0 :
            country, year, rate = get_line_info(line)
            tokens = line.split(",")
            rate = float(tokens[3])
            year = int(tokens[2])
            if rate > max_rate:
                max_rate = rate
                max_rate_year = year
    return max_rate, max_rate_year
def get_line_info(line):
    tokens = line.split(",")
    country = tokens[0]
    year = int(tokens[2])
    rate = float(tokens[3])
    return country, year, rate
def get_all_countries_max(lines):
    result = {}
    for line in lines:
        country, year, rate = get_line_info(line)
        if country in result:
            _, current_rate = result[country]
            if rate > current_rate:
                result[country] = year, rate
        else:
            result[country] = year, rate
    return result

lines = read_file_lines(FILENAME)
result = get_all_countries_max(lines)
for key,value in result.items():
    print("{} {}".format(key, value))