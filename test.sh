#!/bin/bash

url="https://ma.oraimo.com/green-friday/spin-to-win/luck.php?site=ma"

# ANSI color codes
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
RESET='\033[0m'

while true; do
    # Make a GET request and store the JSON response in a variable
    response=$(curl -s "$url")

    # Add a condition to break out of the loop if needed
    if [ "$response" == '{"status":1,"message":"error,please try again!"}' ]; then
        echo "Error response received. Exiting the loop."
        break
    fi

    # Parse the JSON response using jq and extract the "prize" value
    prize=$(echo "$response" | jq -r '.data.prize')

    # Check if the prize is not equal to any of the specified values
    if [ "$prize" == "Cadeau AirBuds 3" ] || [ "$prize" == "Cadeau FreePods 3C" ]; then
        echo -e "${RED}Breaking loop. Prize received: $prize, response: $response ${RESET}"
        break;
    fi

    # Optionally, add a sleep to avoid consuming too much CPU
    sleep 0.01
    echo "Response received: $response"
done
