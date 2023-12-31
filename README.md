# Blackjack

This Blackjack program utilizes vectors as its primary data structure to create a functional gameplay experience. Vectors are modified throughout the program using functions within various classes and are used to represent the deck and hands of the player and dealer. I initially thought about using a linked list for this purpose, but shuffling items in a linked list proved to be more challenging than shuffling the items in the vector. Each vector is made up of cards, which are defined as a class in Card.cpp. Enumeration declarations were used to specify the suit and value of each card. Functions were needed to convert the values within the enumeration declaration into printable strings, and an additional function was needed to convert the numerical strings into int data types for the purpose of tracking the total value of a player/dealer's hand. The function used to calculate the score is also used to determine the value of the ace in the player/dealer's hand. If the sum of the card values in a hand is less than 12, aces have a value of 11. They are changed to a value of 1 if the sum is above 12, preventing an overdraw. 

The game can be played by simply running main_1 in the build folder. Prompts will then be given to guide the player on how to start and end their turn. 

One of the main goals of this project was to use various classes across multiple .cpp and .h files within the code folder to create a streamlined algorithm for gameplay logic within main_1.cpp. Using class functions across multiple files allowed me to keep the code within main_1.cpp short and readable, and was a useful exercise in tracking how functions in different locations relate to one another. 

Here is a link to a video demonstrating how to run the program:

https://www.youtube.com/watch?v=knGz2UnspxA
