# Project History

November 21, 2015 - the decision to start development.

### SkyMP 0.0.1 Pre Alpha

Written in C++. Only basic Movement sync. Didn't have own Git repo at the moment of creation.

First tested September 17, 2016.

* [plugin_example (skymp dll)](https://github.com/Pospelove/plugin_example-skymp-dll)

### SkyMP ???

Some versions were lost. Didn't use version control systems.

### SkyMP 0.9, 1.0+

Written in C++. Insipired by GTA SA-MP and TES3MP. March 2017 - June 2018.

First tested in September 2017.

Has Lua scripting system.

* [SkyMP Client](https://bitbucket.org/skymp_team/skymp-client)
* [SkyMP Dedicated Server](https://bitbucket.org/skymp_team/skymp-dedicated-server)
* [SkyMP Official GameMode](https://bitbucket.org/skymp_team/skymp-official-gamemode) - Lua gamemode for SkyMP called Secunda.
* [Reman](https://bitbucket.org/skymp_team/reman) - Tool for remote server launching written in Python.
* [Secunda World](https://bitbucket.org/skymp_team/secunda-world) - World backup from OBT 2018.

### SkyMP 2.0+

Written in C++ and JavaScript. June 2018 - March 2019.

Stateless server storing everything in MongoDB.

Has client-side Lua scripting system.

Most popular version at the moment of publishing this: 30k+ downloads on Open Beta 2019 launch, 1000/1000 players online. We decided to stop Open Beta due to technical problems.

* [skymp2](https://gitlab.com/pospelov/skymp2)
* [skymp2-installer](https://gitlab.com/pospelov/skymp2-installer)
* [secunda2](https://gitlab.com/pospelov/secunda2)
* [skymp2-binaries](https://gitlab.com/pospelov/skymp2-binaries)
* [skymp2-cellhost](https://gitlab.com/pospelov/skymp2-cellhost)
* [skymp2-node](https://gitlab.com/pospelov/skymp2-node)
* [skymp2-scripts](https://gitlab.com/pospelov/skymp2-scripts)
* [skymp2-server](https://gitlab.com/pospelov/skymp2-server)
* [skymp2-loadtest](https://gitlab.com/pospelov/skymp2-loadtest)
* [skymp2-monitor](https://gitlab.com/pospelov/skymp2-monitor)

### SkyMP 3

Written in C++. March 2019 - January 2020.

Has scripting system based on NodeJS.

Introduced asynchronous multiplayer games framework, master server, stateless game modes on remote machines, parallel cell handling on the server.

Papyrus VM and lib_espm were invented.

Chromium Embedded Framework was integrated.

Most buggy. Badly tested, failed all tests with real players.

* [skymp](https://gitlab.com/pospelov/skymp)
* [skymp3](https://gitlab.com/pospelov/skymp3)
* [skymp20](https://gitlab.com/pospelov/skymp20)

### SkyMP 20 / SKYRIM ROYALE

Written in C++ (based on SkyMP 3). January 2020 - April 2020.

In-game unit tests with coverage.

Ability to launch a server from the game interface.

Added a dynamic wall of fire.

Based on SkyMP 20. We decided to leave this as an April fool's day joke and never release.

https://youtu.be/8ccDfIxCLlc

### Skyrim Multiplayer / SkyMP 5

Written in C++ and TypeScript. April 2020 - Present.

Invented [Skyrim Platform](https://github.com/skyrim-multiplayer/skymp/tree/main/skyrim-platform) - a TypeScript environment for Skyrim SE. This one gave us the ability to code Skyrim SE plugins in TS very fast. SP with its Hot Reload support is really good for prototyping.

Widely tested during 2020 and 2021. However maximum number of players online was ~70.

* [skymp](https://github.com/skyrim-multiplayer/skymp)
* [skymp-master-api](https://github.com/skyrim-multiplayer/skymp-master-api)
* [papyrus-compiler](https://github.com/skyrim-multiplayer/papyrus-compiler)
