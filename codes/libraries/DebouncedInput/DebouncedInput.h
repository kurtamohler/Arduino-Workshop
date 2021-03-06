// Debounces inputs. See class method definitions for an
// explanation.

#include <Arduino.h>

class DebouncedInput {
public:
  // Initialize with the pin to debounce and the delay in microseconds
  // to apply to the input
  DebouncedInput(int pin, long debounceDelay);

  // Check if the state should be changed. This method must be called
  // multiple times within the debounce delay period.
  void update();

  // Get the debounced state of the pin
  bool getState();

  // True if state has changed since this method was last called
  bool stateHasChanged();
  
private:
  int pin;
  bool stateChanged;
  bool state;
  long debounceDelay;
  long lastChangeTime;
  bool lastReading;
};