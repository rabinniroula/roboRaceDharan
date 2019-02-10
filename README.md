# roboRaceDharan
# Author: Rabin Niroula, Purwanchal University

Use this library to program an arduino controlled vehicle with 4 or more wheels using l298n, l293d or other H-bridge motor drivers.

Functions:
  BOT(int, int, int, int, int, int, int, int) # Constructor of the BOT class. Initializes the input pins for putting out the high or low signal.
  _forward() # Moves the Bot forward.
  _backward() # Moves the Bot backward.
  _left() # Moves the Bot left.
  _right() #Moves the Bot right.
  _freeze() # Stops the motors of the Bot.
  _getState() # returns an integer in accordance to the state of the Bot from an enumerated data type. Returns 0:forward, 1:backward, 2:left, 3:right, 4:freeze.
  ############################# ALL THE FUNCTIONS ARE PRIVATE ####################################################################################
  
Variables:
  public enum State{forward, backward, left, right, freeze} _state
