# STM32 Solar PowerBank

![Status](https://img.shields.io/badge/Status-Completed-success)
![Platform](https://img.shields.io/badge/Platform-STM32F1-blue)
![Tools](https://img.shields.io/badge/Tools-STM32CubeIDE%20%7C%20KiCad-brightgreen)

Projekt inteligentnego PowerBanka sterowanego mikrokontrolerem z rodziny **STM32F1**, integrującego ładowanie fotowoltaiczne z zaawansowanym zarządzaniem energią.

## 📋 Opis Projektu

Urządzenie łączy funkcję magazynu energii (ogniwa 18650) z inteligentnym systemem sterowania. Wykorzystuje synchroniczną przetwornicę Buck do efektywnego obniżania napięcia oraz dedykowane kontrolery USB do bezpiecznego ładowania urządzeń zewnętrznych.



### Kluczowe parametry techniczne
* **Mikrokontroler:** STM32F1xx (zarządzanie PWM, pomiary ADC, komunikacja).
* **Wejście:** Obsługa paneli fotowoltaicznych i zewnętrznych źródeł DC.
* **Wyjście:** Porty USB sterowane przez układy TPS25810 oraz TPS2514.
* **Pomiary:** Monitorowanie prądu za pomocą wzmacniacza INA180A2.

## 📂 Struktura Projektu

Repozytorium jest podzielone na sekcje sprzętową, programową oraz dokumentacyjną:

```text
.
├── 📂 Dokumentacja_peryferiów  # Noty katalogowe i opisy układów (TPS, INA, LM)
├── 📂 Obudowa_Schemat          # Pliki projektowe obudowy i poglądowe schematy
├── 📂 PowerBank_KICAD          # Projekt PCB w programie KiCad
│   ├── 📂 production           # Pliki produkcyjne (Gerber, BOM, OZE_PowerBank)
│   └── 📂 backups              # Kopie zapasowe projektu elektroniki
└── 📂 STM_C                    # Warstwa oprogramowania (Firmware)
    └── 📂 PowerBank            # Główny projekt STM32CubeIDE
        ├── 📂 Core             # Kod źródłowy aplikacji (Inc, Src, Startup)
        ├── 📂 Drivers          # Biblioteki HAL i CMSIS
        └── 📂 Debug            # Pliki binarne i logi kompilacji
