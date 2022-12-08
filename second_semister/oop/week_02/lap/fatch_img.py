import requests
import json

url = "https://api.nasa.gov/planetary/earth/assets?lon=100.75&lat=1.5&date=2014-02-01&dim=0.15&api_key=DEMO_KEY"
response = requests.get(url)
content = response.content.decode('UTF-8')
data = json.loads(content)
img_url = data['url']
res = requests.get(img_url)
with open('apple.png', 'wb') as image:
    image.write(res.content)
