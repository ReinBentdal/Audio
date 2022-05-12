
#ifdef DEBUG
#define Warning_if(expr) \
  if (expr) { \
    elapsedMillis time; \
    while (Serial.available() == 0) { \
      if (time > 5000) { \
        time = 0; \
        Serial.print("WARNING: "); \
        Serial.print("Warning(" #expr ") in file " ); \
        Serial.print(__FILE__ ); \
        Serial.print(" line "); \
        Serial.println( __LINE__); \
      } \
    } \
    Serial.println("continuing.."); \
  }
#else
#define Warning(expr)
#endif