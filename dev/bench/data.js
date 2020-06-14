window.BENCHMARK_DATA = {
  "lastUpdate": 1592147594489,
  "repoUrl": "https://github.com/Lol3rrr/http-server",
  "entries": {
    "C++ Benchmark": [
      {
        "commit": {
          "author": {
            "email": "s.loler03@gmail.com",
            "name": "lol3rrr",
            "username": "Lol3rrr"
          },
          "committer": {
            "email": "s.loler03@gmail.com",
            "name": "lol3rrr",
            "username": "Lol3rrr"
          },
          "distinct": true,
          "id": "3b5df51ac68fca0d41a277c7abaa2a9f2c0ecea1",
          "message": "updated the workflow",
          "timestamp": "2020-06-14T04:23:44+02:00",
          "tree_id": "de56f87186e5825544ad1389a96da4e121d316ab",
          "url": "https://github.com/Lol3rrr/http-server/commit/3b5df51ac68fca0d41a277c7abaa2a9f2c0ecea1"
        },
        "date": 1592101552669,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_ParseFirstLine",
            "value": 14.504601023097669,
            "unit": "ns/iter",
            "extra": "iterations: 47953791\ncpu: 14.494985453809063 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 570.2733375664789,
            "unit": "ns/iter",
            "extra": "iterations: 1270045\ncpu: 569.8461542701158 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 581.4420155593905,
            "unit": "ns/iter",
            "extra": "iterations: 1214274\ncpu: 580.1258669790333 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 595.4080769263779,
            "unit": "ns/iter",
            "extra": "iterations: 1150957\ncpu: 597.8021177155549 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 623.194915234462,
            "unit": "ns/iter",
            "extra": "iterations: 1105419\ncpu: 622.2886742490809 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 763.6090516395197,
            "unit": "ns/iter",
            "extra": "iterations: 898024\ncpu: 770.4819525972614 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 574.0258729454016,
            "unit": "ns/iter",
            "extra": "iterations: 1216096\ncpu: 584.1719091255454 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 596.7494665327499,
            "unit": "ns/iter",
            "extra": "iterations: 1189853\ncpu: 598.1548594659914 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 640.1222491103931,
            "unit": "ns/iter",
            "extra": "iterations: 1084695\ncpu: 646.5570542864755 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 726.6663178215501,
            "unit": "ns/iter",
            "extra": "iterations: 964160\ncpu: 731.8850792392938 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 1782.3995963445382,
            "unit": "ns/iter",
            "extra": "iterations: 398372\ncpu: 1791.534264455918 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 83.47302938252179,
            "unit": "ns/iter",
            "extra": "iterations: 8658923\ncpu: 83.46616467198052 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 103.01946815788715,
            "unit": "ns/iter",
            "extra": "iterations: 7110945\ncpu: 103.00370274274344 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 164.31811555857374,
            "unit": "ns/iter",
            "extra": "iterations: 4191502\ncpu: 164.309134529818 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 266.47643570702354,
            "unit": "ns/iter",
            "extra": "iterations: 2539881\ncpu: 266.4442259302701 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 1174.4899507026573,
            "unit": "ns/iter",
            "extra": "iterations: 598401\ncpu: 1188.1681848805074 ns\nthreads: 1"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "s.loler03@gmail.com",
            "name": "lol3rrr",
            "username": "Lol3rrr"
          },
          "committer": {
            "email": "s.loler03@gmail.com",
            "name": "lol3rrr",
            "username": "Lol3rrr"
          },
          "distinct": true,
          "id": "c78121b8325139abbe4a226f3fb0516a524aec24",
          "message": "Added the benchmark results to the README",
          "timestamp": "2020-06-14T04:29:17+02:00",
          "tree_id": "2c37111a8d6233384695e675589e6174ec1b87f8",
          "url": "https://github.com/Lol3rrr/http-server/commit/c78121b8325139abbe4a226f3fb0516a524aec24"
        },
        "date": 1592101808155,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_ParseFirstLine",
            "value": 16.731885627907403,
            "unit": "ns/iter",
            "extra": "iterations: 39478197\ncpu: 16.717928075590685 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 723.5525377322911,
            "unit": "ns/iter",
            "extra": "iterations: 989308\ncpu: 728.1485876999574 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 813.9985425055743,
            "unit": "ns/iter",
            "extra": "iterations: 868615\ncpu: 818.079311317457 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 898.9901256997287,
            "unit": "ns/iter",
            "extra": "iterations: 801272\ncpu: 898.6030761094021 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 907.4820416713758,
            "unit": "ns/iter",
            "extra": "iterations: 735202\ncpu: 909.466834964781 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 1042.3930596758564,
            "unit": "ns/iter",
            "extra": "iterations: 641671\ncpu: 1054.0626364593902 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 843.2058532861548,
            "unit": "ns/iter",
            "extra": "iterations: 926864\ncpu: 841.9273464075945 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 850.657475249015,
            "unit": "ns/iter",
            "extra": "iterations: 807384\ncpu: 854.5919847320788 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 885.0946232560492,
            "unit": "ns/iter",
            "extra": "iterations: 825146\ncpu: 890.49198808299 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 1059.3156208866226,
            "unit": "ns/iter",
            "extra": "iterations: 777043\ncpu: 1067.7265222125468 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 2242.378615171012,
            "unit": "ns/iter",
            "extra": "iterations: 311118\ncpu: 2256.193235366122 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 119.40559097925447,
            "unit": "ns/iter",
            "extra": "iterations: 5973873\ncpu: 119.3492601868169 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 128.2374411626152,
            "unit": "ns/iter",
            "extra": "iterations: 5428309\ncpu: 128.22226774489084 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 184.71669183072018,
            "unit": "ns/iter",
            "extra": "iterations: 3850069\ncpu: 184.678129664689 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 265.84839728879746,
            "unit": "ns/iter",
            "extra": "iterations: 2562408\ncpu: 265.6949537310217 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 1722.6539090863785,
            "unit": "ns/iter",
            "extra": "iterations: 403394\ncpu: 1733.2932418417251 ns\nthreads: 1"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "s.loler03@gmail.com",
            "name": "lol3rrr",
            "username": "Lol3rrr"
          },
          "committer": {
            "email": "s.loler03@gmail.com",
            "name": "lol3rrr",
            "username": "Lol3rrr"
          },
          "distinct": true,
          "id": "6e49da11684cc85f5927d3da4fa6be3f5ebd5654",
          "message": "fixed problem with rand_r",
          "timestamp": "2020-06-14T04:39:12+02:00",
          "tree_id": "f809fd382a2dc8063259598b7d9c1f9e97289f4f",
          "url": "https://github.com/Lol3rrr/http-server/commit/6e49da11684cc85f5927d3da4fa6be3f5ebd5654"
        },
        "date": 1592102404747,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_ParseFirstLine",
            "value": 14.943408376178356,
            "unit": "ns/iter",
            "extra": "iterations: 46639623\ncpu: 14.940332558005453 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 586.5077328613481,
            "unit": "ns/iter",
            "extra": "iterations: 1194642\ncpu: 590.7055770682227 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 590.1575457329644,
            "unit": "ns/iter",
            "extra": "iterations: 1191965\ncpu: 588.934996413531 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 624.4789458431646,
            "unit": "ns/iter",
            "extra": "iterations: 1134479\ncpu: 633.083610185634 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 660.6670540456357,
            "unit": "ns/iter",
            "extra": "iterations: 1048065\ncpu: 666.5374380407065 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 807.5255280857156,
            "unit": "ns/iter",
            "extra": "iterations: 861933\ncpu: 811.3206467328296 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 615.5768598043884,
            "unit": "ns/iter",
            "extra": "iterations: 1142255\ncpu: 619.965136507229 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 639.2948000720029,
            "unit": "ns/iter",
            "extra": "iterations: 1134881\ncpu: 644.0044454004978 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 685.3276958601598,
            "unit": "ns/iter",
            "extra": "iterations: 1021499\ncpu: 684.3906690067851 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 799.8705649944619,
            "unit": "ns/iter",
            "extra": "iterations: 869842\ncpu: 809.2647078442859 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 1823.3692640011113,
            "unit": "ns/iter",
            "extra": "iterations: 378247\ncpu: 1816.0439897728363 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 100.1800871598616,
            "unit": "ns/iter",
            "extra": "iterations: 6955954\ncpu: 100.13892760072869 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 128.28959970061302,
            "unit": "ns/iter",
            "extra": "iterations: 5472554\ncpu: 128.22616551613743 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 179.6130746186914,
            "unit": "ns/iter",
            "extra": "iterations: 3826146\ncpu: 179.60269315389434 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 278.94071318088305,
            "unit": "ns/iter",
            "extra": "iterations: 2610614\ncpu: 278.86562624731215 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 1222.705993700847,
            "unit": "ns/iter",
            "extra": "iterations: 588603\ncpu: 1225.6230464294104 ns\nthreads: 1"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "s.loler03@gmail.com",
            "name": "Lol3rrr",
            "username": "Lol3rrr"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "0e8eb3bfb6be294234d8aee34d74fed473b1041f",
          "message": "Merge pull request #60 from Lol3rrr/dev\n\nfixed problem with rand_r",
          "timestamp": "2020-06-14T04:40:16+02:00",
          "tree_id": "6a460f67d6c35438c018266286b3ae33ab924edd",
          "url": "https://github.com/Lol3rrr/http-server/commit/0e8eb3bfb6be294234d8aee34d74fed473b1041f"
        },
        "date": 1592102501272,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_ParseFirstLine",
            "value": 12.31000504399139,
            "unit": "ns/iter",
            "extra": "iterations: 53953306\ncpu: 12.30858324047835 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 469.2173256693985,
            "unit": "ns/iter",
            "extra": "iterations: 1500375\ncpu: 472.9513614929585 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 474.4680953054777,
            "unit": "ns/iter",
            "extra": "iterations: 1510624\ncpu: 476.32427526679714 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 516.0304895006508,
            "unit": "ns/iter",
            "extra": "iterations: 1411863\ncpu: 513.2460727419116 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 531.6156554328024,
            "unit": "ns/iter",
            "extra": "iterations: 1363118\ncpu: 533.3552363035442 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 644.3176385363388,
            "unit": "ns/iter",
            "extra": "iterations: 1107246\ncpu: 647.1770293142843 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 503.2800529727336,
            "unit": "ns/iter",
            "extra": "iterations: 1409644\ncpu: 506.68367261551936 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 521.5569009969556,
            "unit": "ns/iter",
            "extra": "iterations: 1000000\ncpu: 522.7279149997983 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 557.301383720811,
            "unit": "ns/iter",
            "extra": "iterations: 1326120\ncpu: 560.6504222837766 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 641.8613349668077,
            "unit": "ns/iter",
            "extra": "iterations: 1149201\ncpu: 647.7494789855008 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 1545.288644516068,
            "unit": "ns/iter",
            "extra": "iterations: 471490\ncpu: 1552.1566247453766 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 82.66228208262375,
            "unit": "ns/iter",
            "extra": "iterations: 8321732\ncpu: 82.65836571040741 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 109.44545367408216,
            "unit": "ns/iter",
            "extra": "iterations: 6583129\ncpu: 109.43879088500285 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 147.1399512095003,
            "unit": "ns/iter",
            "extra": "iterations: 4907103\ncpu: 147.081921043842 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 221.27412979537507,
            "unit": "ns/iter",
            "extra": "iterations: 3161900\ncpu: 221.27456402795784 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 970.5899381670769,
            "unit": "ns/iter",
            "extra": "iterations: 727422\ncpu: 970.9022919279289 ns\nthreads: 1"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "s.loler03@gmail.com",
            "name": "Lol3rrr",
            "username": "Lol3rrr"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "a6d892c104c3fbe8cbdedaaa80c95dd908123581",
          "message": "Fixed link to benchmarks",
          "timestamp": "2020-06-14T04:42:50+02:00",
          "tree_id": "bf1f9e7cdff03174ad1242b6e6a618f1eba74bcf",
          "url": "https://github.com/Lol3rrr/http-server/commit/a6d892c104c3fbe8cbdedaaa80c95dd908123581"
        },
        "date": 1592102614538,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_ParseFirstLine",
            "value": 11.98833303958358,
            "unit": "ns/iter",
            "extra": "iterations: 57469553\ncpu: 11.987620053352426 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 639.4871163880662,
            "unit": "ns/iter",
            "extra": "iterations: 1093909\ncpu: 637.1125422681046 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 634.578035769205,
            "unit": "ns/iter",
            "extra": "iterations: 1115450\ncpu: 635.7618082388868 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 660.802034689689,
            "unit": "ns/iter",
            "extra": "iterations: 1119974\ncpu: 664.6626412755614 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 759.0238732955058,
            "unit": "ns/iter",
            "extra": "iterations: 1010711\ncpu: 764.596010134648 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 825.9108991804898,
            "unit": "ns/iter",
            "extra": "iterations: 720779\ncpu: 824.6707395742576 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 657.0978868360777,
            "unit": "ns/iter",
            "extra": "iterations: 1108474\ncpu: 662.4028673659494 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 681.1179076598521,
            "unit": "ns/iter",
            "extra": "iterations: 1079862\ncpu: 685.1662434639445 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 755.5772833779569,
            "unit": "ns/iter",
            "extra": "iterations: 980269\ncpu: 754.6436274126302 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 830.2783193532548,
            "unit": "ns/iter",
            "extra": "iterations: 830183\ncpu: 835.1210781230609 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 1695.0182345529329,
            "unit": "ns/iter",
            "extra": "iterations: 409991\ncpu: 1698.3493344986714 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 72.20132647186514,
            "unit": "ns/iter",
            "extra": "iterations: 9659157\ncpu: 72.19741526097967 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 80.62394973919334,
            "unit": "ns/iter",
            "extra": "iterations: 7342819\ncpu: 80.58969354957553 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 128.35421239412395,
            "unit": "ns/iter",
            "extra": "iterations: 5388812\ncpu: 128.33957391721952 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 198.05606106214654,
            "unit": "ns/iter",
            "extra": "iterations: 3614416\ncpu: 198.0158529068045 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 1261.1030976666682,
            "unit": "ns/iter",
            "extra": "iterations: 487819\ncpu: 1256.1162439356206 ns\nthreads: 1"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "s.loler03@gmail.com",
            "name": "Lol3rrr",
            "username": "Lol3rrr"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": false,
          "id": "a6d892c104c3fbe8cbdedaaa80c95dd908123581",
          "message": "Fixed link to benchmarks",
          "timestamp": "2020-06-14T04:42:50+02:00",
          "tree_id": "bf1f9e7cdff03174ad1242b6e6a618f1eba74bcf",
          "url": "https://github.com/Lol3rrr/http-server/commit/a6d892c104c3fbe8cbdedaaa80c95dd908123581"
        },
        "date": 1592102686717,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_ParseFirstLine",
            "value": 16.54202294974107,
            "unit": "ns/iter",
            "extra": "iterations: 45877729\ncpu: 16.429940135005374 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 821.3112148290687,
            "unit": "ns/iter",
            "extra": "iterations: 791238\ncpu: 839.993620124345 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 832.7662990617044,
            "unit": "ns/iter",
            "extra": "iterations: 780275\ncpu: 837.6262304956917 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 844.950357363557,
            "unit": "ns/iter",
            "extra": "iterations: 843831\ncpu: 848.8218979868221 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 922.5861448744372,
            "unit": "ns/iter",
            "extra": "iterations: 788921\ncpu: 933.5792265637183 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 1140.5517614709418,
            "unit": "ns/iter",
            "extra": "iterations: 630952\ncpu: 1163.707866841374 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 857.4186763313147,
            "unit": "ns/iter",
            "extra": "iterations: 831898\ncpu: 862.025402151465 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 896.6588169301517,
            "unit": "ns/iter",
            "extra": "iterations: 827034\ncpu: 882.706224895295 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 954.9061424055518,
            "unit": "ns/iter",
            "extra": "iterations: 778978\ncpu: 967.2475127671687 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 1069.5723822438688,
            "unit": "ns/iter",
            "extra": "iterations: 674233\ncpu: 1081.5141664692344 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 2256.0610083464608,
            "unit": "ns/iter",
            "extra": "iterations: 300926\ncpu: 2251.4926393886294 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 98.01929684263558,
            "unit": "ns/iter",
            "extra": "iterations: 8079301\ncpu: 97.98721287893582 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 118.54556862987435,
            "unit": "ns/iter",
            "extra": "iterations: 5440947\ncpu: 118.51992070498055 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 176.0897675808427,
            "unit": "ns/iter",
            "extra": "iterations: 4119583\ncpu: 176.05649770862678 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 285.1259674647824,
            "unit": "ns/iter",
            "extra": "iterations: 2507068\ncpu: 285.1016486190246 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 1596.8112215400115,
            "unit": "ns/iter",
            "extra": "iterations: 428640\ncpu: 1591.3751213104345 ns\nthreads: 1"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "s.loler03@gmail.com",
            "name": "lol3rrr",
            "username": "Lol3rrr"
          },
          "committer": {
            "email": "s.loler03@gmail.com",
            "name": "lol3rrr",
            "username": "Lol3rrr"
          },
          "distinct": true,
          "id": "5b512f2565fde6489a6fb9910a3169d69785c82f",
          "message": "Added more benchmarks",
          "timestamp": "2020-06-14T14:57:33+02:00",
          "tree_id": "f3cce926f5f34dec74c28504e3511e6147ece180",
          "url": "https://github.com/Lol3rrr/http-server/commit/5b512f2565fde6489a6fb9910a3169d69785c82f"
        },
        "date": 1592139599954,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_ParseFirstLine",
            "value": 14.89759260450714,
            "unit": "ns/iter",
            "extra": "iterations: 47063476\ncpu: 14.883159628923286 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 546.8342492981386,
            "unit": "ns/iter",
            "extra": "iterations: 1270613\ncpu: 549.4594719241555 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 553.0397883827411,
            "unit": "ns/iter",
            "extra": "iterations: 1276830\ncpu: 554.8030638377414 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 583.2306609332527,
            "unit": "ns/iter",
            "extra": "iterations: 1206728\ncpu: 587.4581065491683 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 629.3354213248451,
            "unit": "ns/iter",
            "extra": "iterations: 1145282\ncpu: 632.2965435587494 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 750.6236687711101,
            "unit": "ns/iter",
            "extra": "iterations: 952039\ncpu: 748.5732779859329 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 592.2373661190619,
            "unit": "ns/iter",
            "extra": "iterations: 1200601\ncpu: 596.8519091696913 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 614.5258524613282,
            "unit": "ns/iter",
            "extra": "iterations: 1166620\ncpu: 618.4234283658167 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 658.8214145049208,
            "unit": "ns/iter",
            "extra": "iterations: 1040762\ncpu: 665.1767243614568 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 756.2022762416339,
            "unit": "ns/iter",
            "extra": "iterations: 910794\ncpu: 761.0553275498114 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 1909.7716638355193,
            "unit": "ns/iter",
            "extra": "iterations: 392474\ncpu: 1913.192219104157 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 100.66120845665499,
            "unit": "ns/iter",
            "extra": "iterations: 7055793\ncpu: 100.64831833927141 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 115.83692769149454,
            "unit": "ns/iter",
            "extra": "iterations: 6024395\ncpu: 115.83591729957979 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 170.31440998648546,
            "unit": "ns/iter",
            "extra": "iterations: 4217700\ncpu: 170.29006614979707 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 260.15781600149853,
            "unit": "ns/iter",
            "extra": "iterations: 2668500\ncpu: 260.1584373243399 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 1146.8220315084566,
            "unit": "ns/iter",
            "extra": "iterations: 599623\ncpu: 1155.1891872069941 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 5.711916050631297,
            "unit": "ns/iter",
            "extra": "iterations: 124882702\ncpu: 5.711236645087976 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 13.981212891203095,
            "unit": "ns/iter",
            "extra": "iterations: 49029311\ncpu: 13.978824768718429 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 30.372420166448574,
            "unit": "ns/iter",
            "extra": "iterations: 23058319\ncpu: 30.367728193889675 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 41.54939923643945,
            "unit": "ns/iter",
            "extra": "iterations: 16765664\ncpu: 41.541990582657576 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 535.9719525726579,
            "unit": "ns/iter",
            "extra": "iterations: 1273985\ncpu: 536.2251305953195 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 538.2841542674619,
            "unit": "ns/iter",
            "extra": "iterations: 1316468\ncpu: 542.3274109202905 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 531.3514290166424,
            "unit": "ns/iter",
            "extra": "iterations: 1294526\ncpu: 533.6316922165955 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 532.6418423656856,
            "unit": "ns/iter",
            "extra": "iterations: 1318520\ncpu: 535.8846160832232 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 537.5656699691649,
            "unit": "ns/iter",
            "extra": "iterations: 1254272\ncpu: 540.4063058112393 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 1121.8274527745307,
            "unit": "ns/iter",
            "extra": "iterations: 624913\ncpu: 1112.0078602937401 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 1119.5081137008717,
            "unit": "ns/iter",
            "extra": "iterations: 613841\ncpu: 1126.062784993388 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 1172.2779336407243,
            "unit": "ns/iter",
            "extra": "iterations: 599438\ncpu: 1176.7330232739694 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 1291.6973883173423,
            "unit": "ns/iter",
            "extra": "iterations: 537927\ncpu: 1297.6502127566075 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 1522.123437082645,
            "unit": "ns/iter",
            "extra": "iterations: 469397\ncpu: 1529.1238312073303 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 1076.0322547951384,
            "unit": "ns/iter",
            "extra": "iterations: 651035\ncpu: 1078.3117528287626 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 1079.4000240983291,
            "unit": "ns/iter",
            "extra": "iterations: 647581\ncpu: 1076.5105724279108 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 1105.9202296139838,
            "unit": "ns/iter",
            "extra": "iterations: 638608\ncpu: 1107.7755289708282 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 1169.347299759773,
            "unit": "ns/iter",
            "extra": "iterations: 594331\ncpu: 1177.4801045304578 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 1399.1417606790965,
            "unit": "ns/iter",
            "extra": "iterations: 499786\ncpu: 1400.4954280449222 ns\nthreads: 1"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "s.loler03@gmail.com",
            "name": "lol3rrr",
            "username": "Lol3rrr"
          },
          "committer": {
            "email": "s.loler03@gmail.com",
            "name": "lol3rrr",
            "username": "Lol3rrr"
          },
          "distinct": true,
          "id": "2c310cc22477ac8e52fdac835574b22398fdc39f",
          "message": "fixed an issue with the threadcount flag",
          "timestamp": "2020-06-14T15:50:11+02:00",
          "tree_id": "f769fb73774e492c6a3cf4b6465915326c86feaa",
          "url": "https://github.com/Lol3rrr/http-server/commit/2c310cc22477ac8e52fdac835574b22398fdc39f"
        },
        "date": 1592142695173,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_ParseFirstLine",
            "value": 13.315577444885603,
            "unit": "ns/iter",
            "extra": "iterations: 56085976\ncpu: 13.312752621083034 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 499.934543256785,
            "unit": "ns/iter",
            "extra": "iterations: 1338487\ncpu: 505.54383494228597 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 491.1954767605731,
            "unit": "ns/iter",
            "extra": "iterations: 1413810\ncpu: 493.7783627218838 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 514.3451214060915,
            "unit": "ns/iter",
            "extra": "iterations: 1282398\ncpu: 517.5652106452633 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 544.69971310913,
            "unit": "ns/iter",
            "extra": "iterations: 1312345\ncpu: 548.8950748476916 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 663.4732779283719,
            "unit": "ns/iter",
            "extra": "iterations: 1066141\ncpu: 665.5350661870583 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 528.7818137791091,
            "unit": "ns/iter",
            "extra": "iterations: 1180927\ncpu: 533.0591069552041 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 553.8195591915149,
            "unit": "ns/iter",
            "extra": "iterations: 1359964\ncpu: 555.9968315336631 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 581.5131074993648,
            "unit": "ns/iter",
            "extra": "iterations: 1193744\ncpu: 583.8179174084038 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 660.8316416840528,
            "unit": "ns/iter",
            "extra": "iterations: 1036569\ncpu: 666.6309305022802 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 1583.7974028794918,
            "unit": "ns/iter",
            "extra": "iterations: 404216\ncpu: 1588.0762513113996 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 91.87539856518607,
            "unit": "ns/iter",
            "extra": "iterations: 7358583\ncpu: 91.85282913843645 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 102.97655924489003,
            "unit": "ns/iter",
            "extra": "iterations: 6881007\ncpu: 102.96310569078037 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 153.3748443166575,
            "unit": "ns/iter",
            "extra": "iterations: 4663312\ncpu: 153.3583751205156 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 232.49499202952808,
            "unit": "ns/iter",
            "extra": "iterations: 2975357\ncpu: 232.48128846387124 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 1045.3869198439893,
            "unit": "ns/iter",
            "extra": "iterations: 672408\ncpu: 1051.6084311901704 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 5.528769946008232,
            "unit": "ns/iter",
            "extra": "iterations: 132387579\ncpu: 5.528316247855837 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 12.628570935127748,
            "unit": "ns/iter",
            "extra": "iterations: 57959993\ncpu: 12.6217843746116 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 26.916000222541356,
            "unit": "ns/iter",
            "extra": "iterations: 27392644\ncpu: 26.915804111498066 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 43.23543074948024,
            "unit": "ns/iter",
            "extra": "iterations: 16927844\ncpu: 43.23363731376546 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 470.3444143693296,
            "unit": "ns/iter",
            "extra": "iterations: 1475975\ncpu: 468.3341662287872 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 501.5349223096447,
            "unit": "ns/iter",
            "extra": "iterations: 1457707\ncpu: 499.95015527857333 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 504.0981420012258,
            "unit": "ns/iter",
            "extra": "iterations: 1000000\ncpu: 520.7681149974093 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 469.84090456039024,
            "unit": "ns/iter",
            "extra": "iterations: 1449413\ncpu: 472.19002451032975 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 490.4087511927714,
            "unit": "ns/iter",
            "extra": "iterations: 1441838\ncpu: 493.76392077710244 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 985.6946243672064,
            "unit": "ns/iter",
            "extra": "iterations: 707974\ncpu: 992.3088715145078 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 1025.007788816621,
            "unit": "ns/iter",
            "extra": "iterations: 727197\ncpu: 1026.5115711496562 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 1057.7128035466255,
            "unit": "ns/iter",
            "extra": "iterations: 654162\ncpu: 1056.603533990111 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 1170.880427377996,
            "unit": "ns/iter",
            "extra": "iterations: 610792\ncpu: 1176.4471882368953 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 1380.8554857922963,
            "unit": "ns/iter",
            "extra": "iterations: 500629\ncpu: 1385.4880759941198 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 995.3534513350486,
            "unit": "ns/iter",
            "extra": "iterations: 719273\ncpu: 1020.0390213426789 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 1012.3364190809526,
            "unit": "ns/iter",
            "extra": "iterations: 723865\ncpu: 1004.8650618576839 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 993.6393259066471,
            "unit": "ns/iter",
            "extra": "iterations: 673744\ncpu: 983.7067729053482 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 1112.5577164380666,
            "unit": "ns/iter",
            "extra": "iterations: 659916\ncpu: 1110.3472502654972 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 1294.935462665323,
            "unit": "ns/iter",
            "extra": "iterations: 575202\ncpu: 1302.9642073512055 ns\nthreads: 1"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "s.loler03@gmail.com",
            "name": "Lol3rrr",
            "username": "Lol3rrr"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "8c0e67fc063b58eb5b34d7a03325f03333131e0f",
          "message": "Merge pull request #61 from Lol3rrr/dev\n\nDev",
          "timestamp": "2020-06-14T15:52:42+02:00",
          "tree_id": "f769fb73774e492c6a3cf4b6465915326c86feaa",
          "url": "https://github.com/Lol3rrr/http-server/commit/8c0e67fc063b58eb5b34d7a03325f03333131e0f"
        },
        "date": 1592142838618,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_ParseFirstLine",
            "value": 16.118061250500826,
            "unit": "ns/iter",
            "extra": "iterations: 46542248\ncpu: 16.114111290885653 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 757.7620521442931,
            "unit": "ns/iter",
            "extra": "iterations: 862689\ncpu: 749.2475967584903 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 730.7153590398234,
            "unit": "ns/iter",
            "extra": "iterations: 803644\ncpu: 734.5732948918263 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 774.7441326545926,
            "unit": "ns/iter",
            "extra": "iterations: 944849\ncpu: 772.4952050543347 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 815.9801834261162,
            "unit": "ns/iter",
            "extra": "iterations: 902578\ncpu: 807.6142782124579 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 876.155192898726,
            "unit": "ns/iter",
            "extra": "iterations: 792053\ncpu: 873.7238341376279 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 850.1092249592106,
            "unit": "ns/iter",
            "extra": "iterations: 823603\ncpu: 858.8448742897157 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 799.3943665291191,
            "unit": "ns/iter",
            "extra": "iterations: 803874\ncpu: 810.3786302337219 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 830.5527769778246,
            "unit": "ns/iter",
            "extra": "iterations: 911136\ncpu: 819.46306917955 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 938.2151157565185,
            "unit": "ns/iter",
            "extra": "iterations: 798412\ncpu: 951.0984566869182 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 2069.258365562674,
            "unit": "ns/iter",
            "extra": "iterations: 370537\ncpu: 2077.0190129466773 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 108.5624225859861,
            "unit": "ns/iter",
            "extra": "iterations: 5596532\ncpu: 108.55493830822422 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 133.25085987817474,
            "unit": "ns/iter",
            "extra": "iterations: 6341596\ncpu: 133.24980336180363 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 152.91029659928154,
            "unit": "ns/iter",
            "extra": "iterations: 4669600\ncpu: 152.86006895665588 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 255.60324772435897,
            "unit": "ns/iter",
            "extra": "iterations: 3089240\ncpu: 255.59871877872848 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 1421.1673659238472,
            "unit": "ns/iter",
            "extra": "iterations: 471434\ncpu: 1419.1281133715597 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 5.467918615700932,
            "unit": "ns/iter",
            "extra": "iterations: 134001621\ncpu: 5.466735413596221 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 12.902317057001085,
            "unit": "ns/iter",
            "extra": "iterations: 54271604\ncpu: 12.898360383820563 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 31.315557523947064,
            "unit": "ns/iter",
            "extra": "iterations: 20655337\ncpu: 31.31378669832412 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 50.84722973045009,
            "unit": "ns/iter",
            "extra": "iterations: 15470065\ncpu: 50.84362211794196 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 758.4581189532823,
            "unit": "ns/iter",
            "extra": "iterations: 1012427\ncpu: 757.3167793805984 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 675.4562002278258,
            "unit": "ns/iter",
            "extra": "iterations: 828509\ncpu: 677.1059191882282 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 702.6265586657805,
            "unit": "ns/iter",
            "extra": "iterations: 1030933\ncpu: 705.4452229194978 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 687.132849094521,
            "unit": "ns/iter",
            "extra": "iterations: 1020165\ncpu: 693.8003362204308 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 763.7723736299558,
            "unit": "ns/iter",
            "extra": "iterations: 884814\ncpu: 768.3732479406847 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 1412.9023012932741,
            "unit": "ns/iter",
            "extra": "iterations: 482903\ncpu: 1414.6597391163045 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 1419.6701405575348,
            "unit": "ns/iter",
            "extra": "iterations: 460581\ncpu: 1435.2951967161698 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 1512.8535501417489,
            "unit": "ns/iter",
            "extra": "iterations: 416238\ncpu: 1527.0909263400301 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 1749.736058551087,
            "unit": "ns/iter",
            "extra": "iterations: 436540\ncpu: 1773.5383859422507 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 1839.686312714747,
            "unit": "ns/iter",
            "extra": "iterations: 379601\ncpu: 1838.592632798469 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 1491.5717861121916,
            "unit": "ns/iter",
            "extra": "iterations: 519042\ncpu: 1505.984812398791 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 1469.7865240159454,
            "unit": "ns/iter",
            "extra": "iterations: 508638\ncpu: 1443.171172819923 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 1399.5011832869075,
            "unit": "ns/iter",
            "extra": "iterations: 510867\ncpu: 1397.1211920117153 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 1519.015812578556,
            "unit": "ns/iter",
            "extra": "iterations: 461658\ncpu: 1523.1271807312353 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 1749.8106319849599,
            "unit": "ns/iter",
            "extra": "iterations: 412002\ncpu: 1760.963291433608 ns\nthreads: 1"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "s.loler03@gmail.com",
            "name": "lol3rrr",
            "username": "Lol3rrr"
          },
          "committer": {
            "email": "s.loler03@gmail.com",
            "name": "lol3rrr",
            "username": "Lol3rrr"
          },
          "distinct": true,
          "id": "c4f749c3a7c9fb849c8cff849b83d3fcfa91bfd8",
          "message": "Made some minor improvements",
          "timestamp": "2020-06-14T16:49:26+02:00",
          "tree_id": "24d7c4652272aa1879e287d6bab7d2f84771d73a",
          "url": "https://github.com/Lol3rrr/http-server/commit/c4f749c3a7c9fb849c8cff849b83d3fcfa91bfd8"
        },
        "date": 1592146254359,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_ParseFirstLine",
            "value": 15.409073296137114,
            "unit": "ns/iter",
            "extra": "iterations: 47271509\ncpu: 15.357712359044854 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 787.3293966183139,
            "unit": "ns/iter",
            "extra": "iterations: 885085\ncpu: 793.0743623493589 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 792.4175607027664,
            "unit": "ns/iter",
            "extra": "iterations: 865000\ncpu: 798.6015317916626 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 832.0747266336164,
            "unit": "ns/iter",
            "extra": "iterations: 868887\ncpu: 834.6839278293088 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 878.8848588301124,
            "unit": "ns/iter",
            "extra": "iterations: 787668\ncpu: 885.1804211922288 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 1058.4216547844435,
            "unit": "ns/iter",
            "extra": "iterations: 655541\ncpu: 1059.6526075415318 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 825.8112185515528,
            "unit": "ns/iter",
            "extra": "iterations: 841820\ncpu: 833.0722969287691 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 837.0038960822817,
            "unit": "ns/iter",
            "extra": "iterations: 793617\ncpu: 842.4827290747743 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 932.0415778188831,
            "unit": "ns/iter",
            "extra": "iterations: 785972\ncpu: 934.3433735552387 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 1054.4509561436978,
            "unit": "ns/iter",
            "extra": "iterations: 678199\ncpu: 1050.2015470401525 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 2121.4935702708835,
            "unit": "ns/iter",
            "extra": "iterations: 324975\ncpu: 2109.378915301729 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 48.90346607673932,
            "unit": "ns/iter",
            "extra": "iterations: 13952432\ncpu: 48.90073572836626 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 66.2625349081973,
            "unit": "ns/iter",
            "extra": "iterations: 10688750\ncpu: 66.26061588118333 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 122.19436342471184,
            "unit": "ns/iter",
            "extra": "iterations: 5782199\ncpu: 122.14338818155515 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 218.08338177234396,
            "unit": "ns/iter",
            "extra": "iterations: 3244630\ncpu: 218.04038519029908 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 1568.5838767873704,
            "unit": "ns/iter",
            "extra": "iterations: 443299\ncpu: 1585.135490942756 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 6.010352566545463,
            "unit": "ns/iter",
            "extra": "iterations: 118791702\ncpu: 6.009872970756836 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 14.971629944375918,
            "unit": "ns/iter",
            "extra": "iterations: 45214046\ncpu: 14.966360519914502 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 16.89351112009552,
            "unit": "ns/iter",
            "extra": "iterations: 41156795\ncpu: 16.893190759873278 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 19.667733152523553,
            "unit": "ns/iter",
            "extra": "iterations: 35847639\ncpu: 19.655508860709098 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 771.6439807105753,
            "unit": "ns/iter",
            "extra": "iterations: 913737\ncpu: 774.1501482368927 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 769.6883304707231,
            "unit": "ns/iter",
            "extra": "iterations: 916798\ncpu: 767.921777751717 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 762.8096216787064,
            "unit": "ns/iter",
            "extra": "iterations: 916223\ncpu: 767.5402025481261 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 761.2157391665677,
            "unit": "ns/iter",
            "extra": "iterations: 909070\ncpu: 753.6856688718442 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 764.2540244702237,
            "unit": "ns/iter",
            "extra": "iterations: 906704\ncpu: 770.940374141035 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 1548.8417727205158,
            "unit": "ns/iter",
            "extra": "iterations: 441403\ncpu: 1555.4027340026196 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 1573.0332361209578,
            "unit": "ns/iter",
            "extra": "iterations: 420025\ncpu: 1583.5438200074625 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 1634.129136277668,
            "unit": "ns/iter",
            "extra": "iterations: 424869\ncpu: 1639.9391647835712 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 1774.6894500148187,
            "unit": "ns/iter",
            "extra": "iterations: 382399\ncpu: 1770.6769996723626 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 2022.109559010933,
            "unit": "ns/iter",
            "extra": "iterations: 341688\ncpu: 2032.112506148475 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 1540.4584265376454,
            "unit": "ns/iter",
            "extra": "iterations: 452873\ncpu: 1534.8426711189195 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 1532.7028197318496,
            "unit": "ns/iter",
            "extra": "iterations: 462100\ncpu: 1509.6537654100964 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 1552.311552317192,
            "unit": "ns/iter",
            "extra": "iterations: 450836\ncpu: 1559.428173440569 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 1644.6981659534426,
            "unit": "ns/iter",
            "extra": "iterations: 420655\ncpu: 1654.999626772327 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 1916.5934841766468,
            "unit": "ns/iter",
            "extra": "iterations: 369255\ncpu: 1919.1339860024862 ns\nthreads: 1"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "s.loler03@gmail.com",
            "name": "lol3rrr",
            "username": "Lol3rrr"
          },
          "committer": {
            "email": "s.loler03@gmail.com",
            "name": "lol3rrr",
            "username": "Lol3rrr"
          },
          "distinct": true,
          "id": "a62ff782d08b2377b127fb43c554f8e9a9d8150b",
          "message": "switched back to using githubs runners",
          "timestamp": "2020-06-14T17:11:49+02:00",
          "tree_id": "24d7c4652272aa1879e287d6bab7d2f84771d73a",
          "url": "https://github.com/Lol3rrr/http-server/commit/a62ff782d08b2377b127fb43c554f8e9a9d8150b"
        },
        "date": 1592147593786,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_ParseFirstLine",
            "value": 16.247510590958903,
            "unit": "ns/iter",
            "extra": "iterations: 44193119\ncpu: 16.23892968495842 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 833.3588166080877,
            "unit": "ns/iter",
            "extra": "iterations: 818393\ncpu: 818.7327433151792 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 833.3909612656483,
            "unit": "ns/iter",
            "extra": "iterations: 858594\ncpu: 847.7513213465862 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 859.2539208972946,
            "unit": "ns/iter",
            "extra": "iterations: 806956\ncpu: 875.0824989212605 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 920.7105414251488,
            "unit": "ns/iter",
            "extra": "iterations: 773102\ncpu: 920.9054807773202 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 1089.9427552524232,
            "unit": "ns/iter",
            "extra": "iterations: 594168\ncpu: 1102.2007109102951 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 865.238343937277,
            "unit": "ns/iter",
            "extra": "iterations: 794415\ncpu: 865.0139221951854 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 895.2757134671081,
            "unit": "ns/iter",
            "extra": "iterations: 765980\ncpu: 903.2489621137023 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 964.6185922706786,
            "unit": "ns/iter",
            "extra": "iterations: 709102\ncpu: 973.8096395146981 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 1074.9411345000537,
            "unit": "ns/iter",
            "extra": "iterations: 658569\ncpu: 1076.8761010604487 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 2286.594978889838,
            "unit": "ns/iter",
            "extra": "iterations: 314791\ncpu: 2307.5424392698924 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 50.1909021000003,
            "unit": "ns/iter",
            "extra": "iterations: 10000000\ncpu: 50.18307720000017 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 69.91938176058551,
            "unit": "ns/iter",
            "extra": "iterations: 10390279\ncpu: 69.90383780839768 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 128.4250149286491,
            "unit": "ns/iter",
            "extra": "iterations: 5248298\ncpu: 128.4108179451697 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 235.86562912397517,
            "unit": "ns/iter",
            "extra": "iterations: 3004535\ncpu: 235.78361277202606 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 1647.8693754375556,
            "unit": "ns/iter",
            "extra": "iterations: 426811\ncpu: 1644.675755778456 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 6.949822787413718,
            "unit": "ns/iter",
            "extra": "iterations: 103668991\ncpu: 6.944269063060516 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 15.960128309319435,
            "unit": "ns/iter",
            "extra": "iterations: 41389667\ncpu: 15.958906241019065 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 34.324225730071795,
            "unit": "ns/iter",
            "extra": "iterations: 20380005\ncpu: 34.32399265849053 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 50.14795099999958,
            "unit": "ns/iter",
            "extra": "iterations: 10000000\ncpu: 50.14480180000014 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 821.9455941694686,
            "unit": "ns/iter",
            "extra": "iterations: 806365\ncpu: 830.3568309638218 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 810.6923061580394,
            "unit": "ns/iter",
            "extra": "iterations: 880661\ncpu: 796.7576865539803 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 789.8545241370681,
            "unit": "ns/iter",
            "extra": "iterations: 853296\ncpu: 796.6246367014013 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 804.3923223602015,
            "unit": "ns/iter",
            "extra": "iterations: 889883\ncpu: 799.2379211646182 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 795.1626421166615,
            "unit": "ns/iter",
            "extra": "iterations: 872148\ncpu: 801.2619761780934 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 1617.763487512266,
            "unit": "ns/iter",
            "extra": "iterations: 436721\ncpu: 1631.9310955896067 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 1641.1800092041035,
            "unit": "ns/iter",
            "extra": "iterations: 423695\ncpu: 1655.6686083188606 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 1720.350447211251,
            "unit": "ns/iter",
            "extra": "iterations: 419484\ncpu: 1745.5799005394679 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 1814.469080380527,
            "unit": "ns/iter",
            "extra": "iterations: 391289\ncpu: 1821.2170569641892 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 2107.0186318515835,
            "unit": "ns/iter",
            "extra": "iterations: 310813\ncpu: 2093.6870175966637 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 1618.5047849438379,
            "unit": "ns/iter",
            "extra": "iterations: 430831\ncpu: 1619.4817341381602 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 1600.9044636701342,
            "unit": "ns/iter",
            "extra": "iterations: 432673\ncpu: 1610.8184448714535 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 1616.0840299001275,
            "unit": "ns/iter",
            "extra": "iterations: 429109\ncpu: 1625.7443889469328 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 1671.9947591134232,
            "unit": "ns/iter",
            "extra": "iterations: 416918\ncpu: 1688.2819115594546 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 1976.690704698641,
            "unit": "ns/iter",
            "extra": "iterations: 366627\ncpu: 1956.685795097105 ns\nthreads: 1"
          }
        ]
      }
    ]
  }
}