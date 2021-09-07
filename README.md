# Kefir-updater

<p align="center">
<img src = "https://user-images.githubusercontent.com/18294541/119040795-8880cf80-b9be-11eb-88bd-6dac1d24ebe6.jpg"\><br>
</p>

A Nintendo Switch homebrew app to download and update Kefir, FWs and cheat codes. Based on [AiO-switch-updater](https://github.com/HamletDuFromage/aio-switch-updater) by [HamletDuFromage](https://github.com/HamletDuFromage)

## How to install
Copy the `kefir-updater.nro` directory to `/switch/kefir-updater` on your sdcard.

## Description of the features
### ⬦ Update Kefir
- Download the [Kefir](https://github.com/rashevskyv/kefir). After downloading the CFW archive, the program will extract it and launch [TegraExplorer](https://github.com/suchmememanyskill/TegraExplorer/releases/) for installing CFW in a proper way

### ⬦ Download firmwares
- Download firmare files to `/firmware` that can then be installed using DayBreak.

### ⬦ Download cheats
- Downloads and extracts daily-updated cheat code. The program will only extract cheat codes for the games you own. By default, this homebrew will overwrite the existing cheats. If you have your own cheat files that you'd like to keep as is, you can turn off cheat updates for specific titles in `Tools->Cheat Menu`.
- Since v2.0.0, aio-switch-updater can also download cheat sheets from [`CheatSlips.com`](https://www.cheatslips.com/). 

## Extras (in the `Tools` tab)
- View which of your games got cheat codes from the app.
- Launch the Switch's web browser.

## Screenshots
![2021052023004100](https://user-images.githubusercontent.com/18294541/119041468-5754cf00-b9bf-11eb-9b98-9583f11445ed.jpg)
![2021052023004600](https://user-images.githubusercontent.com/18294541/119041470-57ed6580-b9bf-11eb-80ce-05649d640432.jpg)
![2021052023004800](https://user-images.githubusercontent.com/18294541/119041471-5885fc00-b9bf-11eb-8c9a-0944bc54afb3.jpg)
![2021052023005100](https://user-images.githubusercontent.com/18294541/119041472-5885fc00-b9bf-11eb-93bb-9105c7441132.jpg)
![2021052023005400](https://user-images.githubusercontent.com/18294541/119041473-591e9280-b9bf-11eb-82bc-bbf3364ca9a0.jpg)
![2021052023005500](https://user-images.githubusercontent.com/18294541/119041474-591e9280-b9bf-11eb-8c0e-f668505cd6ce.jpg)
![2021052023010100](https://user-images.githubusercontent.com/18294541/119041476-591e9280-b9bf-11eb-85e3-451d940bbd0c.jpg)

## Build
You need to have installed devkitPro and devkitARM in order to compile this project.

Install the required dependencies:
```bash
$ sudo (dkp-)pacman -Sy
```
```bash
$ sudo (dkp-)pacman -S  switch-glfw \
                        switch-curl \
                        switch-glm \
                        switch-mbedtls \
                        switch-zlib
```
Use [`switch-ex-curl`](https://github.com/eXhumer/switch-ex-curl) instead of `switch-curl` to use this app with an invalid SSL certificate.

Use portlibs and build with libnx provided in this repository

Clone the repository
```bash
$ git clone --recursive https://github.com/HamletDuFromage/aio-switch-updater
$ cd aio-switch-updater
```

Compile 
```bash
$ cd aiosu-forwarder
$ make
$ cd ..
$ make
```

## Disclaimer
I do not own, host nor distribute any of the files that can be downloaded with this homebrew tool. At the owner's request, I will immediately remove the ability to download any problematic file.

## Special thanks
- [natinusala](https://github.com/natinusala) for the Borealis library.
- [tiansongyu](https://github.com/tiansongyu) for bringing support for multi-language and for his Chinese translation.
- [yyoossk](https://github.com/yyoossk) for the Japanese locale.
- [sergiou87](https://github.com/sergiou87) for the Spanish locale.
- [pedruhb](https://github.com/pedruhb) for the Brazilian locale.
- [AD2076](https://github.com/AD2076) for the Italian locale.
- [qazrfv1234](https://github.com/qazrfv1234) for the Traditional Chinese locale.
- [Team Neptune](https://github.com/Team-Neptune) whose rcm code I used.
- [fennectech](https://github.com/fennectech) for helping test the app and providing suggestions.
- Iliak for cheatslips.com.

### Like the app?
- Liberapay : <a href="https://liberapay.com/HamletDuFromage/donate"><img alt="Donate using Liberapay" src="https://liberapay.com/assets/widgets/donate.svg"></a>
- BTC: 1CoFc1bY5AHLP6Noe1zmqnJnp7ZWBxyo79
- ETH: 0xf68f568e21a15934e0e9a6949288c3ca009140ba
- CHAINLINK: 0xf68f568e21a15934e0e9a6949288c3ca009140ba
