# ⚙ Working Principle

The Smart Street Lights system combines ambient light detection and motion sensing to simulate intelligent street-light automation.

---

# 🌗 Ambient Light Detection

The LDR sensor continuously monitors environmental brightness levels.

### Daytime Conditions
- Street lights remain OFF

### Nighttime Conditions
- System enters automation mode

---

# 🚶 Motion Detection

The IR sensor detects nearby movement.

When motion is detected during low-light conditions:
- LEDs automatically activate

When no motion is detected:
- LEDs remain OFF to conserve energy

---

# 🧠 Embedded Automation Workflow

```txt
Environmental Light
        ↓
    LDR Detection
        ↓
  Motion Detection
        ↓
 Arduino Processing
        ↓
 Intelligent Lighting
