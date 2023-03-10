# NOTE ON FLASHING THE FIRMWARE:

The firmware for the Atmel chip used for USB on the Mighty Board is the same as the Arduino Mega's, but it doesn't do an automatic reset. If you want the printer to reset on DTR you will need to flash it with the firmware for the Arduino Mega.

### Use with all nozzle settings

- Build plate shape: Rectangular
- Origin at center
- Heated bed
- G-code flavor: Marlin

## Left Nozzle

Number of Extruders: 1

- X (Width) 211
- Y (Depth) 161
- Z (Heigth) 150

Extruder 1 -
Nozzle size: 0.4
Compatible material diameter: 1.75
Nozzle offset X: -34
Nozzle offset Y: 0
Cooling Fan Number:0

```gcode
;START G-CODE;
M104 S{material_print_temperature}
M140 S{material_bed_temperature}
G28
T1
G1 X-110 Y-70 Z30 F4800 ; move to wait position left hand side of the table
M104 S{material_print_temperature}
M190 S{material_bed_temperature}
M109 S{material_print_temperature}
G92 E0
G1 Z0.4 F1800
G1 E10 F300 ; purge nozzle
G1 X-67 Y-70 E25 F300 ; purge nozzle
G1 X-67 Y-70 Z0.15 F1200 ; slow wipe
G1 X-67 Y-70 Z0.5 F1200 ; lift
G92 E0
;START G-CODE;

;END G-CODE;
G1 X150 Y75 Z150 F1000 ; send Z axis to bottom of machine
M140 S0; cool down HBP
M104 T0 S0 ; cool down right extruder
M104 T1 S0 ; cool down left extruder
M127 ; stop blower fan
M18 ; disable stepper
;END G-CODE;
```

## PID Process

#define DEFAULT_Kp 24.53
#define DEFAULT_Ki 1.57
#define DEFAULT_Kd 95.95

m106 s255
m303 E0 S205 C10
M301 p24.53 i1.57 d95.95
M500

m303 E-1 S60 C5
M304 p168.62 i31.67 d598.53
M500
M503
