"""
Step:
1. input/listen
2. process
3. output
"""
import os
from playsound import playsound
from gtts import gTTS
import speech_recognition as sr
import pyttsx3
from googletrans import Translator

r = sr.Recognizer()
translator = Translator()


class ChartBot:
    def __init__(self):
        self.language = "bn"
        self.greet_words = ["hi", "hello", "hey", "yo"]
        self.bye_words = ["bye", "bye-bye", "allah hafiz", "tata"]
        # self.text_to_voice("বেডা যা বলবে তাড়াতাড়ি বল, মাথাটা এমনি খারাপ")

    def listen(self):
        try:
            with sr.Microphone() as source2:
                r.adjust_for_ambient_noise(source2, duration=0.2)
                print("listen...")
                audio = r.listen(source2)
                cmd = r.recognize_google(audio)
                cmd = cmd.lower()
                self.decide(cmd)
        except sr.RequestError as e:
            print(f"Could not request results : {e}",)
        except sr.UnknownValueError:
            print("unknown error occured")

    def decide(self, cmd):
        print(cmd)
        broken_words = cmd.split(" ")
        for w in broken_words:
            if w in self.greet_words:
                text = "আলহামদুলিল্লাহ আমি ভালো আছি"
                print(w)
                self.output(text)
            elif w in self.bye_words:
                text = "আচ্ছা যা পরে কথা হবে"
                self.output(text)

    def output(self, text):
        self.text_to_voice(text)

    def text_to_voice(self, text):
        voice_file_name = "say.mp3"
        voice = gTTS(text=text, lang=self.language, slow=False)
        voice.save(voice_file_name)
        playsound(voice_file_name, True)
        os.remove(voice_file_name)


c = ChartBot()

while 1:
    c.listen()
