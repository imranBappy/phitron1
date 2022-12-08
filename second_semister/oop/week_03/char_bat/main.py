import os
from playsound import playsound
from gtts import gTTS
import speech_recognition as sr
import pyttsx3
from googletrans import Translator

r = sr.Recognizer()
language = 'bn'
translator = Translator()


def en_to_bd(cmd):
    text = translator.translate(text=cmd, dest=language)
    return text.text


def text_to_voice(text):
    voice_file_name = "say.mp3"
    voice = gTTS(text=text, lang=language, slow=False)
    voice.save(voice_file_name)
    playsound(voice_file_name, True)
    os.remove(voice_file_name)


text_to_voice("বেডা যা বলবে তাড়াতাড়ি বল, মাথাটা এমনি খারাপ")


def Speak_to_text():
    while 1:
        try:
            with sr.Microphone() as source2:
                r.adjust_for_ambient_noise(source2, duration=0.2)
                print("listen...")
                audio = r.listen(source2)
                cmd = r.recognize_google(audio)
                cmd = cmd.lower()
                text_to_voice(cmd)
        except sr.RequestError as e:
            print(f"Could not request results : {e}",)
        except sr.UnknownValueError:
            print("unknown error occured")


Speak_to_text()
