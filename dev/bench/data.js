window.BENCHMARK_DATA = {
  "lastUpdate": 1592585990727,
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
          "id": "58013c3ab5f6db9807d51d716babd5dadb9b1cb7",
          "message": "Merge pull request #62 from Lol3rrr/dev\n\nDev",
          "timestamp": "2020-06-14T17:20:55+02:00",
          "tree_id": "24d7c4652272aa1879e287d6bab7d2f84771d73a",
          "url": "https://github.com/Lol3rrr/http-server/commit/58013c3ab5f6db9807d51d716babd5dadb9b1cb7"
        },
        "date": 1592148137691,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_ParseFirstLine",
            "value": 15.63143575331079,
            "unit": "ns/iter",
            "extra": "iterations: 46182084\ncpu: 15.627544287520678 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 846.9232628708488,
            "unit": "ns/iter",
            "extra": "iterations: 1027990\ncpu: 849.5232239613437 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 739.5342707285236,
            "unit": "ns/iter",
            "extra": "iterations: 914804\ncpu: 746.0581763956734 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 828.0594565115608,
            "unit": "ns/iter",
            "extra": "iterations: 924760\ncpu: 828.4547752930318 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 833.7364176891302,
            "unit": "ns/iter",
            "extra": "iterations: 788949\ncpu: 831.0702276070537 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 962.106545775331,
            "unit": "ns/iter",
            "extra": "iterations: 730090\ncpu: 961.8293758303038 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 784.9767510012126,
            "unit": "ns/iter",
            "extra": "iterations: 835735\ncpu: 796.6962589800605 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 820.2565617098268,
            "unit": "ns/iter",
            "extra": "iterations: 849055\ncpu: 825.874421563444 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 848.979941385298,
            "unit": "ns/iter",
            "extra": "iterations: 836897\ncpu: 851.0919157320732 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 945.3259149252649,
            "unit": "ns/iter",
            "extra": "iterations: 730525\ncpu: 941.2582293554374 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 2114.800884289635,
            "unit": "ns/iter",
            "extra": "iterations: 353508\ncpu: 2135.4553362324614 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 43.81883108169703,
            "unit": "ns/iter",
            "extra": "iterations: 15158014\ncpu: 43.798367121181016 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 59.668543580372045,
            "unit": "ns/iter",
            "extra": "iterations: 11853857\ncpu: 59.6634999055582 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 113.73335029241935,
            "unit": "ns/iter",
            "extra": "iterations: 5181097\ncpu: 113.71051883413939 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 205.19514327756883,
            "unit": "ns/iter",
            "extra": "iterations: 3642580\ncpu: 205.19557319262753 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 1589.7359697146085,
            "unit": "ns/iter",
            "extra": "iterations: 491152\ncpu: 1598.1426503384432 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 5.331999973588448,
            "unit": "ns/iter",
            "extra": "iterations: 128731200\ncpu: 5.330824353381308 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 14.816311787819993,
            "unit": "ns/iter",
            "extra": "iterations: 46313881\ncpu: 14.802656637650394 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 34.02433591312932,
            "unit": "ns/iter",
            "extra": "iterations: 24571710\ncpu: 34.01434426012677 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 58.21904568561554,
            "unit": "ns/iter",
            "extra": "iterations: 10974811\ncpu: 58.109473593668156 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 777.9602303632648,
            "unit": "ns/iter",
            "extra": "iterations: 910217\ncpu: 778.3599855848233 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 731.1356379640135,
            "unit": "ns/iter",
            "extra": "iterations: 980227\ncpu: 736.4276958282544 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 738.0284030166855,
            "unit": "ns/iter",
            "extra": "iterations: 944090\ncpu: 732.0558368371306 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 771.4816985489084,
            "unit": "ns/iter",
            "extra": "iterations: 1024946\ncpu: 783.4474547927626 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 727.0238979363995,
            "unit": "ns/iter",
            "extra": "iterations: 955773\ncpu: 720.6129101755591 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 1571.8059541421121,
            "unit": "ns/iter",
            "extra": "iterations: 476944\ncpu: 1571.779458387874 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 1511.421692778122,
            "unit": "ns/iter",
            "extra": "iterations: 492477\ncpu: 1516.618095863946 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 1675.1652035008499,
            "unit": "ns/iter",
            "extra": "iterations: 408018\ncpu: 1678.3481954237784 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 1680.3740860979906,
            "unit": "ns/iter",
            "extra": "iterations: 426327\ncpu: 1678.4783698852953 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 1835.8181143977283,
            "unit": "ns/iter",
            "extra": "iterations: 351908\ncpu: 1847.0099685141906 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 1477.096649672925,
            "unit": "ns/iter",
            "extra": "iterations: 485951\ncpu: 1464.7869044423683 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 1409.5414054877263,
            "unit": "ns/iter",
            "extra": "iterations: 463453\ncpu: 1385.302563582552 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 1547.0356340133228,
            "unit": "ns/iter",
            "extra": "iterations: 475108\ncpu: 1516.6249126500736 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 1552.3774476797,
            "unit": "ns/iter",
            "extra": "iterations: 458445\ncpu: 1563.3049918667714 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 1755.3168837282776,
            "unit": "ns/iter",
            "extra": "iterations: 363960\ncpu: 1747.4057368924844 ns\nthreads: 1"
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
          "id": "1f4a9b874fd365414e55b1afa1de5cc09b5d53e0",
          "message": "renamed itoa to citoa, to distinguish  the func from the standard library, and fixed some problems",
          "timestamp": "2020-06-15T03:01:07+02:00",
          "tree_id": "1b05d8e3777418742e88fd2ebdb29da98846c123",
          "url": "https://github.com/Lol3rrr/http-server/commit/1f4a9b874fd365414e55b1afa1de5cc09b5d53e0"
        },
        "date": 1592183995441,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_Itoa",
            "value": 4.531145362315174,
            "unit": "ns/iter",
            "extra": "iterations: 154338516\ncpu: 4.525694500004134 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseFirstLine",
            "value": 12.820146849609559,
            "unit": "ns/iter",
            "extra": "iterations: 52589721\ncpu: 12.812759151165684 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 518.8699350033374,
            "unit": "ns/iter",
            "extra": "iterations: 1000000\ncpu: 525.3234799998285 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 514.2134250040442,
            "unit": "ns/iter",
            "extra": "iterations: 1000000\ncpu: 511.6585819998231 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 543.4338150632044,
            "unit": "ns/iter",
            "extra": "iterations: 1256517\ncpu: 548.1123128458538 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 588.474821366339,
            "unit": "ns/iter",
            "extra": "iterations: 1307696\ncpu: 590.9052402086271 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 724.7373892211291,
            "unit": "ns/iter",
            "extra": "iterations: 861941\ncpu: 732.4362421556825 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 552.8711182788071,
            "unit": "ns/iter",
            "extra": "iterations: 1268605\ncpu: 542.3211803507554 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 567.8220346086857,
            "unit": "ns/iter",
            "extra": "iterations: 1293774\ncpu: 566.0693359116682 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 619.279647257646,
            "unit": "ns/iter",
            "extra": "iterations: 1167199\ncpu: 623.6467885925757 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 689.628006103117,
            "unit": "ns/iter",
            "extra": "iterations: 1010694\ncpu: 688.5321096195645 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 1635.7094123166346,
            "unit": "ns/iter",
            "extra": "iterations: 406318\ncpu: 1641.829335643073 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 45.05862038903497,
            "unit": "ns/iter",
            "extra": "iterations: 13581162\ncpu: 45.0467891480862 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 63.16628111830664,
            "unit": "ns/iter",
            "extra": "iterations: 11484076\ncpu: 63.13923192427499 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 108.43749194494855,
            "unit": "ns/iter",
            "extra": "iterations: 6463335\ncpu: 108.42565177265291 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 198.23405568207787,
            "unit": "ns/iter",
            "extra": "iterations: 3417832\ncpu: 198.14444273445898 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 1052.8777756935817,
            "unit": "ns/iter",
            "extra": "iterations: 670104\ncpu: 1072.792765002862 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 6.107602194753879,
            "unit": "ns/iter",
            "extra": "iterations: 111235798\ncpu: 6.104076432301044 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 14.439831441606396,
            "unit": "ns/iter",
            "extra": "iterations: 51259862\ncpu: 14.439622233083629 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 28.698049815200367,
            "unit": "ns/iter",
            "extra": "iterations: 24307440\ncpu: 28.68461298269167 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 44.025887564902696,
            "unit": "ns/iter",
            "extra": "iterations: 16324440\ncpu: 43.9710277351015 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 498.0644489886856,
            "unit": "ns/iter",
            "extra": "iterations: 1000000\ncpu: 502.5889290000549 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 498.0407545846773,
            "unit": "ns/iter",
            "extra": "iterations: 1429238\ncpu: 501.9483857834588 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 492.98551462249884,
            "unit": "ns/iter",
            "extra": "iterations: 1408524\ncpu: 490.2434860896907 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 503.60989368399555,
            "unit": "ns/iter",
            "extra": "iterations: 1429700\ncpu: 505.4506420949269 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 521.7455647246018,
            "unit": "ns/iter",
            "extra": "iterations: 1360739\ncpu: 529.1721035374475 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 1030.0057077900626,
            "unit": "ns/iter",
            "extra": "iterations: 655070\ncpu: 1031.6331216508243 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 1020.7298192586081,
            "unit": "ns/iter",
            "extra": "iterations: 675174\ncpu: 1030.7728659574327 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 1075.2032645594022,
            "unit": "ns/iter",
            "extra": "iterations: 623606\ncpu: 1081.7453087312929 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 1208.8571705794361,
            "unit": "ns/iter",
            "extra": "iterations: 592602\ncpu: 1214.3710382332895 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 1377.3397947049064,
            "unit": "ns/iter",
            "extra": "iterations: 465843\ncpu: 1384.8932387129469 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 1019.3808404333871,
            "unit": "ns/iter",
            "extra": "iterations: 688711\ncpu: 1028.4977356260017 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 995.0306834778388,
            "unit": "ns/iter",
            "extra": "iterations: 705396\ncpu: 1002.1447584063695 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 1054.8614439564244,
            "unit": "ns/iter",
            "extra": "iterations: 656745\ncpu: 1059.1427844970485 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 1098.6898523660013,
            "unit": "ns/iter",
            "extra": "iterations: 637735\ncpu: 1102.5022117405365 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 1315.6939651920488,
            "unit": "ns/iter",
            "extra": "iterations: 522434\ncpu: 1328.7593629104413 ns\nthreads: 1"
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
          "id": "cd16ea0e64398467333ad7a5fbb302c81f562795",
          "message": "Merge pull request #63 from Lol3rrr/dev\n\nDev",
          "timestamp": "2020-06-15T03:52:16+02:00",
          "tree_id": "1b05d8e3777418742e88fd2ebdb29da98846c123",
          "url": "https://github.com/Lol3rrr/http-server/commit/cd16ea0e64398467333ad7a5fbb302c81f562795"
        },
        "date": 1592186017411,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_Itoa",
            "value": 5.773361896491256,
            "unit": "ns/iter",
            "extra": "iterations: 124047442\ncpu: 5.751289260765248 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseFirstLine",
            "value": 15.805604340121269,
            "unit": "ns/iter",
            "extra": "iterations: 41018210\ncpu: 15.803963873606376 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 806.7170133023078,
            "unit": "ns/iter",
            "extra": "iterations: 877331\ncpu: 796.045754680878 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 875.3648039022792,
            "unit": "ns/iter",
            "extra": "iterations: 872699\ncpu: 882.60851908849 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 847.3220213312895,
            "unit": "ns/iter",
            "extra": "iterations: 809406\ncpu: 847.2829717099191 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 961.6473143405658,
            "unit": "ns/iter",
            "extra": "iterations: 738757\ncpu: 951.2342082716652 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 1108.1001320326252,
            "unit": "ns/iter",
            "extra": "iterations: 640015\ncpu: 1102.4796418842973 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 863.7560693562675,
            "unit": "ns/iter",
            "extra": "iterations: 788675\ncpu: 863.8548312040709 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 904.8379382509984,
            "unit": "ns/iter",
            "extra": "iterations: 806131\ncpu: 905.0075744505054 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 1008.3615411906104,
            "unit": "ns/iter",
            "extra": "iterations: 729773\ncpu: 1009.899168645403 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 1041.4130961050282,
            "unit": "ns/iter",
            "extra": "iterations: 669619\ncpu: 1045.1237390233148 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 2164.2263338048124,
            "unit": "ns/iter",
            "extra": "iterations: 331665\ncpu: 2174.5663998289574 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 49.88471106006422,
            "unit": "ns/iter",
            "extra": "iterations: 13879857\ncpu: 49.859381764523945 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 66.3075205318406,
            "unit": "ns/iter",
            "extra": "iterations: 9601063\ncpu: 66.24618732321633 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 123.07319635852231,
            "unit": "ns/iter",
            "extra": "iterations: 5774249\ncpu: 123.0196593531042 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 234.51783462819253,
            "unit": "ns/iter",
            "extra": "iterations: 3246297\ncpu: 234.48641544504386 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 1607.5865002518406,
            "unit": "ns/iter",
            "extra": "iterations: 409727\ncpu: 1594.3082515951103 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 6.652106536183936,
            "unit": "ns/iter",
            "extra": "iterations: 114458727\ncpu: 6.587533827805007 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 4.401945036864816,
            "unit": "ns/iter",
            "extra": "iterations: 162310137\ncpu: 4.400623683781371 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 33.92604193358846,
            "unit": "ns/iter",
            "extra": "iterations: 20987758\ncpu: 33.92335184158308 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 59.75146479674306,
            "unit": "ns/iter",
            "extra": "iterations: 11270335\ncpu: 59.73827849837655 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 792.5349133492546,
            "unit": "ns/iter",
            "extra": "iterations: 830413\ncpu: 791.9779964846415 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 791.2481043620475,
            "unit": "ns/iter",
            "extra": "iterations: 895079\ncpu: 796.119045356303 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 847.1555537838832,
            "unit": "ns/iter",
            "extra": "iterations: 874180\ncpu: 832.9661202450908 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 805.5716582003535,
            "unit": "ns/iter",
            "extra": "iterations: 789540\ncpu: 798.6683841193646 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 789.1326232951894,
            "unit": "ns/iter",
            "extra": "iterations: 900415\ncpu: 796.1044551683402 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 1613.7675685552567,
            "unit": "ns/iter",
            "extra": "iterations: 423854\ncpu: 1603.9920774652242 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 1660.9816011120317,
            "unit": "ns/iter",
            "extra": "iterations: 439103\ncpu: 1667.3600157455503 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 1705.8018949120872,
            "unit": "ns/iter",
            "extra": "iterations: 417960\ncpu: 1691.7189707193509 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 1927.4949581856897,
            "unit": "ns/iter",
            "extra": "iterations: 389146\ncpu: 1918.0334399045998 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 2165.4635545619503,
            "unit": "ns/iter",
            "extra": "iterations: 330837\ncpu: 2156.636651875119 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 1630.3899779603912,
            "unit": "ns/iter",
            "extra": "iterations: 449569\ncpu: 1603.4457246754957 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 1632.9899032684013,
            "unit": "ns/iter",
            "extra": "iterations: 448561\ncpu: 1657.3551088986976 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 1611.0992271560156,
            "unit": "ns/iter",
            "extra": "iterations: 441230\ncpu: 1618.3657298982523 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 1818.3550931501204,
            "unit": "ns/iter",
            "extra": "iterations: 351688\ncpu: 1801.3624917533543 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 1994.5509674223385,
            "unit": "ns/iter",
            "extra": "iterations: 340904\ncpu: 1982.3704825971822 ns\nthreads: 1"
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
          "id": "39ea75658d7eba3af74ee83ce876555445275bea",
          "message": "Moved some mallocs around to free up the hot path a bit more",
          "timestamp": "2020-06-17T02:30:11+02:00",
          "tree_id": "a8ec9e51c531db1c059a539fbb57ad6d69d8cafc",
          "url": "https://github.com/Lol3rrr/http-server/commit/39ea75658d7eba3af74ee83ce876555445275bea"
        },
        "date": 1592353877163,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_Itoa",
            "value": 5.6060509412441535,
            "unit": "ns/iter",
            "extra": "iterations: 122108011\ncpu: 5.6019630194451375 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseFirstLine",
            "value": 16.529539230005494,
            "unit": "ns/iter",
            "extra": "iterations: 42954251\ncpu: 16.52568287129486 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 44.90338834073492,
            "unit": "ns/iter",
            "extra": "iterations: 15796965\ncpu: 44.89606940320497 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 61.69357143030695,
            "unit": "ns/iter",
            "extra": "iterations: 11522532\ncpu: 61.6783207892154 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 107.75843000364672,
            "unit": "ns/iter",
            "extra": "iterations: 6547684\ncpu: 107.70350600303871 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 185.20517794253115,
            "unit": "ns/iter",
            "extra": "iterations: 3832951\ncpu: 185.19215351305047 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 402.47244992792076,
            "unit": "ns/iter",
            "extra": "iterations: 1725912\ncpu: 402.3994919787336 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 44.94686689910017,
            "unit": "ns/iter",
            "extra": "iterations: 15618249\ncpu: 44.9353255925168 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 62.7193158629514,
            "unit": "ns/iter",
            "extra": "iterations: 11232954\ncpu: 62.71459128204386 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 130.8944062956281,
            "unit": "ns/iter",
            "extra": "iterations: 5562718\ncpu: 130.85158981634524 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 244.05041481986618,
            "unit": "ns/iter",
            "extra": "iterations: 2903670\ncpu: 244.02189849397467 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 1081.3675306970583,
            "unit": "ns/iter",
            "extra": "iterations: 633041\ncpu: 1081.3702414219615 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 54.68622302187841,
            "unit": "ns/iter",
            "extra": "iterations: 13158996\ncpu: 54.668700332457 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 81.13372269043883,
            "unit": "ns/iter",
            "extra": "iterations: 8931304\ncpu: 79.55149729535593 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 140.26254602878558,
            "unit": "ns/iter",
            "extra": "iterations: 5112833\ncpu: 140.2153962392278 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 261.38399891278675,
            "unit": "ns/iter",
            "extra": "iterations: 2707841\ncpu: 260.83542940667485 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 42.96974839002981,
            "unit": "ns/iter",
            "extra": "iterations: 16386632\ncpu: 42.94978431199287 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 6.1964672281445665,
            "unit": "ns/iter",
            "extra": "iterations: 113389094\ncpu: 6.194217673174106 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 15.792001749424243,
            "unit": "ns/iter",
            "extra": "iterations: 44663842\ncpu: 15.788286775687588 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 34.12981212397214,
            "unit": "ns/iter",
            "extra": "iterations: 20634937\ncpu: 34.127741412537425 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 52.99610706384002,
            "unit": "ns/iter",
            "extra": "iterations: 12476444\ncpu: 52.996308483411035 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 6.551515226013216,
            "unit": "ns/iter",
            "extra": "iterations: 107548048\ncpu: 6.547584517758975 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 6.574904383200002,
            "unit": "ns/iter",
            "extra": "iterations: 107612888\ncpu: 6.574656950011413 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 6.564639566862735,
            "unit": "ns/iter",
            "extra": "iterations: 94698840\ncpu: 6.56331035311518 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 6.581057095365344,
            "unit": "ns/iter",
            "extra": "iterations: 108438977\ncpu: 6.58070069215059 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 6.764847686640192,
            "unit": "ns/iter",
            "extra": "iterations: 106985067\ncpu: 6.764796184125416 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 72.85121800441071,
            "unit": "ns/iter",
            "extra": "iterations: 10773360\ncpu: 72.83689257576101 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 113.53433517184227,
            "unit": "ns/iter",
            "extra": "iterations: 6181635\ncpu: 113.51208863027325 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 218.86065469650137,
            "unit": "ns/iter",
            "extra": "iterations: 3235545\ncpu: 218.82008131551282 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 465.02312179139426,
            "unit": "ns/iter",
            "extra": "iterations: 1487601\ncpu: 465.0243667488798 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 919.3887333321331,
            "unit": "ns/iter",
            "extra": "iterations: 774994\ncpu: 919.2027022144697 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 51.206272620500805,
            "unit": "ns/iter",
            "extra": "iterations: 13777049\ncpu: 51.202637081424314 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 64.40411152738571,
            "unit": "ns/iter",
            "extra": "iterations: 10667909\ncpu: 64.4034668837165 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 105.60141715113448,
            "unit": "ns/iter",
            "extra": "iterations: 6489075\ncpu: 105.57894137454093 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 267.00438401587223,
            "unit": "ns/iter",
            "extra": "iterations: 2675629\ncpu: 266.9851993680735 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 721.431386086418,
            "unit": "ns/iter",
            "extra": "iterations: 942921\ncpu: 721.2621057331427 ns\nthreads: 1"
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
          "id": "451be2a777896061fc3e9fdd5caf4577de1c5667",
          "message": "Merge pull request #64 from Lol3rrr/dev\n\nDev",
          "timestamp": "2020-06-17T02:35:08+02:00",
          "tree_id": "a8ec9e51c531db1c059a539fbb57ad6d69d8cafc",
          "url": "https://github.com/Lol3rrr/http-server/commit/451be2a777896061fc3e9fdd5caf4577de1c5667"
        },
        "date": 1592354166439,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_Itoa",
            "value": 5.673566893606906,
            "unit": "ns/iter",
            "extra": "iterations: 116927362\ncpu: 5.667822532419744 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseFirstLine",
            "value": 16.793278450276013,
            "unit": "ns/iter",
            "extra": "iterations: 46241836\ncpu: 16.77690126750158 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 48.59262877204493,
            "unit": "ns/iter",
            "extra": "iterations: 15948279\ncpu: 48.56396674525194 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 62.36468790804967,
            "unit": "ns/iter",
            "extra": "iterations: 11843705\ncpu: 62.326915015191645 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 106.97826340054853,
            "unit": "ns/iter",
            "extra": "iterations: 6416137\ncpu: 106.97119746663758 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 172.89820183365947,
            "unit": "ns/iter",
            "extra": "iterations: 3597943\ncpu: 172.8610770098357 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 373.360221695865,
            "unit": "ns/iter",
            "extra": "iterations: 1847937\ncpu: 373.3305583469567 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 50.73002379999991,
            "unit": "ns/iter",
            "extra": "iterations: 10000000\ncpu: 50.636470500000016 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 69.12706760085003,
            "unit": "ns/iter",
            "extra": "iterations: 10377547\ncpu: 69.09210413597746 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 151.08916150357652,
            "unit": "ns/iter",
            "extra": "iterations: 5009920\ncpu: 151.0678641575115 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 281.34149725973595,
            "unit": "ns/iter",
            "extra": "iterations: 2411993\ncpu: 281.2232664025147 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 1165.7651845861737,
            "unit": "ns/iter",
            "extra": "iterations: 546574\ncpu: 1165.7435205479965 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 52.586119910715034,
            "unit": "ns/iter",
            "extra": "iterations: 13833009\ncpu: 52.57465985889261 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 71.8618554710638,
            "unit": "ns/iter",
            "extra": "iterations: 10731927\ncpu: 71.77219030654969 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 135.3943205367094,
            "unit": "ns/iter",
            "extra": "iterations: 5789209\ncpu: 135.38776817351032 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 230.53533179608607,
            "unit": "ns/iter",
            "extra": "iterations: 3103819\ncpu: 230.44774711411944 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 41.78386663775358,
            "unit": "ns/iter",
            "extra": "iterations: 17020829\ncpu: 41.78281122499969 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 6.02423433977947,
            "unit": "ns/iter",
            "extra": "iterations: 117019074\ncpu: 6.02189358463048 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 14.734551098720546,
            "unit": "ns/iter",
            "extra": "iterations: 47233893\ncpu: 14.725820799907456 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 34.54722624977416,
            "unit": "ns/iter",
            "extra": "iterations: 21050147\ncpu: 34.53842873401319 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 58.77110342193925,
            "unit": "ns/iter",
            "extra": "iterations: 12605894\ncpu: 58.75564771526728 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 6.556156479894091,
            "unit": "ns/iter",
            "extra": "iterations: 105017658\ncpu: 6.554266026385766 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 6.847127301499565,
            "unit": "ns/iter",
            "extra": "iterations: 99575347\ncpu: 6.8462101467745855 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 6.642274482319934,
            "unit": "ns/iter",
            "extra": "iterations: 95510771\ncpu: 6.641767220159892 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 6.70224013274773,
            "unit": "ns/iter",
            "extra": "iterations: 106609441\ncpu: 6.698510416164737 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 6.874977097612339,
            "unit": "ns/iter",
            "extra": "iterations: 106779260\ncpu: 6.874472598892348 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 63.50205450054381,
            "unit": "ns/iter",
            "extra": "iterations: 11269649\ncpu: 63.49691352410336 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 110.54970588326184,
            "unit": "ns/iter",
            "extra": "iterations: 5823878\ncpu: 110.52327727332208 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 233.2653275140582,
            "unit": "ns/iter",
            "extra": "iterations: 2778125\ncpu: 233.25796499437655 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 515.7647282007252,
            "unit": "ns/iter",
            "extra": "iterations: 1357362\ncpu: 515.322332583349 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 1004.2063778029886,
            "unit": "ns/iter",
            "extra": "iterations: 667189\ncpu: 1004.1353574474396 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 51.70333799548858,
            "unit": "ns/iter",
            "extra": "iterations: 13158436\ncpu: 51.66256544470774 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 58.935334334100325,
            "unit": "ns/iter",
            "extra": "iterations: 11399929\ncpu: 58.924059351597776 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 89.13872724283341,
            "unit": "ns/iter",
            "extra": "iterations: 8064602\ncpu: 89.13260394003298 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 253.76844467552831,
            "unit": "ns/iter",
            "extra": "iterations: 2931144\ncpu: 253.67191444705588 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 739.4583159984969,
            "unit": "ns/iter",
            "extra": "iterations: 995106\ncpu: 739.4323006795262 ns\nthreads: 1"
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
          "id": "556d1793b5ca248207e991d30a7b1f7d8d426a2c",
          "message": "creating and starting the thread pool is now seperated",
          "timestamp": "2020-06-18T16:12:29+02:00",
          "tree_id": "a76645c018bf95d5ca136da2c430b866b18b8bf9",
          "url": "https://github.com/Lol3rrr/http-server/commit/556d1793b5ca248207e991d30a7b1f7d8d426a2c"
        },
        "date": 1592489715232,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_Itoa",
            "value": 4.807135996129781,
            "unit": "ns/iter",
            "extra": "iterations: 135136228\ncpu: 4.8065998408657675 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseFirstLine",
            "value": 14.476310155674584,
            "unit": "ns/iter",
            "extra": "iterations: 48127754\ncpu: 14.472290022094112 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 38.64282548088593,
            "unit": "ns/iter",
            "extra": "iterations: 18180891\ncpu: 38.63408493016102 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 53.83887047879784,
            "unit": "ns/iter",
            "extra": "iterations: 13139231\ncpu: 53.83422492533999 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 96.30864224761461,
            "unit": "ns/iter",
            "extra": "iterations: 7299328\ncpu: 96.2917806954283 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 161.1686481191468,
            "unit": "ns/iter",
            "extra": "iterations: 4381466\ncpu: 161.09710380041756 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 350.3686179754453,
            "unit": "ns/iter",
            "extra": "iterations: 2001853\ncpu: 350.32768290179155 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 38.5390060812847,
            "unit": "ns/iter",
            "extra": "iterations: 17854780\ncpu: 38.534186699584055 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 54.62728661961451,
            "unit": "ns/iter",
            "extra": "iterations: 12974447\ncpu: 54.62664559036701 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 110.0898084446628,
            "unit": "ns/iter",
            "extra": "iterations: 6320419\ncpu: 110.08192146754831 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 221.31542338638155,
            "unit": "ns/iter",
            "extra": "iterations: 3240527\ncpu: 221.26382375459303 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 934.1639759525671,
            "unit": "ns/iter",
            "extra": "iterations: 760331\ncpu: 933.9905791030468 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 50.50611899999922,
            "unit": "ns/iter",
            "extra": "iterations: 10000000\ncpu: 50.49635040000009 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 68.69274504606763,
            "unit": "ns/iter",
            "extra": "iterations: 9771530\ncpu: 68.6920348195215 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 118.90349248524856,
            "unit": "ns/iter",
            "extra": "iterations: 5810905\ncpu: 118.88539065773739 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 234.25423776376925,
            "unit": "ns/iter",
            "extra": "iterations: 3028956\ncpu: 231.1139082244838 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 38.888380360377404,
            "unit": "ns/iter",
            "extra": "iterations: 18342247\ncpu: 38.87229345455877 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 5.696066768621496,
            "unit": "ns/iter",
            "extra": "iterations: 122341061\ncpu: 5.695403597979263 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 14.071571233109191,
            "unit": "ns/iter",
            "extra": "iterations: 52414215\ncpu: 14.06865648946566 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 30.48465247067892,
            "unit": "ns/iter",
            "extra": "iterations: 23315414\ncpu: 30.482248052725968 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 9.479126081373654,
            "unit": "ns/iter",
            "extra": "iterations: 76671349\ncpu: 9.381159942809958 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 6.027147940669431,
            "unit": "ns/iter",
            "extra": "iterations: 116324477\ncpu: 6.025888308958401 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 5.896525063274199,
            "unit": "ns/iter",
            "extra": "iterations: 116094229\ncpu: 5.8964179433932 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 5.768448018124303,
            "unit": "ns/iter",
            "extra": "iterations: 118513259\ncpu: 5.767794352866442 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 5.685048655076909,
            "unit": "ns/iter",
            "extra": "iterations: 124411169\ncpu: 5.684558538309392 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 5.800935035896938,
            "unit": "ns/iter",
            "extra": "iterations: 127241532\ncpu: 5.80053258082431 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 56.92310703863159,
            "unit": "ns/iter",
            "extra": "iterations: 12022921\ncpu: 56.90987755804099 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 96.0872849962437,
            "unit": "ns/iter",
            "extra": "iterations: 7271559\ncpu: 96.08576799005567 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 188.94399015843982,
            "unit": "ns/iter",
            "extra": "iterations: 3864428\ncpu: 188.9026399249775 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 391.1118993433835,
            "unit": "ns/iter",
            "extra": "iterations: 1799385\ncpu: 391.10489583941154 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 777.0369725792964,
            "unit": "ns/iter",
            "extra": "iterations: 919925\ncpu: 776.9370850884605 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 43.96739617749945,
            "unit": "ns/iter",
            "extra": "iterations: 15910159\ncpu: 43.96515691640808 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 57.4598283915024,
            "unit": "ns/iter",
            "extra": "iterations: 12179933\ncpu: 57.45308106374647 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 87.69730918387746,
            "unit": "ns/iter",
            "extra": "iterations: 8019946\ncpu: 87.67052446487773 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 225.53117453459026,
            "unit": "ns/iter",
            "extra": "iterations: 3060591\ncpu: 225.51897754387906 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 625.2429128413073,
            "unit": "ns/iter",
            "extra": "iterations: 1166229\ncpu: 625.1203014159317 ns\nthreads: 1"
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
          "id": "7b6d3738fdbf6350dab80155144bfa84efe6d1d8",
          "message": "Now all the functions in cross.h have replaced the old ones",
          "timestamp": "2020-06-18T18:59:56+02:00",
          "tree_id": "508a910aa1d86fc90c2f2df002ca04649a4ad0dc",
          "url": "https://github.com/Lol3rrr/http-server/commit/7b6d3738fdbf6350dab80155144bfa84efe6d1d8"
        },
        "date": 1592499673910,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_Itoa",
            "value": 5.6807593258685225,
            "unit": "ns/iter",
            "extra": "iterations: 97918118\ncpu: 5.678808553081057 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseFirstLine",
            "value": 17.19390599144063,
            "unit": "ns/iter",
            "extra": "iterations: 36401196\ncpu: 17.192325109317835 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 71.2472979888698,
            "unit": "ns/iter",
            "extra": "iterations: 9639209\ncpu: 71.17913938788963 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 86.77560521134781,
            "unit": "ns/iter",
            "extra": "iterations: 9295100\ncpu: 86.75814310765887 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 132.81215684109983,
            "unit": "ns/iter",
            "extra": "iterations: 5870094\ncpu: 132.71081348952848 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 212.37140918434994,
            "unit": "ns/iter",
            "extra": "iterations: 3239271\ncpu: 212.31623751146466 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 439.3258766995725,
            "unit": "ns/iter",
            "extra": "iterations: 1620481\ncpu: 438.9365009524949 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 52.06176394535852,
            "unit": "ns/iter",
            "extra": "iterations: 12920661\ncpu: 52.05537541771279 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 84.61609784505005,
            "unit": "ns/iter",
            "extra": "iterations: 9425597\ncpu: 84.572433449043 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 169.7300597658435,
            "unit": "ns/iter",
            "extra": "iterations: 4260795\ncpu: 169.71677116594427 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 301.02913493572794,
            "unit": "ns/iter",
            "extra": "iterations: 2187271\ncpu: 299.57801113808006 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 1270.5211371157936,
            "unit": "ns/iter",
            "extra": "iterations: 512771\ncpu: 1269.229250484137 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 52.35780696432718,
            "unit": "ns/iter",
            "extra": "iterations: 13326915\ncpu: 52.35008837379089 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 73.65537739941595,
            "unit": "ns/iter",
            "extra": "iterations: 9024855\ncpu: 73.58558902054376 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 134.00871321807858,
            "unit": "ns/iter",
            "extra": "iterations: 5223558\ncpu: 133.7583459396833 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 245.34170226332924,
            "unit": "ns/iter",
            "extra": "iterations: 2916940\ncpu: 245.2435041516113 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 45.015981664659996,
            "unit": "ns/iter",
            "extra": "iterations: 15544626\ncpu: 44.90067345460735 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 6.765405919862071,
            "unit": "ns/iter",
            "extra": "iterations: 94649298\ncpu: 6.762254243026722 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 16.742259134053537,
            "unit": "ns/iter",
            "extra": "iterations: 41788348\ncpu: 16.739454931312398 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 4.007861108170344,
            "unit": "ns/iter",
            "extra": "iterations: 167483257\ncpu: 4.004849583263118 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 60.91836836876463,
            "unit": "ns/iter",
            "extra": "iterations: 169384671\ncpu: 60.882286496869604 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 7.520218374432695,
            "unit": "ns/iter",
            "extra": "iterations: 95728789\ncpu: 7.5199995583355985 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 7.235683545829754,
            "unit": "ns/iter",
            "extra": "iterations: 96417083\ncpu: 7.228420009346279 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 7.351302736756432,
            "unit": "ns/iter",
            "extra": "iterations: 92942837\ncpu: 7.349171039399186 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 7.313255817067656,
            "unit": "ns/iter",
            "extra": "iterations: 96109979\ncpu: 7.309921324610852 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 7.277005101072459,
            "unit": "ns/iter",
            "extra": "iterations: 88109511\ncpu: 7.272442971565215 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 71.40311694310861,
            "unit": "ns/iter",
            "extra": "iterations: 10261015\ncpu: 71.39564809134339 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 124.23762816702732,
            "unit": "ns/iter",
            "extra": "iterations: 5711785\ncpu: 124.14385047756556 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 245.98458210593796,
            "unit": "ns/iter",
            "extra": "iterations: 2781638\ncpu: 245.97367234701204 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 533.7028670069586,
            "unit": "ns/iter",
            "extra": "iterations: 1320227\ncpu: 533.4810899943717 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 1072.6974670813995,
            "unit": "ns/iter",
            "extra": "iterations: 663227\ncpu: 1072.4055745619473 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 56.81592560759671,
            "unit": "ns/iter",
            "extra": "iterations: 10328259\ncpu: 56.813530625055506 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 75.24866149454745,
            "unit": "ns/iter",
            "extra": "iterations: 9072619\ncpu: 75.19481408841308 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 108.0283919058793,
            "unit": "ns/iter",
            "extra": "iterations: 6388687\ncpu: 108.01653970526421 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 287.3197863499577,
            "unit": "ns/iter",
            "extra": "iterations: 2445120\ncpu: 287.1841337030503 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 800.7315602059441,
            "unit": "ns/iter",
            "extra": "iterations: 843895\ncpu: 800.6591187292255 ns\nthreads: 1"
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
          "id": "000335f9806ef2e2472564e682de8c6c604edaed",
          "message": "Now also moved the thread synchronization stuff into the cross.h stuff",
          "timestamp": "2020-06-18T19:22:46+02:00",
          "tree_id": "e8655c82c90cabdeaa4ebaabc5b915bb275bb66d",
          "url": "https://github.com/Lol3rrr/http-server/commit/000335f9806ef2e2472564e682de8c6c604edaed"
        },
        "date": 1592501031176,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_Itoa",
            "value": 4.507202099408638,
            "unit": "ns/iter",
            "extra": "iterations: 162850432\ncpu: 4.505383516575504 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseFirstLine",
            "value": 13.605593916517822,
            "unit": "ns/iter",
            "extra": "iterations: 53939239\ncpu: 13.597046984663614 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 51.548746413298836,
            "unit": "ns/iter",
            "extra": "iterations: 14086062\ncpu: 51.52706235426196 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 69.90069178767341,
            "unit": "ns/iter",
            "extra": "iterations: 9503494\ncpu: 69.89672208979144 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 110.16435183035856,
            "unit": "ns/iter",
            "extra": "iterations: 6785145\ncpu: 110.14505659053708 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 163.8564242068165,
            "unit": "ns/iter",
            "extra": "iterations: 4255000\ncpu: 163.85546204465325 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 317.00014307262694,
            "unit": "ns/iter",
            "extra": "iterations: 2033932\ncpu: 316.9979311009412 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 40.79720942218888,
            "unit": "ns/iter",
            "extra": "iterations: 17159027\ncpu: 40.79532580722669 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 61.31404934082169,
            "unit": "ns/iter",
            "extra": "iterations: 11054903\ncpu: 61.31285213447829 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 123.09853584813891,
            "unit": "ns/iter",
            "extra": "iterations: 5393976\ncpu: 123.06331433436095 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 214.29909657763324,
            "unit": "ns/iter",
            "extra": "iterations: 3162751\ncpu: 214.28407105080353 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 878.2339141967001,
            "unit": "ns/iter",
            "extra": "iterations: 809083\ncpu: 877.9323159675828 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 41.95834914084318,
            "unit": "ns/iter",
            "extra": "iterations: 16192199\ncpu: 41.95792967959451 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 65.8120913071476,
            "unit": "ns/iter",
            "extra": "iterations: 11455883\ncpu: 65.6509932931403 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 106.71152885368292,
            "unit": "ns/iter",
            "extra": "iterations: 6196852\ncpu: 106.7001842225698 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 194.68034637870662,
            "unit": "ns/iter",
            "extra": "iterations: 3524928\ncpu: 194.64379783076427 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 35.69550100629668,
            "unit": "ns/iter",
            "extra": "iterations: 18873665\ncpu: 35.69374729285488 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 5.896099311101961,
            "unit": "ns/iter",
            "extra": "iterations: 119670246\ncpu: 5.89572945308393 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 14.107513194615581,
            "unit": "ns/iter",
            "extra": "iterations: 49478327\ncpu: 14.104981116277472 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 28.343710607121487,
            "unit": "ns/iter",
            "extra": "iterations: 23645613\ncpu: 28.343476356481023 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 27.262410515020765,
            "unit": "ns/iter",
            "extra": "iterations: 25881299\ncpu: 27.261843696485297 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 5.485955980584468,
            "unit": "ns/iter",
            "extra": "iterations: 127938409\ncpu: 5.484813696565503 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 5.354286082984371,
            "unit": "ns/iter",
            "extra": "iterations: 129257705\ncpu: 5.353780991237629 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 5.355327161244,
            "unit": "ns/iter",
            "extra": "iterations: 119642793\ncpu: 5.355285253161897 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 6.096692057695409,
            "unit": "ns/iter",
            "extra": "iterations: 128014506\ncpu: 6.094464044566944 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 5.449789381826823,
            "unit": "ns/iter",
            "extra": "iterations: 124082360\ncpu: 5.449799818443167 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 55.04143155117019,
            "unit": "ns/iter",
            "extra": "iterations: 13053868\ncpu: 55.03761973079556 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 98.016064554099,
            "unit": "ns/iter",
            "extra": "iterations: 7124443\ncpu: 98.01123105343096 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 188.43293412498403,
            "unit": "ns/iter",
            "extra": "iterations: 3636447\ncpu: 188.4335226114938 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 381.80282634456114,
            "unit": "ns/iter",
            "extra": "iterations: 1692858\ncpu: 381.7797612085596 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 837.2854529583456,
            "unit": "ns/iter",
            "extra": "iterations: 886682\ncpu: 837.0544163522 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 46.940205517469934,
            "unit": "ns/iter",
            "extra": "iterations: 14495702\ncpu: 46.93689432909152 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 55.76517371797789,
            "unit": "ns/iter",
            "extra": "iterations: 10611193\ncpu: 55.760451723005914 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 85.83299819985918,
            "unit": "ns/iter",
            "extra": "iterations: 7965483\ncpu: 85.81161581789823 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 213.24709736922205,
            "unit": "ns/iter",
            "extra": "iterations: 3132417\ncpu: 213.2478076833328 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 613.6627734688652,
            "unit": "ns/iter",
            "extra": "iterations: 1087281\ncpu: 613.5019410805478 ns\nthreads: 1"
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
          "id": "ff8152a3e69dc9653b6142364df09281b1ba152d",
          "message": "fixed build problem with prometheus metrics",
          "timestamp": "2020-06-18T19:26:15+02:00",
          "tree_id": "b4d18f0bbe25cd18cc1edbbcef081300b75b2bd7",
          "url": "https://github.com/Lol3rrr/http-server/commit/ff8152a3e69dc9653b6142364df09281b1ba152d"
        },
        "date": 1592501267825,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_Itoa",
            "value": 5.322743160146353,
            "unit": "ns/iter",
            "extra": "iterations: 130198217\ncpu: 5.320721642447684 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseFirstLine",
            "value": 15.975555442111864,
            "unit": "ns/iter",
            "extra": "iterations: 41939519\ncpu: 15.937349496068371 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 59.22914282729033,
            "unit": "ns/iter",
            "extra": "iterations: 11695461\ncpu: 59.15976642562444 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 79.87767927120329,
            "unit": "ns/iter",
            "extra": "iterations: 8806406\ncpu: 79.8729610013438 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 114.71365313820142,
            "unit": "ns/iter",
            "extra": "iterations: 6188753\ncpu: 114.62559307181911 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 176.07192943656497,
            "unit": "ns/iter",
            "extra": "iterations: 3969988\ncpu: 175.9876594085423 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 373.2846887188942,
            "unit": "ns/iter",
            "extra": "iterations: 1870046\ncpu: 373.2003127195801 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 49.90179036853849,
            "unit": "ns/iter",
            "extra": "iterations: 14188252\ncpu: 49.89889008173807 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 69.10049670292095,
            "unit": "ns/iter",
            "extra": "iterations: 10392530\ncpu: 69.074798918069 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 127.45177332658085,
            "unit": "ns/iter",
            "extra": "iterations: 5352370\ncpu: 127.43460840711683 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 233.6176097707295,
            "unit": "ns/iter",
            "extra": "iterations: 2987864\ncpu: 233.52869541585554 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 1009.7404061467842,
            "unit": "ns/iter",
            "extra": "iterations: 701569\ncpu: 1009.4546936937055 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 50.799517685125075,
            "unit": "ns/iter",
            "extra": "iterations: 14223903\ncpu: 50.78859881145139 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 74.2960041238761,
            "unit": "ns/iter",
            "extra": "iterations: 8549239\ncpu: 74.27617265115647 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 129.32594790487892,
            "unit": "ns/iter",
            "extra": "iterations: 5328330\ncpu: 129.32428453192657 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 231.64958185766133,
            "unit": "ns/iter",
            "extra": "iterations: 3094640\ncpu: 231.60070509009114 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 43.933077834066594,
            "unit": "ns/iter",
            "extra": "iterations: 16343165\ncpu: 43.92203107537613 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 6.054640316750259,
            "unit": "ns/iter",
            "extra": "iterations: 114062095\ncpu: 6.05378337124178 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 14.993343617266996,
            "unit": "ns/iter",
            "extra": "iterations: 46886727\ncpu: 14.99319080216457 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 36.01585662887634,
            "unit": "ns/iter",
            "extra": "iterations: 19459874\ncpu: 36.00924892936098 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 50.14973410824971,
            "unit": "ns/iter",
            "extra": "iterations: 13739802\ncpu: 50.14663333576425 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 6.211891709047385,
            "unit": "ns/iter",
            "extra": "iterations: 114609279\ncpu: 6.209475028631845 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 6.151805130672906,
            "unit": "ns/iter",
            "extra": "iterations: 102331179\ncpu: 6.150291701417815 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 6.154784950018348,
            "unit": "ns/iter",
            "extra": "iterations: 112538396\ncpu: 6.1547167599580765 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 6.2554965891472145,
            "unit": "ns/iter",
            "extra": "iterations: 112428041\ncpu: 6.253773878351226 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 6.4018658527660355,
            "unit": "ns/iter",
            "extra": "iterations: 111393784\ncpu: 6.400602712266236 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 64.19568967338341,
            "unit": "ns/iter",
            "extra": "iterations: 10935227\ncpu: 64.03539515000469 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 112.60933992219428,
            "unit": "ns/iter",
            "extra": "iterations: 6243264\ncpu: 112.54774137374297 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 218.23407893533653,
            "unit": "ns/iter",
            "extra": "iterations: 3247443\ncpu: 218.1760425048265 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 458.80990026765016,
            "unit": "ns/iter",
            "extra": "iterations: 1507535\ncpu: 458.6839867731097 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 915.1756964832484,
            "unit": "ns/iter",
            "extra": "iterations: 793630\ncpu: 915.1792447362108 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 49.62518740542481,
            "unit": "ns/iter",
            "extra": "iterations: 13744933\ncpu: 49.60886306248264 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 64.26978304505735,
            "unit": "ns/iter",
            "extra": "iterations: 11098203\ncpu: 64.26496514796135 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 101.41036085137357,
            "unit": "ns/iter",
            "extra": "iterations: 6871250\ncpu: 101.38632301255254 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 250.75441787563744,
            "unit": "ns/iter",
            "extra": "iterations: 2818719\ncpu: 250.70050083034207 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 695.7056883356096,
            "unit": "ns/iter",
            "extra": "iterations: 1002033\ncpu: 695.5913657534267 ns\nthreads: 1"
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
          "id": "f5cc22a74a00e3670e5ae4ddc691846371d9ff71",
          "message": "Now tracks the header-result size seperatly",
          "timestamp": "2020-06-19T12:12:36+02:00",
          "tree_id": "20f4427265a4a238a85720c0a5e213cd98e92055",
          "url": "https://github.com/Lol3rrr/http-server/commit/f5cc22a74a00e3670e5ae4ddc691846371d9ff71"
        },
        "date": 1592561621530,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_Itoa",
            "value": 5.36634566073113,
            "unit": "ns/iter",
            "extra": "iterations: 129465415\ncpu: 5.361887280861843 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseFirstLine",
            "value": 17.71800495745952,
            "unit": "ns/iter",
            "extra": "iterations: 42163532\ncpu: 17.70779888648797 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 59.82798905894503,
            "unit": "ns/iter",
            "extra": "iterations: 11661764\ncpu: 59.82251887450305 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 77.5216629648639,
            "unit": "ns/iter",
            "extra": "iterations: 9131137\ncpu: 77.49526658071166 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 126.8574624690564,
            "unit": "ns/iter",
            "extra": "iterations: 5877217\ncpu: 126.8455547923447 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 187.09166074066437,
            "unit": "ns/iter",
            "extra": "iterations: 3822138\ncpu: 186.79054419280519 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 387.6361139833661,
            "unit": "ns/iter",
            "extra": "iterations: 1818160\ncpu: 387.5197380868572 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 49.24907196908272,
            "unit": "ns/iter",
            "extra": "iterations: 14632325\ncpu: 49.23917190193632 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 76.09976523583065,
            "unit": "ns/iter",
            "extra": "iterations: 9385163\ncpu: 75.90757986835172 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 141.4838544104944,
            "unit": "ns/iter",
            "extra": "iterations: 4853152\ncpu: 141.4313621333104 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 284.053735507307,
            "unit": "ns/iter",
            "extra": "iterations: 2618734\ncpu: 284.01088961307215 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 1155.9100279854558,
            "unit": "ns/iter",
            "extra": "iterations: 609245\ncpu: 1154.7272640727463 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 35.69346986051898,
            "unit": "ns/iter",
            "extra": "iterations: 20249154\ncpu: 35.66300922991641 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 50.26698631576991,
            "unit": "ns/iter",
            "extra": "iterations: 14373261\ncpu: 49.72930151341435 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 89.41086747239021,
            "unit": "ns/iter",
            "extra": "iterations: 6849486\ncpu: 89.3732634828366 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 170.24721740131832,
            "unit": "ns/iter",
            "extra": "iterations: 4228691\ncpu: 170.17003110418798 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 39.38223970693389,
            "unit": "ns/iter",
            "extra": "iterations: 17456266\ncpu: 39.37599014588797 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 6.100649365664189,
            "unit": "ns/iter",
            "extra": "iterations: 108982664\ncpu: 6.098798805285188 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 14.946052522319881,
            "unit": "ns/iter",
            "extra": "iterations: 43751647\ncpu: 14.921702444710277 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 32.78746021014,
            "unit": "ns/iter",
            "extra": "iterations: 20678321\ncpu: 32.779645068862216 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 56.86540667939311,
            "unit": "ns/iter",
            "extra": "iterations: 12568328\ncpu: 56.85757620265795 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 6.691606015283504,
            "unit": "ns/iter",
            "extra": "iterations: 106531371\ncpu: 6.689801711084712 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 6.748799624621491,
            "unit": "ns/iter",
            "extra": "iterations: 106222397\ncpu: 6.7320354953014165 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 6.563980275450021,
            "unit": "ns/iter",
            "extra": "iterations: 106307115\ncpu: 6.563520334457402 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 6.697326280648296,
            "unit": "ns/iter",
            "extra": "iterations: 107849988\ncpu: 6.695909219758116 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 6.6309956452648215,
            "unit": "ns/iter",
            "extra": "iterations: 105621805\ncpu: 6.628975049233424 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 65.14667772415815,
            "unit": "ns/iter",
            "extra": "iterations: 10699232\ncpu: 65.05337644795453 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 111.3001360076034,
            "unit": "ns/iter",
            "extra": "iterations: 6340822\ncpu: 111.2491656444538 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 220.49640544394097,
            "unit": "ns/iter",
            "extra": "iterations: 3148233\ncpu: 220.4399788706863 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 506.67751084368876,
            "unit": "ns/iter",
            "extra": "iterations: 1351478\ncpu: 506.56450863424857 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 973.91080910444,
            "unit": "ns/iter",
            "extra": "iterations: 741264\ncpu: 973.8892998985557 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 51.384305671147004,
            "unit": "ns/iter",
            "extra": "iterations: 12266673\ncpu: 51.38283526429718 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 62.62564295723736,
            "unit": "ns/iter",
            "extra": "iterations: 10956794\ncpu: 62.6030148965108 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 92.50538220707512,
            "unit": "ns/iter",
            "extra": "iterations: 7616578\ncpu: 92.59552111197455 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 248.44823416406018,
            "unit": "ns/iter",
            "extra": "iterations: 2834833\ncpu: 248.31001861485353 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 750.1597245058405,
            "unit": "ns/iter",
            "extra": "iterations: 872759\ncpu: 750.0822586762229 ns\nthreads: 1"
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
          "id": "8442586156ed885f88c6be8eb84e100d3bd7e30e",
          "message": "switched to using self-hosted runner",
          "timestamp": "2020-06-19T12:30:03+02:00",
          "tree_id": "f84c6260e86f81ff78c9b01da2b23fe5d5f08fd5",
          "url": "https://github.com/Lol3rrr/http-server/commit/8442586156ed885f88c6be8eb84e100d3bd7e30e"
        },
        "date": 1592562680155,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_Itoa",
            "value": 6.397952934087133,
            "unit": "ns/iter",
            "extra": "iterations: 111004265\ncpu: 5.860514188351233 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseFirstLine",
            "value": 17.9973499044557,
            "unit": "ns/iter",
            "extra": "iterations: 49262013\ncpu: 14.067215848446956 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 53.80290808366441,
            "unit": "ns/iter",
            "extra": "iterations: 19719053\ncpu: 38.96290354308597 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 46.664922902521184,
            "unit": "ns/iter",
            "extra": "iterations: 15119236\ncpu: 45.32397338066554 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 83.31553466611513,
            "unit": "ns/iter",
            "extra": "iterations: 9392815\ncpu: 79.72148818006106 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 174.64120158943757,
            "unit": "ns/iter",
            "extra": "iterations: 4216060\ncpu: 164.78615342286392 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 482.88332557213425,
            "unit": "ns/iter",
            "extra": "iterations: 2145484\ncpu: 334.4242646414516 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 39.95611993039145,
            "unit": "ns/iter",
            "extra": "iterations: 17601230\ncpu: 36.877782404979634 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 80.77380685245593,
            "unit": "ns/iter",
            "extra": "iterations: 9662313\ncpu: 71.54672385380181 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 152.25984433614786,
            "unit": "ns/iter",
            "extra": "iterations: 4650601\ncpu: 144.93476843100495 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 272.016500359149,
            "unit": "ns/iter",
            "extra": "iterations: 2813258\ncpu: 262.20770366599874 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 2364.6029767200635,
            "unit": "ns/iter",
            "extra": "iterations: 611491\ncpu: 1147.0619027916998 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 37.63452935615033,
            "unit": "ns/iter",
            "extra": "iterations: 18652891\ncpu: 36.154316239772164 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 53.96874181230989,
            "unit": "ns/iter",
            "extra": "iterations: 13995026\ncpu: 50.87397836917199 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 111.82528248978589,
            "unit": "ns/iter",
            "extra": "iterations: 6946763\ncpu: 100.17506427094183 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 345.25295422623464,
            "unit": "ns/iter",
            "extra": "iterations: 4137208\ncpu: 176.56870043759008 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 40.456074146533396,
            "unit": "ns/iter",
            "extra": "iterations: 18745882\ncpu: 36.45576185745751 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 5.30716581170857,
            "unit": "ns/iter",
            "extra": "iterations: 143091003\ncpu: 5.047570600927293 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 8.939230377981161,
            "unit": "ns/iter",
            "extra": "iterations: 89005575\ncpu: 7.532297162284501 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 58.678382193252226,
            "unit": "ns/iter",
            "extra": "iterations: 23598019\ncpu: 30.494505915941534 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 19.211192895264542,
            "unit": "ns/iter",
            "extra": "iterations: 39661160\ncpu: 17.221484923789465 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 6.118405571576441,
            "unit": "ns/iter",
            "extra": "iterations: 119883234\ncpu: 5.847309557898625 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 6.105969790612882,
            "unit": "ns/iter",
            "extra": "iterations: 118691524\ncpu: 5.860706026489315 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 6.160203341568645,
            "unit": "ns/iter",
            "extra": "iterations: 119177275\ncpu: 5.95285468643245 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 11.931184624317746,
            "unit": "ns/iter",
            "extra": "iterations: 114049367\ncpu: 5.913548297028259 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 6.252116353520253,
            "unit": "ns/iter",
            "extra": "iterations: 120227112\ncpu: 5.862057386856321 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 61.9212618555824,
            "unit": "ns/iter",
            "extra": "iterations: 12117142\ncpu: 56.500896828641416 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 100.51143389398814,
            "unit": "ns/iter",
            "extra": "iterations: 7014126\ncpu: 96.64838213627748 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 187.1560124036442,
            "unit": "ns/iter",
            "extra": "iterations: 3933329\ncpu: 171.3230800169518 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 531.5574647563702,
            "unit": "ns/iter",
            "extra": "iterations: 1777483\ncpu: 399.7108945627053 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 935.3546666016191,
            "unit": "ns/iter",
            "extra": "iterations: 883252\ncpu: 772.6968407657155 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 43.2875394575238,
            "unit": "ns/iter",
            "extra": "iterations: 17076811\ncpu: 42.03272437693436 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 53.56897402537112,
            "unit": "ns/iter",
            "extra": "iterations: 13881425\ncpu: 51.58558001069778 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 157.8870380417846,
            "unit": "ns/iter",
            "extra": "iterations: 8734762\ncpu: 77.23129720077074 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 220.94747512009044,
            "unit": "ns/iter",
            "extra": "iterations: 3564442\ncpu: 211.9440010526189 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 764.6697834620339,
            "unit": "ns/iter",
            "extra": "iterations: 1044563\ncpu: 613.5786448495703 ns\nthreads: 1"
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
          "id": "607427c0e6f05b150e1ed3216d15fafc15e310f7",
          "message": "Switched back to github runners for now",
          "timestamp": "2020-06-19T12:33:06+02:00",
          "tree_id": "20f4427265a4a238a85720c0a5e213cd98e92055",
          "url": "https://github.com/Lol3rrr/http-server/commit/607427c0e6f05b150e1ed3216d15fafc15e310f7"
        },
        "date": 1592562847981,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_Itoa",
            "value": 5.214151953096326,
            "unit": "ns/iter",
            "extra": "iterations: 134994314\ncpu: 5.209951768783387 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseFirstLine",
            "value": 15.763552015000672,
            "unit": "ns/iter",
            "extra": "iterations: 44531625\ncpu: 15.760056723732852 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 58.56634846205752,
            "unit": "ns/iter",
            "extra": "iterations: 11870245\ncpu: 58.42493057219965 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 74.62133643627257,
            "unit": "ns/iter",
            "extra": "iterations: 8509781\ncpu: 74.58296165318473 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 111.3586497709076,
            "unit": "ns/iter",
            "extra": "iterations: 6286785\ncpu: 111.34422141046657 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 178.117713253197,
            "unit": "ns/iter",
            "extra": "iterations: 4052237\ncpu: 178.0313996935521 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 374.4395242995266,
            "unit": "ns/iter",
            "extra": "iterations: 1923227\ncpu: 374.2862745791317 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 49.55387061175362,
            "unit": "ns/iter",
            "extra": "iterations: 14051771\ncpu: 49.53188811574 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 67.77014545403122,
            "unit": "ns/iter",
            "extra": "iterations: 10377093\ncpu: 67.74512515210186 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 125.49438276004487,
            "unit": "ns/iter",
            "extra": "iterations: 5666929\ncpu: 125.43898008956882 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 239.18328708330185,
            "unit": "ns/iter",
            "extra": "iterations: 2956755\ncpu: 239.15931553341412 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 1069.981524723546,
            "unit": "ns/iter",
            "extra": "iterations: 677067\ncpu: 1072.5309991477945 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 37.15534808944644,
            "unit": "ns/iter",
            "extra": "iterations: 18493623\ncpu: 37.15049728222528 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 49.96325989580983,
            "unit": "ns/iter",
            "extra": "iterations: 13946912\ncpu: 49.94675660103107 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 92.61028205183483,
            "unit": "ns/iter",
            "extra": "iterations: 7649835\ncpu: 91.97792658273029 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 173.45874231527307,
            "unit": "ns/iter",
            "extra": "iterations: 4070575\ncpu: 173.43818895364902 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 47.11337569073268,
            "unit": "ns/iter",
            "extra": "iterations: 16200554\ncpu: 47.09645701005044 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 5.974030558963779,
            "unit": "ns/iter",
            "extra": "iterations: 113768910\ncpu: 5.9736167991765114 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 14.965424590414946,
            "unit": "ns/iter",
            "extra": "iterations: 46957101\ncpu: 14.957563393873096 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 33.74906711456191,
            "unit": "ns/iter",
            "extra": "iterations: 21150775\ncpu: 33.74037022284062 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 50.97759236842727,
            "unit": "ns/iter",
            "extra": "iterations: 13776244\ncpu: 50.953475199771425 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 6.230616231159224,
            "unit": "ns/iter",
            "extra": "iterations: 115095316\ncpu: 6.229952103350607 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 6.2684737179190115,
            "unit": "ns/iter",
            "extra": "iterations: 112654949\ncpu: 6.26849258970414 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 6.324917239753557,
            "unit": "ns/iter",
            "extra": "iterations: 111562923\ncpu: 6.319613909721612 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 6.224169623893427,
            "unit": "ns/iter",
            "extra": "iterations: 102373219\ncpu: 6.223976047876368 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 6.133718521052018,
            "unit": "ns/iter",
            "extra": "iterations: 114554535\ncpu: 6.131035859907261 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 63.279406285459096,
            "unit": "ns/iter",
            "extra": "iterations: 11352998\ncpu: 63.26507852815617 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 115.94538276838607,
            "unit": "ns/iter",
            "extra": "iterations: 5965187\ncpu: 115.82691858612282 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 223.9971445496138,
            "unit": "ns/iter",
            "extra": "iterations: 3139960\ncpu: 223.8966827602899 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 478.8343363092434,
            "unit": "ns/iter",
            "extra": "iterations: 1494220\ncpu: 478.82742300330546 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 925.2387386505665,
            "unit": "ns/iter",
            "extra": "iterations: 766227\ncpu: 924.8856566004565 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 48.907501740198406,
            "unit": "ns/iter",
            "extra": "iterations: 14009896\ncpu: 48.90756269711055 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 63.98224656620091,
            "unit": "ns/iter",
            "extra": "iterations: 10992634\ncpu: 63.961954341425326 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 99.12677102543341,
            "unit": "ns/iter",
            "extra": "iterations: 7122992\ncpu: 99.12184935768558 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 260.07578347266,
            "unit": "ns/iter",
            "extra": "iterations: 2736375\ncpu: 259.9539580649573 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 705.0555522354655,
            "unit": "ns/iter",
            "extra": "iterations: 1003992\ncpu: 704.998377477112 ns\nthreads: 1"
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
          "id": "97a0fdc2dd06b71426a6a534583751d122a7a7c9",
          "message": "Merge pull request #67 from Lol3rrr/dev\n\nDev",
          "timestamp": "2020-06-19T12:54:43+02:00",
          "tree_id": "20f4427265a4a238a85720c0a5e213cd98e92055",
          "url": "https://github.com/Lol3rrr/http-server/commit/97a0fdc2dd06b71426a6a534583751d122a7a7c9"
        },
        "date": 1592564140685,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_Itoa",
            "value": 5.220516690000068,
            "unit": "ns/iter",
            "extra": "iterations: 100000000\ncpu: 5.181128460000001 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseFirstLine",
            "value": 15.507461140035872,
            "unit": "ns/iter",
            "extra": "iterations: 45040637\ncpu: 15.507504722901677 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 57.22556838569771,
            "unit": "ns/iter",
            "extra": "iterations: 12119983\ncpu: 57.20108625564904 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 70.9521400827513,
            "unit": "ns/iter",
            "extra": "iterations: 10019449\ncpu: 70.9409277895421 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 111.83823162818896,
            "unit": "ns/iter",
            "extra": "iterations: 6278001\ncpu: 111.83614258742557 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 172.78317757464163,
            "unit": "ns/iter",
            "extra": "iterations: 4104640\ncpu: 172.73735479847187 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 368.49213509957,
            "unit": "ns/iter",
            "extra": "iterations: 1944462\ncpu: 368.4803714343611 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 47.62276802081122,
            "unit": "ns/iter",
            "extra": "iterations: 14756522\ncpu: 47.60775120316295 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 65.0779312970443,
            "unit": "ns/iter",
            "extra": "iterations: 10338478\ncpu: 65.0767236724787 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 122.8678824726053,
            "unit": "ns/iter",
            "extra": "iterations: 5635384\ncpu: 122.83431279926961 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 232.30227810078554,
            "unit": "ns/iter",
            "extra": "iterations: 3068082\ncpu: 232.3029391000629 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 1000.4041041931555,
            "unit": "ns/iter",
            "extra": "iterations: 708300\ncpu: 1000.2657122688126 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 35.02302538035417,
            "unit": "ns/iter",
            "extra": "iterations: 19914025\ncpu: 35.02267010310578 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 49.44567087520144,
            "unit": "ns/iter",
            "extra": "iterations: 14361367\ncpu: 49.3452581498683 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 89.51974532978186,
            "unit": "ns/iter",
            "extra": "iterations: 7999993\ncpu: 89.51997332997668 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 172.18963350558056,
            "unit": "ns/iter",
            "extra": "iterations: 3973976\ncpu: 172.16912960722482 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 39.99796824364026,
            "unit": "ns/iter",
            "extra": "iterations: 17407599\ncpu: 39.99755658433995 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 5.941806500421785,
            "unit": "ns/iter",
            "extra": "iterations: 119490700\ncpu: 5.941338413784508 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 14.76266484454602,
            "unit": "ns/iter",
            "extra": "iterations: 45522055\ncpu: 14.757759683740106 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 5.212911774593474,
            "unit": "ns/iter",
            "extra": "iterations: 135337818\ncpu: 5.212802647667923 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 48.53957649732199,
            "unit": "ns/iter",
            "extra": "iterations: 14123736\ncpu: 48.53095611529413 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 6.214497710077352,
            "unit": "ns/iter",
            "extra": "iterations: 110846540\ncpu: 6.214290206983445 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 6.113488372697145,
            "unit": "ns/iter",
            "extra": "iterations: 120107476\ncpu: 6.098416579830527 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 6.1185201867912316,
            "unit": "ns/iter",
            "extra": "iterations: 114236607\ncpu: 6.118538989870393 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 6.03156778629974,
            "unit": "ns/iter",
            "extra": "iterations: 117106311\ncpu: 6.029114980831395 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 6.138619235255667,
            "unit": "ns/iter",
            "extra": "iterations: 113827298\ncpu: 6.136886496242745 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 60.31302500787727,
            "unit": "ns/iter",
            "extra": "iterations: 11210427\ncpu: 60.30849850768406 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 109.22697758094387,
            "unit": "ns/iter",
            "extra": "iterations: 6169975\ncpu: 109.16928788204156 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 212.762205112963,
            "unit": "ns/iter",
            "extra": "iterations: 3161380\ncpu: 212.76281845270046 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 457.1503662374206,
            "unit": "ns/iter",
            "extra": "iterations: 1541350\ncpu: 457.09525416031454 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 902.8437067452821,
            "unit": "ns/iter",
            "extra": "iterations: 778095\ncpu: 902.6071919238638 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 47.434092786283856,
            "unit": "ns/iter",
            "extra": "iterations: 14660421\ncpu: 47.42333538716265 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 61.71394521203593,
            "unit": "ns/iter",
            "extra": "iterations: 11216624\ncpu: 61.71409623786963 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 97.08301377520685,
            "unit": "ns/iter",
            "extra": "iterations: 7251941\ncpu: 97.07544063030869 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 251.7769001948663,
            "unit": "ns/iter",
            "extra": "iterations: 2826197\ncpu: 251.75768426617086 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 685.3165794132133,
            "unit": "ns/iter",
            "extra": "iterations: 1006073\ncpu: 685.3043536602238 ns\nthreads: 1"
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
          "id": "745a2295fd62109b5f9ae4d7f4e2d7c30c810feb",
          "message": "Added the first couple of tests",
          "timestamp": "2020-06-19T15:18:56+02:00",
          "tree_id": "3448f91b7c5b8b1f965e7110921e6536964d76ce",
          "url": "https://github.com/Lol3rrr/http-server/commit/745a2295fd62109b5f9ae4d7f4e2d7c30c810feb"
        },
        "date": 1592572803294,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_Itoa",
            "value": 4.939023058103917,
            "unit": "ns/iter",
            "extra": "iterations: 136109630\ncpu: 4.921448276657574 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseFirstLine",
            "value": 14.927187665888058,
            "unit": "ns/iter",
            "extra": "iterations: 46878445\ncpu: 14.919005227242502 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 56.44047480154658,
            "unit": "ns/iter",
            "extra": "iterations: 12702486\ncpu: 56.43600355080098 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 72.38831452216807,
            "unit": "ns/iter",
            "extra": "iterations: 9958891\ncpu: 72.32297160396675 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 104.60522314767088,
            "unit": "ns/iter",
            "extra": "iterations: 6736436\ncpu: 104.60234655239057 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 164.7143436956967,
            "unit": "ns/iter",
            "extra": "iterations: 4166360\ncpu: 164.6279980606573 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 347.1563158302828,
            "unit": "ns/iter",
            "extra": "iterations: 1998985\ncpu: 347.15227477945064 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 45.50869172179147,
            "unit": "ns/iter",
            "extra": "iterations: 15428301\ncpu: 45.48100351425603 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 62.87008625545949,
            "unit": "ns/iter",
            "extra": "iterations: 8114153\ncpu: 62.86390964035309 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 120.73218357189981,
            "unit": "ns/iter",
            "extra": "iterations: 6011334\ncpu: 120.7245771071778 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 233.64054292877162,
            "unit": "ns/iter",
            "extra": "iterations: 3001204\ncpu: 233.5153188520336 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 972.915231841889,
            "unit": "ns/iter",
            "extra": "iterations: 664483\ncpu: 972.9172484472889 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 34.23477507749095,
            "unit": "ns/iter",
            "extra": "iterations: 20805032\ncpu: 34.224067763990924 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 47.89396851617011,
            "unit": "ns/iter",
            "extra": "iterations: 13679022\ncpu: 47.61154247723267 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 86.75807436016883,
            "unit": "ns/iter",
            "extra": "iterations: 8067760\ncpu: 86.722147907226 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 160.83296117904692,
            "unit": "ns/iter",
            "extra": "iterations: 4393787\ncpu: 160.80849026136244 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 40.86940160788964,
            "unit": "ns/iter",
            "extra": "iterations: 17529810\ncpu: 40.856246587955 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 6.04834342496729,
            "unit": "ns/iter",
            "extra": "iterations: 129623377\ncpu: 6.047912345317167 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 14.29940739119335,
            "unit": "ns/iter",
            "extra": "iterations: 49166161\ncpu: 14.295908745041165 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 31.91724677615583,
            "unit": "ns/iter",
            "extra": "iterations: 21748337\ncpu: 31.91518831991607 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 42.40338779203863,
            "unit": "ns/iter",
            "extra": "iterations: 16077197\ncpu: 42.3959187039881 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 5.716337671687298,
            "unit": "ns/iter",
            "extra": "iterations: 117274434\ncpu: 5.716056416865773 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 5.73579522606866,
            "unit": "ns/iter",
            "extra": "iterations: 120623479\ncpu: 5.735771167734255 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 5.861969153425949,
            "unit": "ns/iter",
            "extra": "iterations: 118441873\ncpu: 5.860195270637103 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 5.7722539435708855,
            "unit": "ns/iter",
            "extra": "iterations: 126731336\ncpu: 5.770864705474254 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 5.851577846780514,
            "unit": "ns/iter",
            "extra": "iterations: 121195513\ncpu: 5.851098282821751 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 61.328931294062734,
            "unit": "ns/iter",
            "extra": "iterations: 11803696\ncpu: 61.31878718326877 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 110.47343065585424,
            "unit": "ns/iter",
            "extra": "iterations: 6490036\ncpu: 110.47177642774263 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 210.9394971307044,
            "unit": "ns/iter",
            "extra": "iterations: 3086647\ncpu: 210.90397509012175 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 447.3341952919721,
            "unit": "ns/iter",
            "extra": "iterations: 1534103\ncpu: 447.3354722596846 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 882.4139128160501,
            "unit": "ns/iter",
            "extra": "iterations: 810562\ncpu: 882.1645833384747 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 48.52068433974384,
            "unit": "ns/iter",
            "extra": "iterations: 14598363\ncpu: 48.5201657199508 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 64.5646143442346,
            "unit": "ns/iter",
            "extra": "iterations: 10935335\ncpu: 64.55671700958398 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 97.75763224010679,
            "unit": "ns/iter",
            "extra": "iterations: 7088810\ncpu: 97.73873739033782 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 248.1970519832857,
            "unit": "ns/iter",
            "extra": "iterations: 2787569\ncpu: 248.1551376844838 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 664.4023128849808,
            "unit": "ns/iter",
            "extra": "iterations: 1042594\ncpu: 664.2356247973825 ns\nthreads: 1"
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
          "id": "b0eec6585555e7704d4cf4ca4f5421388ba74ad0",
          "message": "Updated the speed workflow and added a test workflow",
          "timestamp": "2020-06-19T15:24:25+02:00",
          "tree_id": "016168367bd9f878c3679c0a22f84c7da2d3a1dc",
          "url": "https://github.com/Lol3rrr/http-server/commit/b0eec6585555e7704d4cf4ca4f5421388ba74ad0"
        },
        "date": 1592573125541,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_Itoa",
            "value": 5.595601839553641,
            "unit": "ns/iter",
            "extra": "iterations: 116924884\ncpu: 5.589857151365658 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseFirstLine",
            "value": 17.56068142214896,
            "unit": "ns/iter",
            "extra": "iterations: 41588610\ncpu: 17.549346203203232 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 60.59711835443433,
            "unit": "ns/iter",
            "extra": "iterations: 11654105\ncpu: 60.5619619867849 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 79.54677516263618,
            "unit": "ns/iter",
            "extra": "iterations: 9272111\ncpu: 79.52469788163665 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 119.45310598745,
            "unit": "ns/iter",
            "extra": "iterations: 5861260\ncpu: 119.4142370411822 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 191.63117822981675,
            "unit": "ns/iter",
            "extra": "iterations: 3830891\ncpu: 191.57203115411008 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 385.7132226698268,
            "unit": "ns/iter",
            "extra": "iterations: 1673361\ncpu: 385.4816677333823 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 47.898111319645615,
            "unit": "ns/iter",
            "extra": "iterations: 14433517\ncpu: 47.89429471694253 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 74.58746697411259,
            "unit": "ns/iter",
            "extra": "iterations: 10052720\ncpu: 74.56494570623676 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 144.1573954775555,
            "unit": "ns/iter",
            "extra": "iterations: 4953338\ncpu: 144.12920600209367 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 272.8057309382816,
            "unit": "ns/iter",
            "extra": "iterations: 2597969\ncpu: 272.70716086296653 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 1155.1074608974886,
            "unit": "ns/iter",
            "extra": "iterations: 635701\ncpu: 1154.3730731900675 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 35.817470670694064,
            "unit": "ns/iter",
            "extra": "iterations: 20124837\ncpu: 35.805538598896504 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 50.87944109999967,
            "unit": "ns/iter",
            "extra": "iterations: 10000000\ncpu: 50.86500619999992 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 90.48327568145521,
            "unit": "ns/iter",
            "extra": "iterations: 7332227\ncpu: 90.48079348879963 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 167.81228968406154,
            "unit": "ns/iter",
            "extra": "iterations: 4244210\ncpu: 167.36870842865943 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 38.60351869534262,
            "unit": "ns/iter",
            "extra": "iterations: 16906323\ncpu: 38.60304402086731 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 6.223969785848718,
            "unit": "ns/iter",
            "extra": "iterations: 119696230\ncpu: 6.198804239699098 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 14.672115121066344,
            "unit": "ns/iter",
            "extra": "iterations: 47057382\ncpu: 14.668497537750827 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 32.51384080745513,
            "unit": "ns/iter",
            "extra": "iterations: 21894857\ncpu: 32.50056568078967 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 57.389519771715584,
            "unit": "ns/iter",
            "extra": "iterations: 11160463\ncpu: 57.369070440894745 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 6.629265101078766,
            "unit": "ns/iter",
            "extra": "iterations: 97123724\ncpu: 6.627426827249733 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 6.948306854342187,
            "unit": "ns/iter",
            "extra": "iterations: 92534744\ncpu: 6.946278308177922 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 6.720625115440133,
            "unit": "ns/iter",
            "extra": "iterations: 105422576\ncpu: 6.71826114360931 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 7.364336662131605,
            "unit": "ns/iter",
            "extra": "iterations: 97252815\ncpu: 7.363578267631636 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 6.670846564586305,
            "unit": "ns/iter",
            "extra": "iterations: 100678296\ncpu: 6.669995825118061 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 70.32369055424498,
            "unit": "ns/iter",
            "extra": "iterations: 10197406\ncpu: 70.27243771602315 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 122.51494757828169,
            "unit": "ns/iter",
            "extra": "iterations: 5988930\ncpu: 122.4685880449432 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 229.82948388963467,
            "unit": "ns/iter",
            "extra": "iterations: 3144870\ncpu: 222.42026983627343 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 504.0583049463347,
            "unit": "ns/iter",
            "extra": "iterations: 1244114\ncpu: 503.6532882034927 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 986.9141035018131,
            "unit": "ns/iter",
            "extra": "iterations: 716432\ncpu: 986.5185404895373 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 53.83223829999935,
            "unit": "ns/iter",
            "extra": "iterations: 10000000\ncpu: 53.816312100000026 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 63.667048491483385,
            "unit": "ns/iter",
            "extra": "iterations: 9953954\ncpu: 63.56990759651904 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 97.76274900024943,
            "unit": "ns/iter",
            "extra": "iterations: 6934230\ncpu: 97.74733243633408 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 266.567873491754,
            "unit": "ns/iter",
            "extra": "iterations: 2615292\ncpu: 266.5249547660451 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 787.5215869873651,
            "unit": "ns/iter",
            "extra": "iterations: 830454\ncpu: 787.2199014033275 ns\nthreads: 1"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "name": "Lol3rrr",
            "username": "Lol3rrr"
          },
          "committer": {
            "name": "Lol3rrr",
            "username": "Lol3rrr"
          },
          "id": "66b801c050d70023df095c36ac886fed4796d9af",
          "message": "Dev",
          "timestamp": "2020-06-19T10:54:47Z",
          "url": "https://github.com/Lol3rrr/http-server/pull/68/commits/66b801c050d70023df095c36ac886fed4796d9af"
        },
        "date": 1592585987804,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_Itoa",
            "value": 8.507458953604925,
            "unit": "ns/iter",
            "extra": "iterations: 82260332\ncpu: 8.507523978872344 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseFirstLine",
            "value": 21.797197707178896,
            "unit": "ns/iter",
            "extra": "iterations: 32011073\ncpu: 21.797240910981017 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/1",
            "value": 69.5233346810659,
            "unit": "ns/iter",
            "extra": "iterations: 10053855\ncpu: 69.5222256537418 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/2",
            "value": 89.05290967866756,
            "unit": "ns/iter",
            "extra": "iterations: 7974042\ncpu: 89.05085777075165 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/5",
            "value": 138.36928441648942,
            "unit": "ns/iter",
            "extra": "iterations: 5059829\ncpu: 138.36287906172322 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/10",
            "value": 244.97323485109553,
            "unit": "ns/iter",
            "extra": "iterations: 2858045\ncpu: 244.97065301631002 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseHeaders/25",
            "value": 592.7821774692896,
            "unit": "ns/iter",
            "extra": "iterations: 1177229\ncpu: 592.7760435735104 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/1",
            "value": 61.51490660080354,
            "unit": "ns/iter",
            "extra": "iterations: 11250687\ncpu: 61.51463266198764 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/2",
            "value": 92.41718825662949,
            "unit": "ns/iter",
            "extra": "iterations: 7572519\ncpu: 92.41522761448331 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/5",
            "value": 183.8248780432575,
            "unit": "ns/iter",
            "extra": "iterations: 3808523\ncpu: 183.82257006193714 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/10",
            "value": 349.86111023640854,
            "unit": "ns/iter",
            "extra": "iterations: 2000601\ncpu: 349.8575648017767 ns\nthreads: 1"
          },
          {
            "name": "BM_ParseQueryParams/25",
            "value": 1403.132199068189,
            "unit": "ns/iter",
            "extra": "iterations: 498884\ncpu: 1403.1164619430547 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/1",
            "value": 58.916018828478535,
            "unit": "ns/iter",
            "extra": "iterations: 11882854\ncpu: 58.91360737075453 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/2",
            "value": 82.97498393389388,
            "unit": "ns/iter",
            "extra": "iterations: 8437018\ncpu: 82.97258948600087 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/5",
            "value": 155.91932905676722,
            "unit": "ns/iter",
            "extra": "iterations: 4489262\ncpu: 155.91845207519623 ns\nthreads: 1"
          },
          {
            "name": "BM_CreateHTTPHeaderPart/10",
            "value": 294.58852587900867,
            "unit": "ns/iter",
            "extra": "iterations: 2375938\ncpu: 294.5846608791982 ns\nthreads: 1"
          },
          {
            "name": "BM_DeterminContentType",
            "value": 50.1861469925564,
            "unit": "ns/iter",
            "extra": "iterations: 13954053\ncpu: 50.18577197607028 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/5",
            "value": 8.006811369150652,
            "unit": "ns/iter",
            "extra": "iterations: 87424714\ncpu: 8.006777763093393 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/10",
            "value": 3.002612252599349,
            "unit": "ns/iter",
            "extra": "iterations: 233134422\ncpu: 3.0026073026659383 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/25",
            "value": 51.071390945683,
            "unit": "ns/iter",
            "extra": "iterations: 233119254\ncpu: 51.07083177265143 ns\nthreads: 1"
          },
          {
            "name": "BM_CalculateHash/50",
            "value": 73.33203288340106,
            "unit": "ns/iter",
            "extra": "iterations: 9544389\ncpu: 73.331338234433 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/32",
            "value": 8.59534632113368,
            "unit": "ns/iter",
            "extra": "iterations: 81348587\ncpu: 8.595253670478618 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/64",
            "value": 8.59985449367342,
            "unit": "ns/iter",
            "extra": "iterations: 81427387\ncpu: 8.599428519055877 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/128",
            "value": 8.6000735442451,
            "unit": "ns/iter",
            "extra": "iterations: 81417657\ncpu: 8.59998341637365 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/256",
            "value": 8.600929297510428,
            "unit": "ns/iter",
            "extra": "iterations: 81376738\ncpu: 8.600864709027784 ns\nthreads: 1"
          },
          {
            "name": "BM_BucketIndex/512",
            "value": 8.60210369816385,
            "unit": "ns/iter",
            "extra": "iterations: 81396753\ncpu: 8.602025464087074 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/2",
            "value": 95.04716104130293,
            "unit": "ns/iter",
            "extra": "iterations: 7365359\ncpu: 95.04513846507726 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/4",
            "value": 157.56626939397086,
            "unit": "ns/iter",
            "extra": "iterations: 4442624\ncpu: 157.56499379645976 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/8",
            "value": 293.3517088824738,
            "unit": "ns/iter",
            "extra": "iterations: 2386033\ncpu: 293.3466284833458 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/16",
            "value": 646.5867607142459,
            "unit": "ns/iter",
            "extra": "iterations: 1083140\ncpu: 646.5875057702663 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/0/32",
            "value": 1594.350576163493,
            "unit": "ns/iter",
            "extra": "iterations: 439719\ncpu: 1594.3351617737692 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/2",
            "value": 65.37879912618703,
            "unit": "ns/iter",
            "extra": "iterations: 10729737\ncpu: 65.37730076701753 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/4",
            "value": 87.99289595340025,
            "unit": "ns/iter",
            "extra": "iterations: 7954762\ncpu: 87.99231705486656 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/8",
            "value": 148.48718321911284,
            "unit": "ns/iter",
            "extra": "iterations: 4713274\ncpu: 148.48550837485837 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/16",
            "value": 360.79362933936477,
            "unit": "ns/iter",
            "extra": "iterations: 1939893\ncpu: 360.7911544605796 ns\nthreads: 1"
          },
          {
            "name": "BM_AddKV/10/32",
            "value": 1154.69532394996,
            "unit": "ns/iter",
            "extra": "iterations: 605896\ncpu: 1154.6817325085435 ns\nthreads: 1"
          }
        ]
      }
    ]
  }
}