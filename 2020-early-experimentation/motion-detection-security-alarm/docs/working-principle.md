# ⚙ Working Principle

The Motion Detection Security Alarm system continuously monitors environmental movement using a PIR motion sensor.

---

# 🚶 Motion Detection

The PIR sensor detects infrared changes caused by nearby human movement.

### No Motion Detected
- Security system remains idle
- Alert outputs remain OFF

### Motion Detected
- Arduino processes sensor signal
- Buzzer activates
- LED alert triggers
- Intrusion detection workflow executes

---

# 🧠 Embedded Security Workflow

```txt
Environmental Motion
          ↓
     PIR Sensor
          ↓
  Arduino Processing
          ↓
   Security Logic
          ↓
 Emergency Alert System
```

The system demonstrates basic embedded surveillance and intrusion detection concepts.
