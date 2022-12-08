import ctypes
from save_random_img import img_path
wallpaper = img_path()
ctypes.windll.user32.SystemParametersInfoW(20, 0, wallpaper, 3)
