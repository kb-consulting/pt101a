# LPA96 - 96 Well Light Plate Apparatus (LPA) PCB
### Derived from original Tabor Lab designs from Rice University, with thermal and other improvements
This version uses a single blue LED for each of the 96 wells, and aims to solve the thermal problems with the TaborLab 96well design (dual LED per well), which was itself derived from the original 24well design (The latest 24well design has since diverged, to what is now available on GitHub).  
This version has been redesigned by Kevin Bibby (https://www.linkedin.com/in/kevinbibby/), commissioned by Dr Jenny Molloy - University of Cambridge / Cambridge Open Bioeconomy Lab.  
  
Original 24well article: https://www.nature.com/articles/srep35363  
Latest 24well Github (including chassis and other firmware files): https://github.com/taborlab/LPA-hardware  

![PCB TOP](output/lpa96_top.png?raw=true)
![PCB BOTTOM](output/lpa96_bottom.png?raw=true)

LPA96 v2.1  
05/09/2019 Kevin Bibby  
-------------------------
- Added all part info from original 24well LPA 'Nature' article (Supplementary Information, Table S1).
- Part info uses "Description", "Manufacturer1", "MPN1", "Vendor1" and "SKU1" part fields in KiCAD.
- Added files necessary to work with Kitspace.org for sharing the design and ordering parts easily.
- changed BOM info to reflect new LED chosen for this 96well version
- changed BOM info for C5,C12 - chosen part for new 1206 case size (was 0805 in v1.1).
- changed P2 to 2x3way exact part (2x3way) rather than 40way breakable header.
- changed R15-R19 from 50k to 47k to match part in BOM
- changed P1 and P2 library part 3D models to match part from BOM
- Note: P1 fouls on nearby hole, issue from original LPA96 design only just discovered after correct part info added
- Fixed U2 SOT223 3D model to use modern STEP model instead of old .wrl
- Updated footprints to use KiCAD5 latest (some changed since v2.0 e.g. rounded rectangle pads for commodity C / R footprints)


LPA96 v2.0  
22/08/2019 Kevin Bibby  
-------------------------
- changed to 4-layer PCB, and thermal improvements throughout, uses top planes and internal IN3 layer for VIN LED thermal dissipation, BOTTOM layer for GND LED driver IC dissipation
- changed from dual LEDs to single LEDs (VLDx1232G), and reduced the number of LED drivers accordingly from 12 to 6
- LED1-LED96 placed for zig-zag left-right pattern starting in bottom left of grid
- renamed all files from tca to lpa96, and set schematic/layout titleblocks accordingly incl author names
- resolved library issues and rescued parts, removed obsolete library parts - all parts are now either from default KiCAD5 libraries or from included project libraries
- fixed all ERC and DRC (Electrical/Design Rule Check) errors, through various means incl component/pin tweaks
- added 3D models for all parts (some estimates/representative due to source BOM not being available, P1 especially)
- added example 14x14x14mm heatsink footprint to library & STEP model and added to board to improve 3D CAD output / render
- renamed R_ON1,R_ERR1,R_FIN1 as R9,R10,R11 (best practice)
- renamed RESET1 as SW1 and ON1,ERR1,FIN1 as LED97,LED98,LED99 (best practice)
- changed C5 from 0805 to 1206 case size (better for 10uF), and added second of same bulk cap C12 for VCC on LED driver page, placed near LED drivers
- added OSHW and ESD logos to board
- moved P2 away from hole
- changed name of pin8/9 from "RSV" to DAT1/DAT2 to match datasheet of guessed part
- changed pin4 of regulator U2 manually to VCC net as symbol not made to include pin4
- added copper keepout around resonator Y1
- changed keepout near SDCARD to apply to copper planes too
- changed footprint for TLC5941 (downloaded from TI official, via ultralibrarian, generated for IPC 'most'), plus changed pin29 (pad) to be solid connection
- added pin29 for thermal pad to TLC5941 symbol (to match new footprint) and connected to GND
- changed via size from 0.889mm/0.653mm to 0.8mm/0.4mm , better annular ring margin and more space for routing while still being plenty manufacturable
- added soldermask 15mm squares to expose copper for 14mm heatsinks
- added heading/annotation text on schematic page


LPA96 v1.1 ?? (previously called 'TCA96')
-------------------------
Version received at handover. Had thermal issues to resolve and required a change of LEDs and reduction of driver ICs.


LPA96 v1.0 ??
-------------------------
??

 LPA96 / 'TCA96' previously derived from original 24-well version.