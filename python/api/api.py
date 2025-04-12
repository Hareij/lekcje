import requests
import json

url = "https://api.open-meteo.com/v1/forecast"
params = {"latitude": 52.23, "longitude": 21.01, "current_weather": True}

response = requests.get(url, params=params)

res = json.loads(response.text)

print(res["current_weather"]["temperature"])
