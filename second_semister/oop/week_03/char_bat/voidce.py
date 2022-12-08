
from gtts import gTTS
import os
from playsound import playsound

text = "থাকবো নাকো বদ্ধ ঘরে"

language = 'bn'
myobj = gTTS(text=text, lang=language, slow=False)
myobj.save("welcome.mp3")
# playsound("output.mp3", True)
