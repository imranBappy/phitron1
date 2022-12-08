from requests import get
from json import loads
ramdom_api = "https://api.unsplash.com/photos/random/?client_id=UnFIUkhU0TFLxdIGW_cezT7WOsSVu_mNXPQ6-LXJ2RE"
dir_path = "C:/work/dev/phitron/second_semister/oop/week_02/autoRun/imgs/"


def img_path():
    res = get(ramdom_api)
    decode = res.content.decode('UTF-8')
    img_data = loads(decode)
    img_url = img_data["urls"]["raw"]
    title = img_data["id"]
    res = get(img_url)
    with open(f'{dir_path}/{title}.png', 'wb') as image:
        image.write(res.content)
        return f"{dir_path}/{title}.png"
