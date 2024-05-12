import requests

def get_user_info(handle):
  """
  Fetches user information using the Codeforces API.

  Args:
      handle: The username of the Codeforces user.

  Returns:
      A dictionary containing user information or None if request fails.
  """
  url = f"https://codeforces.com/api/user.info?handles={handle}"
  response = requests.get(url)

  if response.status_code == 200:
    data = response.json()
    if data["status"] == "OK":
      user_info = data["result"][0]
      return user_info
    else:
      print(f"Error: {data['comment']}")
  else:
    print(f"Error: Request failed with status code {response.status_code}")
  return None

# Example usage
handle = "sakib62"
user_data = get_user_info(handle)

if user_data:
  print(f"Handle: {user_data['handle']}")
  print(f"Rating: {user_data['rating']}")
  print(f"Max Rating: {user_data['maxRating']}")
  print(f"Participation Rank: {user_data['rank']}")
  # ... access other available information from user_data dictionary
else:
  print("Failed to retrieve user information")
