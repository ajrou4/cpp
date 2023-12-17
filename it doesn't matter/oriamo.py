import requests
import json
import time

url = "https://ma.oraimo.com/green-friday/spin-to-win/luck.php?site=ma"

# ANSI color codes
RED = '\033[0;31m'
RESET = '\033[0m'

while True:
    # Make a GET request and store the JSON response in a variable
    response = requests.get(url).json()

    # Add a condition to break out of the loop if needed
    if response == {"status": 1, "message": "error,please try again!"}:
        print("Error response received. Exiting the loop.")
        break

    # Parse the JSON response and extract the "prize" value
    prize = response.get('data', {}).get('prize')

    # Check if the prize is not equal to any of the specified values
    if prize in ["Cadeau AirBuds 3", "Cadeau FreePods 3C"]:
        print("{}Breaking loop. Prize received: {}, response: {} {}".format(RED, prize, response, RESET))
        break

    # Optionally, add a sleep to avoid consuming too much CPU
    time.sleep(0.01)
    print("Response received: {}".format(response))

