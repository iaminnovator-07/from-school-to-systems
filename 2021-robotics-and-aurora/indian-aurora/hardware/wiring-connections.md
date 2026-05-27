# 🔌 Wiring Connections

## Bluetooth Module

| Bluetooth Pin | Arduino Connection |
|---|---|
| VCC | 5V |
| GND | GND |
| TX | RX |
| RX | TX |

---

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

## PAM8403 Amplifier

| PAM8403 Pin | Connection |
|---|---|
| VCC | Battery Positive |
| GND | GND |
| L/R Input | Audio Module Output |
| Speaker Output | Speaker Module |

---

## Power System

| Component | Connection |
|---|---|
| Rechargeable Batteries | Power Supply |
| Charging Port | Battery Charging Circuit |
| Arduino UNO | Embedded Controller Power |

---

# ⚡ Embedded Workflow

```txt
Mobile App / User Interaction
            ↓
    Bluetooth Communication
            ↓
      Arduino Processing
            ↓
     Audio File Access
            ↓
    PAM8403 Amplification
            ↓
        Speaker Output
