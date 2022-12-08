import googletrans
from googletrans import Translator
# print(googletrans.LANGUAGES)
# translator = Translator()

# translated_text = translator.translate('안녕하세요.')
# print(translated_text.text)

# translated_text = translator.translate('안녕하세요.', dest='ja')
# print(translated_text.text)

# translated_text = translator.translate('veritas lux mea', src='la')
# print(translated_text.text)

text1 = "My name is Imran"

text3 = "আমার নাম ইমরান"
translator = Translator()


dt1 = translator.detect(text1)
print(dt1)
dt3 = translator.detect(text3)
print(dt3)

bd_text = translator.translate(text=text1, dest="bn")
print(bd_text.text)
