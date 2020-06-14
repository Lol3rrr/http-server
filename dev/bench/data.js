window.BENCHMARK_DATA = {
  "lastUpdate": 1592101808811,
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
      }
    ]
  }
}