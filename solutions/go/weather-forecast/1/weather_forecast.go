// Package weather provides tools to get weather forecast.
package weather

var (
	// CurrentCondition represents the current weather conditions in string.
	CurrentCondition string
	// CurrentLocation represents the current location in string.
	CurrentLocation string
)

// Forecast returns a string that
// represents the forecast of the current location and condition.
func Forecast(city, condition string) string {
	CurrentLocation, CurrentCondition = city, condition
	return CurrentLocation + " - current weather condition: " + CurrentCondition
}
