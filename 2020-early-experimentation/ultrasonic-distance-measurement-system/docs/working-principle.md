# ⚙ Working Principle

The Ultrasonic Distance Measurement System uses ultrasonic wave reflection for object-distance calculation.

---

# 📏 Distance Measurement

The HC-SR04 sensor emits ultrasonic pulses toward nearby objects.

### Monitoring Workflow
- Ultrasonic pulse transmitted
- Echo reflected from object
- Arduino measures return time
- Embedded logic calculates distance

---

# 🧠 Embedded Monitoring Workflow

```txt
Object Detection
        ↓
Ultrasonic Sensor
        ↓
 Arduino Processing
        ↓
 Distance Calculation
        ↓
 Monitoring Output
```

The system demonstrates basic ultrasonic sensing and real-time embedded measurement concepts.
