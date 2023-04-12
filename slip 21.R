library(fivethirthyeight)
# Load the weather dataset
dataset = weather

# Select the columns by number
wind_speed <- weather[, 14]
temperature <- weather[, 15]

# Select the columns by name
wind_speed <- weather$WindSpeedMS
temperature <- weather$TemperatureC

# Make a scatter plot
plot(wind_speed, temperature, xlab = "Wind Speed", ylab = "Temperature")
