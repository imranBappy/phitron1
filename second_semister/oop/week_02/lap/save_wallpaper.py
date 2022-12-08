# import PyWallpaper
# PyWallpaper.change_wallpaper(
#     'C:/work/dev/phitron/second_semister/oop/week_02/lap/wl.jpg')
import ctypes
wallpaper = "C:\\work\\dev\\phitron\\second_semister\\oop\\week_02\\lap\\wl.jpg"
ctypes.windll.user32.SystemParametersInfoW(20, 0, wallpaper, 3)
