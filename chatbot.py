print("Bot: Hello! I am your simple chatbot 😊")

while True:
    user = input("You: ").lower().strip()

    if user == "hello":
        print("Bot: Hi there!")

    elif user == "how are you":
        print("Bot: I'm doing great!")

    elif user == "what is your name":
        print("Bot: I am DecodeBot 🤖")

    elif user == "bye":
        print("Bot: Goodbye! See you later 👋")
        break

    else:
        print("Bot: I didn't understand that.")