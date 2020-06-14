window.BENCHMARK_DATA = {
  "lastUpdate": 1592139600577,
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
      }
    ]
  }
}