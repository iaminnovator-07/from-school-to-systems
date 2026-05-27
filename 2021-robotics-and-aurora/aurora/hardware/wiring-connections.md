# 🌌 System Architecture

```txt
Power Supply
      ↓
 Arduino UNO
      ↓
 SD Card Module
      ↓
Audio File Access
      ↓
 Speaker Output
```

---

# 🔌 Wiring Connections

## SD Card Module

| SD Card Module Pin | Arduino Connection |
|---|---|
| VCC | 5V |
| GND | GND |
| MISO | D12 |
| MOSI | D11 |
| SCK | D13 |
| CS | D10 |

---

## Speaker Module

| Speaker Pin | Arduino Connection |
|---|---|
| VCC | 5V |
| GND | GND |
| SIGNAL | D9 |

---

## Power Connections

| Component | Connection |
|---|---|
| Arduino UNO | USB / External Power |
| Speaker Module | 5V |
| SD Card Module | 5V |

---

# ⚡ Embedded Workflow

```txt
Power ON
    ↓
Arduino Initialization
    ↓
SD Card Audio Access
    ↓
Stored Voice Playback
    ↓
Speaker Output
```
