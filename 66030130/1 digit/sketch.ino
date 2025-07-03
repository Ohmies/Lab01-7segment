{
  "version": 1,
  "author": "Anonymous maker",
  "editor": "wokwi",
  "parts": [
    { "type": "board-esp32-devkit-c-v4", "id": "esp", "top": 0, "left": 0, "attrs": {} },
    {
      "type": "wokwi-7segment",
      "id": "sevseg1",
      "top": 91.38,
      "left": 225.88,
      "attrs": { "color": "#00ddff", "common": "cathode" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r1",
      "top": 90.35,
      "left": 115.2,
      "attrs": { "value": "330" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r2",
      "top": 99.95,
      "left": 115.2,
      "attrs": { "value": "330" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r3",
      "top": 109.55,
      "left": 115.2,
      "attrs": { "value": "330" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r4",
      "top": 119.15,
      "left": 115.2,
      "attrs": { "value": "330" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r5",
      "top": 128.75,
      "left": 115.2,
      "attrs": { "value": "330" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r6",
      "top": 138.35,
      "left": 115.2,
      "attrs": { "value": "330" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r7",
      "top": 147.95,
      "left": 115.2,
      "attrs": { "value": "330" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r8",
      "top": 157.55,
      "left": 115.2,
      "attrs": { "value": "330" }
    }
  ],
  "connections": [
    [ "esp:TX", "$serialMonitor:RX", "", [] ],
    [ "esp:RX", "$serialMonitor:TX", "", [] ],
    [ "r1:1", "esp:19", "green", [ "v0" ] ],
    [ "r2:1", "esp:18", "green", [ "v0" ] ],
    [ "r3:1", "esp:5", "green", [ "v0" ] ],
    [ "r4:1", "esp:17", "green", [ "v0" ] ],
    [ "r5:1", "esp:16", "green", [ "v0" ] ],
    [ "r6:1", "esp:4", "green", [ "v0" ] ],
    [ "r7:1", "esp:0", "green", [ "v0" ] ],
    [ "r8:1", "esp:2", "green", [ "v0" ] ],
    [ "sevseg1:A", "r1:2", "green", [ "v-8.76", "h-76.8", "v9.6" ] ],
    [ "sevseg1:B", "r2:2", "green", [ "v-18.36", "h-86.4", "v28.8" ] ],
    [ "sevseg1:C", "r3:2", "green", [ "v9.6", "h-38.4", "v-57.6" ] ],
    [ "sevseg1:D", "r4:2", "green", [ "v19.2", "h-28.8", "v-57.6" ] ],
    [ "sevseg1:E", "r5:2", "green", [ "v28.8", "h-28.8", "v-57.6" ] ],
    [ "sevseg1:F", "r6:2", "green", [ "v-27.96", "h-48", "v76.8" ] ],
    [ "sevseg1:G", "r7:2", "green", [ "v0.84", "h-28.8", "v9.6" ] ],
    [ "sevseg1:DP", "r8:2", "green", [ "v38.4", "h-76.8", "v-38.4" ] ],
    [ "sevseg1:COM.2", "esp:GND.2", "black", [ "h0", "v-66.36" ] ]
  ],
  "dependencies": {}
}
