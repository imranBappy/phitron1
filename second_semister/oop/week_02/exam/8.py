def make_upper(text):
    return text.upper()


def make_lower(text):
    return text.lower()


def make_capital(text):
    return text.capitalize()


def test_script():
    status = True
    text = "Imran hossHn Bappy"
    up = make_upper(text)
    low = make_lower(text)
    cp = make_capital(text).split(" ")
    print(cp)
    for i in range(len(text)):
        if low[i] >= 'Z' and 'A' <= low[i]:
            assert False
        if up[i] >= 'z' and 'a' <= up[i]:
            assert False
    for i in cp:
        if i[0] >= 'z' and 'a' <= upi[0]:
            assert False
        for p in range(len(i)-1):
            if i[p] >= 'Z' and 'A' <= i[p]:
                assert False
    assert status


test_script()
