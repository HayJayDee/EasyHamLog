# EasyHamLog

## Idea
My idea for EasyHamLog was to create a simple open-source QSO-logbook with easy cross-compilation while still having a lot of nice to have features like Maps, sync with [QRZ.com](https://qrz.com) and lookup tables for different ham-radio related stuff 

## Features
- Manage QSOs
- Search for QSOs in the current database
- Automatic lookup for country prefixes
- Export QSO session to ADI file format (used by e.g. [QRZ.com](https://qrz.com))
- Create and open different sessions

## TODO's
- Add contest functions to ADI file
- Find someone for a propper app icon
- Add Map with QSO Locations + additional Information (Distance, Rapport, etc.)
- Create buildfiles for Windows and Linux for simpler build steps
- Create Windows and Mac installer

## Bugs

## Installation

### Installation Linux (from source)
1. Clone or download the repository
2. Download Pre-Requisites: ```sudo apt-get install cmake make build-essential qt5-default```
3. Make a new build folder inside the repository: ```mkdir build```
4. Configure the project: ```cmake -S. -Bbuild```
5. Build the project: ```cmake --build build```
6. Copy "tools/prefix_lookup.xml" into "build/lookups"

### TODO: Installation Windows

### TODO: Installation MacOS (from source)
