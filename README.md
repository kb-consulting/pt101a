LPA96 v2.0
22/08/2019 Kevin Bibby
-------------------------
changed to 4-layer PCB, and thermal improvements throughout, uses top planes and internal IN3 layer for VIN LED thermal dissipation, BOTTOM layer for GND LED driver IC dissipation
changed from dual LEDs to single LEDs (VLDx1232G), and reduced the number of LED drivers accordingly from 12 to 6
LED1-LED96 placed for zig-zag left-right pattern starting in bottom left of grid
renamed all files from tca to lpa96, and set schematic/layout titleblocks accordingly incl author names
resolved library issues and rescued parts, removed obsolete library parts - all parts are now either from default KiCAD5 libraries or from included project libraries
fixed all ERC and DRC (Electrical/Design Rule Check) errors, through various means incl component/pin tweaks
added 3D models for all parts (some estimates/representative due to source BOM not being available, P1 especially)
added example 14x14x14mm heatsink footprint to library & STEP model and added to board to improve 3D CAD output / render
renamed R_ON1,R_ERR1,R_FIN1 as R9,R10,R11 (best practice)
renamed RESET1 as SW1 and ON1,ERR1,FIN1 as LED97,LED98,LED99 (best practice)
changed C5 from 0805 to 1206 case size (better for 10uF), and added second of same bulk cap C12 for VCC on LED driver page, placed near LED drivers
added OSHW and ESD logos to board
moved P2 away from hole
changed name of pin8/9 from "RSV" to DAT1/DAT2 to match datasheet of guessed part
changed pin4 of regulator U2 manually to VCC net as symbol not made to include pin4
added copper keepout around resonator Y1
changed keepout near SDCARD to apply to copper planes too
changed footprint for TLC5941 (downloaded from TI official, via ultralibrarian, generated for IPC 'most'), plus changed pin29 (pad) to be solid connection
added pin29 for thermal pad to TLC5941 symbol (to match new footprint) and connected to GND
changed via size from 0.889mm/0.653mm to 0.8mm/0.4mm , better annular ring margin and more space for routing while still being plenty manufacturable
added soldermask 15mm squares to expose copper for 14mm heatsinks
added heading/annotation text on schematic page


LPA96 v1.1 ?? (previously called 'TCA96')
-------------------------
Version received at handover. Had thermal issues to resolve and required a change of LEDs and reduction of driver ICs.


LPA96 v1.0 ??
-------------------------
??

 LPA96 / 'TCA96' previously derived from original 24-well version.