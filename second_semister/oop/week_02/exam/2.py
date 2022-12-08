from requests import get
import datetime as dt
from threading import Timer

city = "khulna"


def weather_data():
    def weather_data_update():
        key = "30d4741c779ba94c470ca1f63045390a"
        res = get(
            f"https://api.openweathermap.org/data/2.5/weather?q=khulna&units=imperial&APPID={key}")

        def fahrenheit_to_celsius(f):
            celsius = (f - 32)*5/9
            return celsius
        weather_data_ = res.json()
        weather_status = weather_data_["weather"][0]
        sky_status = weather_status["description"]
        main = weather_data_['main']
        temp_fahrenheit = main['temp']
        sunrise_time = dt.datetime.utcfromtimestamp(
            weather_data_['sys']['sunrise'] + weather_data_['timezone'])
        sunset_time = dt.datetime.utcfromtimestamp(
            weather_data_['sys']['sunset'] + weather_data_['timezone'])
        print(
            f'Temparature in {city} : {round(fahrenheit_to_celsius(temp_fahrenheit), 2)}°C')
        print(f'Sunrise in {city} {sunrise_time} ')
        print(f'Sunset in {city} {sunset_time} ')
        print(f'Genaral Wather in {city} {sky_status} ')

    def set_interval(func, sec):
        def func_wrapper():
            set_interval(func, sec)
            func()
        t = Timer(sec, func_wrapper)
        t.start()
        return t

    weather_data_update()
    set_interval(weather_data_update, 60 * 30)


weather_data()
