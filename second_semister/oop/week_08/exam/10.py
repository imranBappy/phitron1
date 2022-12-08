class Subscriber:
    def __init__(self):
        self.__observer_for_subscriber = []
        self.__observer_for_unsubscriber = []

    def subscribe(self, observer):
        self.__observer_for_subscriber.append(observer)

    def unsubscribe(self, observer):
        self.__observer_for_unsubscriber.append(observer)

    def subscribe_channel_name(self, channel):
        self.sub_notify(channel)

    def unsubscribe_channel_name(self, channel):
        self.unsub_notify(channel)

    def sub_notify(self, channel):
        for observer in self.__observer_for_subscriber:
            observer.subs_cribe(channel)

    def unsub_notify(self, channel):
        for observer in self.__observer_for_unsubscriber:
            observer.unsubs_cribe(channel)


class User:
    def __init__(self, name) -> None:
        self.name = name

    def subs_cribe(self, channel):
        print(f'{self.name}: you Subscribe the "{channel}" channel!')

    def unsubs_cribe(self, channel):
        print(f'{self.name}: you UnSubscribe the "{channel}" channel!')


people = Subscriber()

Rakib = User("Rakib Hasan")
Mehedi = User("Mehedi hasan")
Rana = User("Rana")

Bappy = User("Bappy")
Dolor = User("Dolor")

people.subscribe(Rakib)
people.subscribe(Mehedi)
people.subscribe(Rana)

people.unsubscribe(Bappy)
people.unsubscribe(Dolor)

people.subscribe_channel_name("Programming Hero")
print()
people.unsubscribe_channel_name("Code with Imran")


"""
Definition of the Observer:

Observer is a behavioral design pattern that lets us define a subscription mechanism to notify multiple objects about any events that happen to the object they’re observing.

Explanation of my code:
I have done the same things in the above code, I have created two class Subscriber and User. And in Subscriber class I made few method like subscribe and unsubscribe for take user subscription. Also subscribe_channel_name and unsubscribe_channel_name for making channel. Also sub_notify() and unsub_notify() for notified Subscription user and Unsubscription user. 

And in User class I made two method like subs_cribe() and unsubs_cribe() for give update a user. 

And lastly I have created people object for Subscriper class, and some more object for User class.

"""
