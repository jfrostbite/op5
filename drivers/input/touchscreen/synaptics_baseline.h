#ifndef SYNAPTICS_BASELINE_H
#define SYNAPTICS_BASELINE_H

#define TX_NUMBER  (17)
#define TX_17801_NUMBER  (15)
#define RX_NUMBER  (30)

extern bool virtual_key_enable;

const int16_t baseline_cap_data[2][TX_NUMBER][RX_NUMBER*2] = {
    /*enable cbc*/
	{
		{403, 748, 441, 819, 451, 837, 451, 837, 450, 836, 459, 852,
		450, 836, 448, 832, 456, 846, 451, 837, 454, 844, 458, 850,
		463, 861, 498, 926, 499, 927, 501, 930, 515, 956, 526, 978,
		529, 982, 528, 980, 531, 987, 544, 1010, 554, 1030, 557,
		1034, 561, 1041, 568, 1056, 568, 1056, 587, 1091, 741, 1375,
		776, 1440},
		{424, 787, 460, 854, 468, 870, 468, 870, 468, 870, 476, 884,
		468, 868, 468, 868, 472, 876, 470, 872, 473, 879, 485, 901,
		485, 901, 522, 969, 522, 969, 522, 969, 531, 987, 534, 992,
		547, 1017, 545, 1013, 557, 1034, 561, 1041, 574, 1066, 592,
		1099, 576, 1070, 592, 1099, 592, 1099, 601, 1115, 774, 1437,
		791, 1469},
		{419, 779, 456, 846, 464, 862, 464, 862, 463, 861, 471, 875,
		464, 862, 462, 858, 470, 872, 466, 865, 470, 872, 473, 879,
		477, 887, 522, 969, 522, 969, 522, 969, 526, 978, 530, 984,
		542, 1006, 540, 1002, 545, 1013, 557, 1034, 566, 1052, 568,
		1056, 571, 1060, 580, 1076, 578, 1074, 592, 1099, 757, 1405,
		783, 1455},
		{420, 780, 456, 846, 466, 865, 466, 865, 464, 862, 473, 879,
		466, 865, 463, 861, 470, 872, 468, 868, 470, 872, 473, 879,
		477, 887, 522, 969, 522, 969, 522, 969, 528, 980, 530, 984,
		543, 1009, 541, 1005, 544, 1010, 566, 1052, 566, 1052, 566,
		1052, 571, 1060, 578, 1074, 578, 1073, 592, 1099, 756, 1404,
		783, 1453},
		{421, 783, 454, 844, 464, 862, 464, 862, 464, 862, 473, 879,
		464, 862, 463, 861, 470, 872, 466, 865, 468, 870, 472, 876,
		476, 884, 512, 952, 510, 948, 522, 969, 526, 978, 529, 982,
		541, 1005, 540, 1002, 552, 1024, 557, 1034, 564, 1048, 565,
		1049, 567, 1053, 575, 1067, 574, 1066, 592, 1099, 756, 1404,
		777, 1443},
		{421, 783, 454, 844, 464, 862, 464, 862, 464, 862, 473, 879,
		464, 862, 463, 861, 470, 872, 468, 868, 468, 870, 473, 879,
		477, 887, 522, 970, 511, 949, 522, 969, 526, 976, 528, 980,
		540, 1002, 539, 1001, 543, 1009, 557, 1034, 565, 1049, 565,
		1049, 567, 1053, 575, 1067, 574, 1066, 582, 1082, 752, 1396,
		774, 1437},
		{418, 776, 453, 841, 464, 862, 466, 865, 463, 861, 472, 876,
		463, 861, 462, 858, 479, 889, 466, 865, 468, 870, 472, 876,
		476, 884, 510, 948, 510, 948, 512, 952, 524, 974, 528, 980,
		540, 1002, 539, 1001, 540, 1002, 552, 1024, 562, 1044, 563,
		1045, 565, 1049, 572, 1062, 572, 1062, 578, 1074, 750, 1394,
		774, 1437},
		{415, 771, 456, 846, 468, 868, 468, 868, 466, 865, 474, 880,
		466, 865, 463, 861, 472, 876, 468, 868, 471, 875, 473, 879,
		477, 887, 511, 949, 511, 949, 522, 969, 526, 976, 530, 984,
		540, 1002, 547, 1017, 540, 1002, 552, 1024, 562, 1044, 562,
		1044, 563, 1045, 574, 1066, 571, 1060, 578, 1073, 752, 1396,
		774, 1437},
		{405, 751, 456, 846, 468, 868, 468, 870, 468, 868, 474, 880,
		468, 868, 466, 865, 473, 879, 479, 889, 472, 876, 475, 883,
		480, 891, 522, 969, 522, 969, 522, 969, 526, 978, 530, 984,
		542, 1006, 539, 1001, 542, 1006, 557, 1034, 565, 1049, 561,
		1041, 563, 1045, 572, 1062, 572, 1062, 575, 1067, 752, 1396,
		774, 1437},
		{415, 771, 460, 854, 472, 876, 472, 876, 471, 875, 480, 891,
		471, 875, 470, 872, 476, 884, 472, 876, 476, 884, 479, 889,
		485, 901, 522, 969, 522, 969, 526, 978, 530, 984, 533, 991,
		544, 1010, 541, 1005, 543, 1009, 557, 1034, 566, 1052, 565,
		1049, 566, 1052, 574, 1066, 574, 1066, 576, 1070, 750, 1394,
		774, 1437},
		{428, 794, 463, 861, 473, 879, 474, 880, 473, 879, 485, 901,
		474, 880, 473, 879, 480, 891, 476, 884, 477, 887, 485, 901,
		485, 901, 522, 969, 522, 969, 522, 969, 532, 988, 534, 992,
		545, 1013, 542, 1006, 544, 1010, 557, 1034, 565, 1049, 565,
		1049, 566, 1052, 574, 1066, 582, 1082, 574, 1066, 760, 1412,
		762, 1416},
		{442, 822, 468, 868, 477, 887, 479, 889, 476, 884, 485, 901,
		477, 887, 475, 883, 485, 901, 477, 887, 491, 913, 485, 901,
		489, 907, 522, 969, 522, 969, 522, 969, 534, 992, 536, 996,
		551, 1023, 543, 1009, 547, 1017, 557, 1035, 584, 1084, 565,
		1049, 566, 1052, 574, 1066, 574, 1066, 570, 1058, 750, 1394,
		762, 1416},
		{450, 836, 470, 872, 479, 889, 479, 889, 476, 884, 487, 904,
		479, 889, 476, 884, 485, 901, 485, 901, 485, 901, 485, 901,
		489, 909, 524, 972, 522, 969, 522, 970, 544, 1010, 536, 996,
		547, 1017, 544, 1010, 547, 1017, 557, 1035, 565, 1049, 565,
		1049, 567, 1053, 574, 1066, 574, 1066, 568, 1056, 753, 1398,
		774, 1437},
		{454, 844, 472, 876, 485, 901, 485, 901, 480, 891, 487, 905,
		485, 901, 479, 889, 487, 904, 485, 901, 485, 901, 487, 905,
		491, 913, 524, 974, 522, 970, 522, 970, 536, 995, 536, 996,
		549, 1019, 544, 1010, 547, 1017, 559, 1037, 567, 1053, 566,
		1052, 578, 1073, 575, 1067, 575, 1067, 574, 1066, 756, 1404,
		774, 1437},
		{463, 861, 476, 884, 485, 901, 487, 905, 485, 901, 489, 909,
		485, 901, 485, 901, 489, 907, 485, 901, 487, 904, 494, 918,
		494, 918, 528, 980, 526, 976, 526, 978, 539, 1001, 540, 1002,
		557, 1034, 547, 1017, 551, 1023, 562, 1044, 574, 1066, 574,
		1066, 574, 1066, 582, 1082, 584, 1084, 595, 1105, 762, 1414,
		791, 1469},
		{498, 926, 498, 926, 498, 926, 498, 926, 494, 918, 498, 926,
		494, 918, 498, 926, 494, 918, 489, 909, 489, 909, 494, 918,
		498, 926, 534, 992, 534, 992, 530, 984, 543, 1009, 543, 1009,
		570, 1058, 547, 1017, 552, 1024, 561, 1041, 589, 1095, 570,
		1058, 574, 1066, 582, 1082, 582, 1082, 596, 1106, 769, 1429,
		800, 1486},
		{498, 926, 498, 926, 498, 926, 498, 926, 494, 918, 498, 926,
		494, 918, 498, 926, 494, 918, 489, 909, 489, 909, 494, 918,
		498, 926, 534, 992, 534, 992, 530, 984, 543, 1009, 543, 1009,
		570, 1058, 547, 1017, 552, 1024, 561, 1041, 589, 1095, 570,
		1058, 574, 1066, 582, 1082, 582, 1082, 596, 1106, 500, 3000,
		500, 3000},
	},
	/*disable cbc*/
	{
		{608, 1130, 650, 1208, 655, 1216, 652, 1210, 652, 1212, 658,
		1222, 652, 1212, 655, 1216, 650, 1208, 655, 1216, 656, 1218,
		668, 1240, 677, 1257, 673, 1249, 681, 1265, 691, 1283, 685,
		1273, 713, 1325, 713, 1325, 723, 1343, 725, 1347, 731, 1357,
		734, 1362, 739, 1372, 734, 1362, 747, 1387, 741, 1375, 776,
		1440, 741, 1375, 776, 1440},
		{633, 1175, 670, 1244, 677, 1257, 671, 1247, 673, 1249, 678,
		1258, 673, 1251, 677, 1257, 668, 1240, 677, 1257, 677, 1257,
		704, 1307, 704, 1307, 704, 1307, 704, 1307, 712, 1322, 706,
		1310, 723, 1343, 739, 1372, 743, 1379, 747, 1387, 756, 1404,
		756, 1404, 774, 1437, 756, 1404, 774, 1437, 774, 1437, 791,
		1469, 774, 1437, 791, 1469},
		{633, 1175, 668, 1240, 673, 1249, 669, 1243, 670, 1244, 675,
		1253, 671, 1247, 673, 1251, 668, 1240, 673, 1249, 673, 1251,
		685, 1273, 704, 1307, 704, 1307, 710, 1318, 708, 1316, 704,
		1307, 721, 1339, 731, 1357, 741, 1375, 743, 1379, 747, 1387,
		750, 1394, 756, 1404, 749, 1391, 762, 1416, 757, 1405, 783,
		1455, 757, 1405, 783, 1455},
		{633, 1175, 668, 1240, 673, 1249, 669, 1243, 671, 1247, 678,
		1258, 673, 1249, 675, 1253, 668, 1240, 673, 1251, 676, 1255,
		688, 1278, 704, 1307, 704, 1307, 704, 1307, 710, 1318, 704,
		1307, 722, 1340, 732, 1359, 741, 1375, 743, 1379, 757, 1405,
		752, 1396, 753, 1398, 748, 1390, 762, 1414, 756, 1404, 783,
		1453, 756, 1404, 783, 1453},
		{633, 1175, 668, 1240, 670, 1244, 668, 1240, 670, 1244, 675,
		1253, 673, 1249, 673, 1251, 668, 1240, 671, 1247, 675, 1253,
		687, 1275, 704, 1307, 704, 1307, 704, 1307, 708, 1314, 704,
		1307, 721, 1339, 729, 1355, 739, 1372, 752, 1396, 745, 1383,
		748, 1390, 752, 1396, 745, 1383, 760, 1411, 756, 1404, 777,
		1443, 756, 1404, 777, 1443},
		{633, 1175, 664, 1232, 669, 1243, 668, 1240, 668, 1240, 673,
		1251, 670, 1244, 671, 1247, 668, 1240, 670, 1244, 673, 1249,
		685, 1273, 704, 1307, 704, 1307, 704, 1307, 706, 1310, 704,
		1307, 718, 1333, 727, 1351, 739, 1372, 739, 1372, 743, 1379,
		747, 1387, 748, 1390, 743, 1379, 756, 1404, 752, 1396, 774,
		1437, 752, 1396, 774, 1437},
		{621, 1153, 662, 1229, 668, 1240, 668, 1240, 668, 1240, 673,
		1251, 670, 1244, 671, 1247, 675, 1253, 670, 1244, 673, 1249,
		685, 1273, 704, 1307, 704, 1307, 704, 1307, 706, 1310, 704,
		1307, 718, 1333, 727, 1351, 739, 1372, 739, 1372, 743, 1379,
		747, 1387, 748, 1390, 743, 1379, 757, 1405, 750, 1394, 774,
		1437, 750, 1394, 774, 1437},
		{620, 1151, 668, 1240, 671, 1247, 668, 1240, 670, 1244, 677,
		1257, 673, 1249, 673, 1251, 668, 1240, 673, 1251, 675, 1253,
		688, 1278, 704, 1307, 704, 1307, 704, 1307, 708, 1314, 704,
		1307, 721, 1339, 729, 1355, 747, 1387, 739, 1372, 743, 1379,
		747, 1387, 750, 1394, 744, 1382, 757, 1405, 752, 1396, 774,
		1437, 752, 1396, 774, 1437},
		{621, 1153, 668, 1240, 675, 1253, 670, 1244, 673, 1251, 678,
		1258, 673, 1251, 677, 1257, 669, 1243, 685, 1273, 678, 1258,
		704, 1307, 704, 1307, 704, 1307, 704, 1307, 710, 1318, 704,
		1308, 721, 1339, 731, 1357, 739, 1372, 739, 1373, 743, 1379,
		749, 1391, 750, 1394, 744, 1382, 757, 1405, 752, 1396, 774,
		1437, 752, 1396, 774, 1437},
		{633, 1175, 668, 1240, 676, 1255, 673, 1251, 676, 1255, 681,
		1265, 677, 1257, 679, 1261, 673, 1249, 677, 1257, 679, 1261,
		704, 1307, 704, 1307, 704, 1307, 704, 1308, 723, 1343, 706,
		1312, 723, 1343, 732, 1359, 739, 1373, 741, 1375, 745, 1383,
		750, 1394, 752, 1396, 744, 1382, 756, 1404, 750, 1394, 774,
		1437, 750, 1394, 774, 1437},
		{639, 1187, 671, 1247, 678, 1258, 675, 1253, 677, 1257, 683,
		1268, 679, 1261, 680, 1264, 673, 1251, 679, 1261, 681, 1265,
		704, 1307, 704, 1307, 704, 1307, 706, 1310, 713, 1325, 708,
		1314, 723, 1343, 732, 1359, 741, 1375, 741, 1377, 745, 1383,
		747, 1387, 749, 1391, 743, 1379, 756, 1404, 760, 1412, 762,
		1416, 760, 1412, 762, 1416},
		{647, 1201, 675, 1253, 679, 1261, 677, 1257, 679, 1261, 685,
		1273, 681, 1265, 683, 1268, 677, 1257, 681, 1265, 704, 1307,
		704, 1307, 704, 1307, 704, 1307, 708, 1314, 716, 1330, 710,
		1318, 725, 1347, 739, 1372, 741, 1377, 743, 1379, 747, 1387,
		774, 1437, 750, 1394, 744, 1382, 756, 1404, 750, 1394, 762,
		1416, 750, 1394, 762, 1416},
		{655, 1216, 678, 1258, 683, 1269, 680, 1264, 681, 1265, 688,
		1278, 683, 1268, 685, 1273, 679, 1261, 685, 1273, 685, 1273,
		704, 1307, 706, 1310, 704, 1307, 710, 1318, 718, 1333, 722,
		1340, 727, 1351, 739, 1372, 744, 1382, 744, 1382, 748, 1390,
		750, 1394, 752, 1396, 746, 1386, 758, 1408, 753, 1398, 774,
		1437, 753, 1398, 774, 1437},
		{660, 1226, 681, 1265, 685, 1273, 681, 1265, 683, 1268, 704,
		1307, 685, 1273, 687, 1275, 680, 1264, 685, 1273, 688, 1278,
		704, 1307, 706, 1312, 704, 1307, 710, 1318, 718, 1333, 712,
		1322, 727, 1351, 739, 1372, 744, 1382, 744, 1382, 748, 1390,
		752, 1396, 752, 1396, 756, 1404, 760, 1411, 756, 1404, 774,
		1437, 756, 1404, 774, 1437},
		{668, 1240, 685, 1273, 688, 1278, 704, 1307, 687, 1275, 704,
		1307, 687, 1275, 704, 1307, 681, 1265, 688, 1278, 704, 1307,
		706, 1312, 711, 1320, 706, 1312, 714, 1326, 721, 1339, 714,
		1326, 732, 1359, 741, 1377, 748, 1390, 747, 1387, 753, 1398,
		757, 1405, 758, 1408, 753, 1398, 774, 1437, 762, 1414, 791,
		1469, 762, 1414, 791, 1469},
		{716, 1330, 716, 1330, 716, 1330, 701, 1301, 701, 1301, 712,
		1322, 699, 1297, 716, 1330, 699, 1297, 699, 1297, 699, 1297,
		716, 1330, 725, 1347, 721, 1339, 734, 1362, 734, 1362, 725,
		1347, 734, 1362, 769, 1429, 760, 1412, 760, 1412, 764, 1420,
		787, 1461, 764, 1420, 764, 1420, 769, 1429, 769, 1429, 800,
		1486, 769, 1429, 800, 1486},
		{716, 1330, 716, 1330, 716, 1330, 701, 1301, 701, 1301, 712,
		1322, 699, 1297, 716, 1330, 699, 1297, 699, 1297, 699, 1297,
		716, 1330, 725, 1347, 721, 1339, 734, 1362, 734, 1362, 725,
		1347, 734, 1362, 769, 1429, 760, 1412, 760, 1412, 764, 1420,
		787, 1461, 764, 1420, 764, 1420, 769, 1429, 769, 1429, 800,
		1486, 500, 3000, 500, 3000},
	}

};

const int16_t baseline_cap_17801_data[2][TX_17801_NUMBER][RX_NUMBER*2] = {
/*enable cbc*/
	{
		{662, 1544, 509, 1188, 510, 1189, 510, 1191, 510,
		1189, 511, 1192, 510, 1190, 511, 1192, 512, 1195,
		512, 1194, 514, 1199, 514, 1199, 515, 1202, 518,
		1209, 517, 1207, 521, 1215, 523, 1219, 525, 1225,
		526, 1228, 535, 1249, 528, 1233, 532, 1240, 533,
		1244, 533, 1244, 535, 1249, 538, 1255, 537, 1252,
		537, 1253, 539, 1259, 740, 1727},
		{560, 1307, 592, 1381, 593, 1384, 594, 1387, 594,
		1385, 595, 1388, 594, 1386, 595, 1387, 596, 1391,
		595, 1389, 598, 1395, 597, 1394, 599, 1398, 602,
		1405, 601, 1402, 605, 1411, 614, 1433, 609, 1421,
		610, 1424, 612, 1427, 612, 1428, 616, 1436, 617,
		1440, 617, 1441, 620, 1446, 622, 1451, 621, 1449,
		621, 1449, 623, 1453, 625, 1459},
		{562, 1311, 593, 1383, 595, 1387, 596, 1390, 595,
		1388, 596, 1391, 595, 1389, 596, 1391, 598, 1394,
		597, 1392, 599, 1398, 599, 1397, 600, 1400, 603,
		1407, 602, 1405, 613, 1430, 607, 1417, 610, 1422,
		611, 1425, 612, 1429, 613, 1429, 616, 1437, 618,
		1441, 618, 1441, 620, 1446, 622, 1451, 621, 1449,
		621, 1449, 622, 1452, 622, 1451},
		{563, 1313, 592, 1381, 594, 1386, 595, 1389, 594,
		1387, 596, 1390, 595, 1388, 595, 1389, 597, 1393,
		596, 1391, 599, 1397, 598, 1396, 600, 1399, 603,
		1406, 601, 1403, 604, 1410, 606, 1414, 609, 1421,
		610, 1424, 611, 1427, 612, 1427, 615, 1435, 617,
		1439, 624, 1457, 618, 1443, 620, 1448, 619, 1445,
		619, 1445, 621, 1448, 619, 1444},
		{563, 1314, 591, 1379, 593, 1384, 594, 1387, 594,
		1386, 595, 1389, 594, 1386, 595, 1388, 596, 1392,
		596, 1390, 598, 1395, 597, 1394, 599, 1398, 602,
		1404, 601, 1401, 604, 1408, 605, 1413, 608, 1418,
		617, 1440, 611, 1425, 611, 1425, 614, 1432, 615,
		1436, 615, 1436, 617, 1440, 619, 1445, 618, 1442,
		618, 1441, 619, 1444, 616, 1437},
		{564, 1316, 591, 1378, 593, 1383, 594, 1386, 594,
		1385, 595, 1388, 594, 1386, 594, 1387, 596, 1391,
		595, 1389, 597, 1394, 597, 1393, 599, 1397, 601,
		1403, 600, 1401, 603, 1408, 605, 1412, 608, 1418,
		609, 1420, 610, 1423, 610, 1423, 613, 1431, 615,
		1434, 615, 1434, 624, 1456, 618, 1443, 617, 1440,
		617, 1439, 618, 1442, 613, 1431},
		{565, 1319, 591, 1379, 593, 1384, 594, 1387, 594,
		1385, 595, 1388, 594, 1386, 594, 1387, 596, 1390,
		595, 1388, 597, 1394, 597, 1393, 598, 1396, 601,
		1403, 600, 1400, 603, 1408, 605, 1412, 607, 1417,
		608, 1420, 610, 1422, 617, 1441, 613, 1430, 614,
		1433, 614, 1433, 616, 1437, 618, 1442, 617, 1439,
		616, 1438, 617, 1440, 611, 1426},
		{568, 1324, 591, 1380, 593, 1385, 595, 1388, 594,
		1386, 595, 1389, 594, 1386, 595, 1388, 596, 1391,
		595, 1389, 598, 1394, 597, 1393, 599, 1397, 601,
		1403, 600, 1401, 603, 1408, 605, 1412, 615, 1436,
		609, 1420, 610, 1422, 610, 1422, 613, 1429, 614,
		1432, 614, 1432, 616, 1436, 618, 1441, 616, 1438,
		616, 1437, 617, 1439, 610, 1423},
		{570, 1330, 592, 1382, 594, 1386, 595, 1389, 595,
		1388, 596, 1390, 595, 1388, 595, 1389, 597, 1393,
		596, 1391, 598, 1396, 598, 1395, 599, 1399, 602,
		1405, 609, 1420, 604, 1409, 605, 1413, 608, 1418,
		609, 1420, 610, 1423, 610, 1423, 613, 1429, 614,
		1432, 614, 1432, 615, 1436, 617, 1440, 616, 1437,
		616, 1437, 617, 1439, 610, 1424},
		{572, 1335, 593, 1383, 595, 1388, 596, 1391, 595,
		1389, 596, 1392, 596, 1390, 596, 1391, 598, 1395,
		597, 1393, 599, 1398, 599, 1397, 600, 1400, 603,
		1406, 601, 1403, 604, 1410, 606, 1414, 608, 1419,
		609, 1421, 610, 1424, 610, 1424, 613, 1430, 614,
		1433, 614, 1432, 616, 1436, 617, 1440, 616, 1437,
		616, 1437, 624, 1457, 607, 1417},
		{576, 1345, 595, 1387, 596, 1392, 598, 1395, 597,
		1393, 598, 1396, 598, 1394, 598, 1396, 600, 1399,
		599, 1397, 601, 1402, 601, 1401, 602, 1404, 612,
		1428, 603, 1407, 606, 1413, 607, 1417, 609, 1422,
		610, 1424, 611, 1427, 611, 1426, 614, 1433, 615,
		1435, 615, 1434, 616, 1438, 618, 1442, 616, 1438,
		616, 1438, 617, 1440, 606, 1413},
		{578, 1349, 594, 1387, 596, 1391, 597, 1394, 597,
		1392, 598, 1395, 597, 1393, 598, 1395, 599, 1398,
		598, 1396, 601, 1402, 600, 1401, 602, 1404, 604,
		1409, 603, 1406, 605, 1413, 607, 1416, 609, 1421,
		610, 1423, 611, 1426, 611, 1425, 614, 1432, 615,
		1434, 614, 1434, 616, 1437, 625, 1459, 616, 1438,
		616, 1438, 617, 1440, 605, 1411},
		{582, 1357, 594, 1387, 596, 1391, 597, 1393, 596,
		1392, 598, 1395, 597, 1393, 598, 1394, 599, 1398,
		598, 1396, 601, 1401, 600, 1400, 601, 1403, 604,
		1409, 603, 1406, 606, 1413, 607, 1416, 609, 1421,
		610, 1423, 611, 1425, 611, 1425, 622, 1450, 615,
		1434, 615, 1434, 616, 1438, 618, 1443, 617, 1440,
		617, 1440, 619, 1445, 612, 1429},
		{587, 1370, 594, 1385, 595, 1388, 596, 1390, 595,
		1388, 596, 1391, 596, 1390, 596, 1392, 598, 1396,
		598, 1394, 600, 1400, 600, 1400, 602, 1405, 604,
		1410, 603, 1407, 606, 1415, 608, 1418, 610, 1424,
		611, 1427, 612, 1429, 613, 1429, 616, 1437, 625,
		1458, 617, 1441, 620, 1446, 622, 1452, 622, 1451,
		623, 1453, 626, 1461, 615, 1435},
		{738, 1721, 599, 1398, 595, 1388, 592, 1381, 597,
		1392, 588, 1373, 586, 1367, 585, 1365, 586, 1366,
		584, 1362, 585, 1365, 584, 1363, 585, 1364, 587,
		1369, 585, 1365, 587, 1370, 588, 1373, 590, 1376,
		591, 1378, 591, 1380, 591, 1378, 593, 1385, 594,
		1387, 598, 1396, 596, 1391, 598, 1396, 598, 1395,
		599, 1399, 613, 1431, 762, 1777},
	},
/*disable cbc*/
	{
		{821, 1915, 491, 1145, 491, 1146, 492, 1148, 492,
		1148, 492, 1149, 492, 1147, 492, 1149, 494, 1152,
		494, 1153, 496, 1158, 496, 1157, 498, 1161, 501,
		1168, 500, 1166, 503, 1174, 505, 1179, 508, 1185,
		509, 1188, 518, 1209, 511, 1192, 514, 1200, 516,
		1204, 516, 1204, 518, 1209, 521, 1216, 519, 1211,
		519, 1212, 523, 1220, 901, 2103},
		{598, 1395, 630, 1470, 631, 1473, 633, 1476, 632,
		1475, 633, 1477, 632, 1475, 633, 1476, 634, 1480,
		634, 1480, 637, 1486, 636, 1485, 638, 1488, 641,
		1496, 640, 1494, 644, 1502, 653, 1525, 648, 1512,
		650, 1516, 651, 1519, 651, 1520, 655, 1528, 657,
		1532, 657, 1533, 659, 1538, 662, 1544, 660, 1539,
		660, 1539, 662, 1546, 665, 1551},
		{598, 1394, 629, 1467, 631, 1472, 632, 1475, 632,
		1474, 632, 1476, 632, 1474, 632, 1475, 634, 1479,
		634, 1479, 636, 1485, 636, 1483, 637, 1487, 640,
		1494, 639, 1491, 650, 1518, 644, 1504, 647, 1510,
		648, 1513, 650, 1516, 650, 1517, 654, 1525, 655,
		1529, 655, 1529, 657, 1534, 660, 1539, 658, 1535,
		658, 1535, 660, 1540, 660, 1540},
		{598, 1395, 627, 1463, 629, 1469, 631, 1472, 631,
		1472, 631, 1473, 631, 1471, 631, 1473, 633, 1476,
		633, 1476, 635, 1482, 634, 1480, 636, 1484, 639,
		1491, 638, 1488, 641, 1496, 643, 1500, 646, 1506,
		647, 1510, 648, 1513, 649, 1513, 652, 1521, 654,
		1525, 661, 1543, 655, 1529, 658, 1534, 655, 1529,
		655, 1529, 658, 1535, 656, 1531},
		{598, 1395, 626, 1461, 629, 1467, 630, 1470, 630,
		1470, 631, 1471, 630, 1469, 630, 1471, 632, 1474,
		632, 1475, 634, 1480, 634, 1479, 635, 1482, 638,
		1489, 637, 1486, 640, 1494, 642, 1498, 645, 1504,
		654, 1526, 647, 1510, 648, 1511, 651, 1519, 652,
		1522, 652, 1522, 654, 1526, 656, 1531, 654, 1526,
		654, 1526, 656, 1531, 653, 1523},
		{599, 1398, 626, 1461, 628, 1466, 630, 1470, 630,
		1469, 630, 1471, 629, 1469, 630, 1470, 631, 1473,
		631, 1473, 634, 1479, 633, 1478, 635, 1481, 638,
		1488, 637, 1485, 640, 1493, 642, 1497, 644, 1503,
		645, 1506, 647, 1509, 647, 1509, 650, 1517, 652,
		1520, 652, 1520, 661, 1543, 655, 1529, 653, 1524,
		653, 1524, 655, 1529, 650, 1518},
		{601, 1401, 626, 1461, 629, 1467, 630, 1470, 630,
		1469, 630, 1470, 629, 1469, 630, 1470, 631, 1473,
		631, 1473, 634, 1479, 633, 1477, 635, 1481, 638,
		1488, 637, 1485, 640, 1493, 642, 1497, 644, 1503,
		645, 1505, 646, 1508, 654, 1526, 650, 1516, 651,
		1519, 651, 1519, 653, 1523, 655, 1528, 653, 1523,
		652, 1522, 654, 1527, 648, 1513},
		{603, 1406, 627, 1463, 629, 1468, 631, 1471, 630,
		1471, 631, 1472, 630, 1470, 630, 1471, 632, 1474,
		632, 1474, 634, 1479, 634, 1478, 635, 1482, 638,
		1489, 637, 1486, 640, 1494, 642, 1497, 652, 1522,
		645, 1506, 646, 1508, 647, 1509, 650, 1516, 651,
		1519, 651, 1519, 653, 1523, 655, 1528, 653, 1523,
		652, 1522, 654, 1526, 647, 1510},
		{605, 1411, 627, 1464, 630, 1469, 631, 1473, 631,
		1472, 631, 1473, 630, 1471, 631, 1473, 632, 1476,
		632, 1476, 635, 1481, 634, 1480, 636, 1483, 638,
		1490, 645, 1505, 640, 1494, 642, 1498, 644, 1504,
		646, 1506, 647, 1509, 647, 1509, 650, 1516, 651,
		1519, 651, 1518, 652, 1522, 654, 1527, 652, 1522,
		652, 1521, 654, 1526, 648, 1511},
		{607, 1417, 628, 1466, 630, 1471, 632, 1474, 632,
		1474, 632, 1475, 631, 1473, 632, 1475, 633, 1478,
		633, 1478, 636, 1483, 635, 1482, 636, 1485, 639,
		1492, 638, 1489, 641, 1495, 643, 1499, 645, 1505,
		646, 1507, 647, 1510, 647, 1510, 650, 1517, 651,
		1519, 651, 1519, 653, 1523, 654, 1527, 652, 1522,
		652, 1521, 662, 1544, 644, 1504},
		{612, 1427, 630, 1470, 632, 1475, 634, 1479, 633,
		1478, 634, 1479, 633, 1478, 634, 1479, 635, 1483,
		635, 1482, 637, 1487, 637, 1486, 638, 1489, 649,
		1514, 640, 1492, 642, 1499, 644, 1503, 646, 1508,
		647, 1510, 648, 1513, 648, 1513, 651, 1519, 652,
		1522, 652, 1521, 653, 1524, 655, 1528, 653, 1523,
		653, 1523, 655, 1528, 643, 1500},
		{614, 1432, 630, 1470, 632, 1475, 634, 1478, 633,
		1478, 634, 1479, 633, 1477, 634, 1479, 635, 1482,
		635, 1482, 638, 1488, 637, 1486, 638, 1489, 641,
		1495, 639, 1492, 642, 1499, 644, 1502, 646, 1508,
		647, 1510, 648, 1512, 648, 1512, 651, 1519, 652,
		1521, 652, 1521, 653, 1524, 663, 1547, 653, 1523,
		653, 1523, 655, 1528, 642, 1499},
		{617, 1440, 630, 1470, 632, 1474, 633, 1477, 633,
		1477, 634, 1478, 633, 1477, 634, 1478, 635, 1482,
		635, 1482, 637, 1487, 637, 1486, 638, 1489, 641,
		1495, 640, 1492, 643, 1499, 644, 1503, 646, 1508,
		647, 1510, 648, 1512, 648, 1512, 659, 1537, 652,
		1522, 652, 1521, 653, 1525, 656, 1530, 654, 1525,
		654, 1525, 657, 1533, 650, 1517},
		{622, 1452, 629, 1469, 630, 1471, 632, 1474, 631,
		1473, 632, 1475, 631, 1473, 632, 1475, 634, 1479,
		634, 1480, 637, 1486, 636, 1485, 639, 1491, 641,
		1496, 640, 1493, 643, 1501, 645, 1505, 647, 1510,
		648, 1513, 650, 1516, 650, 1516, 653, 1523, 662,
		1546, 655, 1528, 657, 1533, 660, 1539, 658, 1536,
		659, 1538, 664, 1549, 653, 1523},
		{892, 2082, 636, 1484, 632, 1474, 629, 1468, 634,
		1480, 625, 1459, 623, 1453, 622, 1452, 623, 1453,
		622, 1451, 623, 1453, 622, 1451, 622, 1452, 624,
		1457, 623, 1453, 625, 1459, 626, 1461, 628, 1465,
		629, 1467, 629, 1468, 629, 1467, 631, 1473, 633,
		1476, 636, 1485, 634, 1479, 637, 1485, 635, 1483,
		637, 1486, 652, 1520, 918, 2143},
	}
};

const int16_t baseline_cap_data_old[2][TX_NUMBER][RX_NUMBER*2] = {
    /*enable cbc*/
	{
		{557, 1035, 604, 1122, 605, 1123, 604, 1122, 608, 1130, 601,
		1117, 608, 1130, 615, 1141, 613, 1139, 614, 1140, 610, 1132,
		609, 1131, 620, 1151, 625, 1161, 638, 1184, 641, 1191, 648,
		1203, 669, 1243, 661, 1227, 671, 1245, 676, 1256, 685, 1273,
		690, 1282, 694, 1288, 689, 1279, 696, 1292, 696, 1292, 724,
		1344, 682, 1266, 724, 1344},
		{574, 1066, 622, 1154, 622, 1156, 620, 1151, 624, 1158, 618,
		1148, 625, 1161, 631, 1173, 630, 1170, 630, 1170, 627, 1164,
		624, 1160, 636, 1180, 641, 1191, 653, 1213, 656, 1218, 662,
		1230, 676, 1255, 676, 1255, 687, 1275, 694, 1288, 703, 1305,
		707, 1313, 721, 1339, 706, 1310, 711, 1321, 711, 1321, 734,
		1364, 671, 1245, 694, 1288},
		{573, 1065, 619, 1149, 618, 1148, 617, 1147, 620, 1152, 614,
		1140, 622, 1154, 628, 1166, 629, 1167, 628, 1166, 623, 1157,
		622, 1154, 633, 1175, 638, 1186, 661, 1227, 653, 1213, 660,
		1226, 673, 1249, 673, 1249, 684, 1270, 690, 1282, 701, 1301,
		704, 1307, 707, 1313, 701, 1303, 707, 1313, 707, 1313, 729,
		1355, 666, 1238, 687, 1277},
		{573, 1063, 616, 1144, 616, 1144, 614, 1140, 618, 1148, 611,
		1135, 619, 1149, 624, 1160, 625, 1161, 625, 1161, 622, 1154,
		620, 1152, 630, 1170, 637, 1183, 650, 1206, 652, 1210, 659,
		1223, 670, 1244, 671, 1247, 683, 1268, 688, 1278, 706, 1312,
		701, 1301, 704, 1308, 699, 1297, 704, 1308, 703, 1305, 724,
		1344, 659, 1223, 673, 1249},
		{573, 1063, 615, 1141, 615, 1141, 613, 1138, 616, 1144, 610,
		1132, 618, 1148, 624, 1158, 624, 1158, 624, 1160, 622, 1154,
		620, 1151, 630, 1170, 636, 1182, 648, 1204, 651, 1209, 659,
		1223, 670, 1244, 671, 1245, 680, 1264, 696, 1292, 694, 1290,
		699, 1297, 701, 1303, 696, 1292, 701, 1301, 699, 1297, 718,
		1333, 649, 1205, 663, 1231},
		{574, 1066, 615, 1143, 615, 1143, 613, 1139, 616, 1144, 610,
		1134, 617, 1147, 624, 1158, 625, 1161, 625, 1161, 622, 1156,
		622, 1154, 631, 1173, 646, 1200, 650, 1206, 651, 1209, 659,
		1223, 671, 1247, 671, 1245, 681, 1265, 687, 1275, 694, 1288,
		697, 1295, 699, 1297, 694, 1288, 699, 1297, 697, 1295, 713,
		1325, 645, 1199, 658, 1222},
		{578, 1073, 617, 1147, 616, 1144, 615, 1141, 618, 1148, 611,
		1135, 619, 1149, 625, 1161, 636, 1180, 628, 1166, 624, 1158,
		624, 1158, 634, 1177, 638, 1186, 651, 1209, 652, 1212, 660,
		1226, 673, 1249, 673, 1249, 681, 1265, 687, 1275, 694, 1288,
		697, 1295, 699, 1299, 694, 1290, 699, 1297, 697, 1294, 713,
		1323, 643, 1193, 654, 1214},
		{582, 1080, 619, 1149, 619, 1149, 616, 1144, 619, 1149, 613,
		1139, 620, 1152, 627, 1165, 628, 1166, 629, 1167, 625, 1161,
		624, 1160, 636, 1180, 641, 1191, 652, 1212, 655, 1216, 661,
		1227, 673, 1251, 673, 1251, 692, 1284, 687, 1275, 693, 1287,
		697, 1294, 699, 1299, 694, 1288, 699, 1297, 698, 1296, 713,
		1325, 645, 1197, 655, 1216},
		{583, 1083, 619, 1149, 618, 1148, 615, 1143, 620, 1151, 613,
		1138, 620, 1152, 627, 1164, 627, 1165, 638, 1184, 624, 1160,
		624, 1158, 634, 1178, 638, 1186, 652, 1210, 653, 1213, 660,
		1226, 671, 1245, 671, 1245, 679, 1261, 683, 1269, 690, 1282,
		694, 1288, 696, 1292, 690, 1281, 694, 1290, 693, 1287, 707,
		1313, 649, 1205, 655, 1217},
		{589, 1095, 623, 1157, 622, 1156, 619, 1149, 623, 1157, 616,
		1144, 624, 1158, 630, 1170, 631, 1173, 631, 1173, 629, 1167,
		627, 1165, 638, 1186, 643, 1193, 655, 1216, 666, 1236, 662,
		1230, 673, 1251, 673, 1249, 680, 1264, 684, 1270, 692, 1284,
		697, 1294, 697, 1295, 692, 1286, 697, 1295, 696, 1292, 707,
		1313, 650, 1206, 655, 1216},
		{594, 1104, 628, 1166, 624, 1160, 622, 1156, 627, 1164, 618,
		1148, 627, 1164, 632, 1174, 634, 1177, 634, 1178, 630, 1170,
		629, 1169, 641, 1190, 644, 1196, 656, 1218, 659, 1223, 664,
		1234, 675, 1253, 673, 1251, 681, 1265, 685, 1271, 693, 1287,
		694, 1290, 697, 1295, 693, 1287, 699, 1299, 708, 1316, 710,
		1318, 649, 1205, 652, 1210},
		{597, 1109, 629, 1169, 628, 1166, 624, 1160, 628, 1166, 620,
		1152, 627, 1165, 633, 1175, 634, 1178, 634, 1178, 641, 1191,
		631, 1173, 641, 1191, 646, 1200, 659, 1223, 661, 1227, 666,
		1236, 676, 1255, 676, 1256, 681, 1265, 685, 1273, 692, 1286,
		713, 1325, 699, 1297, 694, 1288, 701, 1301, 701, 1301, 708,
		1316, 646, 1200, 649, 1205},
		{601, 1115, 630, 1170, 629, 1167, 625, 1161, 628, 1166, 620,
		1151, 628, 1166, 633, 1175, 634, 1178, 636, 1180, 631, 1173,
		630, 1170, 641, 1191, 646, 1200, 659, 1225, 660, 1226, 674,
		1252, 676, 1255, 673, 1251, 680, 1264, 685, 1271, 692, 1286,
		694, 1290, 698, 1296, 693, 1287, 699, 1299, 702, 1304, 713,
		1323, 645, 1199, 647, 1201},
		{606, 1125, 632, 1174, 629, 1169, 627, 1164, 629, 1169, 622,
		1154, 629, 1167, 634, 1178, 634, 1178, 637, 1183, 633, 1175,
		630, 1170, 642, 1192, 647, 1201, 659, 1223, 660, 1226, 666,
		1236, 676, 1255, 673, 1251, 681, 1265, 685, 1271, 693, 1287,
		697, 1294, 701, 1301, 704, 1308, 702, 1304, 706, 1310, 718,
		1334, 638, 1184, 641, 1190},
		{613, 1138, 634, 1177, 631, 1173, 630, 1170, 632, 1174, 624,
		1158, 633, 1175, 637, 1183, 638, 1186, 641, 1190, 636, 1180,
		637, 1183, 645, 1199, 651, 1209, 662, 1229, 664, 1232, 670,
		1244, 680, 1262, 680, 1262, 688, 1278, 692, 1284, 699, 1297,
		704, 1307, 707, 1313, 704, 1307, 712, 1322, 715, 1329, 743,
		1379, 643, 1193, 644, 1196},
		{629, 1169, 639, 1187, 634, 1178, 629, 1169, 629, 1169, 620,
		1152, 627, 1165, 641, 1191, 630, 1170, 633, 1175, 627, 1165,
		624, 1160, 634, 1178, 639, 1187, 656, 1218, 652, 1210, 657,
		1221, 667, 1239, 678, 1258, 673, 1251, 678, 1258, 685, 1271,
		706, 1310, 692, 1284, 689, 1279, 697, 1294, 701, 1301, 727,
		1349, 643, 1193, 644, 1196},
		{757, 1407, 748, 1388, 705, 1309, 698, 1296, 686, 1274, 678,
		1260, 685, 1271, 683, 1269, 661, 1227, 671, 1245, 655, 1217,
		669, 1242, 659, 1223, 665, 1235, 665, 1235, 661, 1227, 649,
		1205, 646, 1200, 641, 1191, 649, 1205, 664, 1232, 629, 1167,
		645, 1199, 629, 1167, 645, 1199, 622, 1154, 629, 1167, 629,
		1167, 500, 3000, 500, 3000},
	},
	/*disable cbc*/
	{
		{557, 1035, 604, 1122, 605, 1123, 604, 1122, 608, 1130, 601,
		1117, 608, 1130, 615, 1141, 613, 1139, 614, 1140, 610, 1132,
		609, 1131, 620, 1151, 625, 1161, 638, 1184, 641, 1191, 648,
		1203, 669, 1243, 661, 1227, 671, 1245, 676, 1256, 685, 1273,
		690, 1282, 694, 1288, 689, 1279, 696, 1292, 696, 1292, 724,
		1344, 682, 1266, 724, 1344},
		{574, 1066, 622, 1154, 622, 1156, 620, 1151, 624, 1158, 618,
		1148, 625, 1161, 631, 1173, 630, 1170, 630, 1170, 627, 1164,
		624, 1160, 636, 1180, 641, 1191, 653, 1213, 656, 1218, 662,
		1230, 676, 1255, 676, 1255, 687, 1275, 694, 1288, 703, 1305,
		707, 1313, 721, 1339, 706, 1310, 711, 1321, 711, 1321, 734,
		1364, 671, 1245, 694, 1288},
		{573, 1065, 619, 1149, 618, 1148, 617, 1147, 620, 1152, 614,
		1140, 622, 1154, 628, 1166, 629, 1167, 628, 1166, 623, 1157,
		622, 1154, 633, 1175, 638, 1186, 661, 1227, 653, 1213, 660,
		1226, 673, 1249, 673, 1249, 684, 1270, 690, 1282, 701, 1301,
		704, 1307, 707, 1313, 701, 1303, 707, 1313, 707, 1313, 729,
		1355, 666, 1238, 687, 1277},
		{573, 1063, 616, 1144, 616, 1144, 614, 1140, 618, 1148, 611,
		1135, 619, 1149, 624, 1160, 625, 1161, 625, 1161, 622, 1154,
		620, 1152, 630, 1170, 637, 1183, 650, 1206, 652, 1210, 659,
		1223, 670, 1244, 671, 1247, 683, 1268, 688, 1278, 706, 1312,
		701, 1301, 704, 1308, 699, 1297, 704, 1308, 703, 1305, 724,
		1344, 659, 1223, 673, 1249},
		{573, 1063, 615, 1141, 615, 1141, 613, 1138, 616, 1144, 610,
		1132, 618, 1148, 624, 1158, 624, 1158, 624, 1160, 622, 1154,
		620, 1151, 630, 1170, 636, 1182, 648, 1204, 651, 1209, 659,
		1223, 670, 1244, 671, 1245, 680, 1264, 696, 1292, 694, 1290,
		699, 1297, 701, 1303, 696, 1292, 701, 1301, 699, 1297, 718,
		1333, 649, 1205, 663, 1231},
		{574, 1066, 615, 1143, 615, 1143, 613, 1139, 616, 1144, 610,
		1134, 617, 1147, 624, 1158, 625, 1161, 625, 1161, 622, 1156,
		622, 1154, 631, 1173, 646, 1200, 650, 1206, 651, 1209, 659,
		1223, 671, 1247, 671, 1245, 681, 1265, 687, 1275, 694, 1288,
		697, 1295, 699, 1297, 694, 1288, 699, 1297, 697, 1295, 713,
		1325, 645, 1199, 658, 1222},
		{578, 1073, 617, 1147, 616, 1144, 615, 1141, 618, 1148, 611,
		1135, 619, 1149, 625, 1161, 636, 1180, 628, 1166, 624, 1158,
		624, 1158, 634, 1177, 638, 1186, 651, 1209, 652, 1212, 660,
		1226, 673, 1249, 673, 1249, 681, 1265, 687, 1275, 694, 1288,
		697, 1295, 699, 1299, 694, 1290, 699, 1297, 697, 1294, 713,
		1323, 643, 1193, 654, 1214},
		{582, 1080, 619, 1149, 619, 1149, 616, 1144, 619, 1149, 613,
		1139, 620, 1152, 627, 1165, 628, 1166, 629, 1167, 625, 1161,
		624, 1160, 636, 1180, 641, 1191, 652, 1212, 655, 1216, 661,
		1227, 673, 1251, 673, 1251, 692, 1284, 687, 1275, 693, 1287,
		697, 1294, 699, 1299, 694, 1288, 699, 1297, 698, 1296, 713,
		1325, 645, 1197, 655, 1216},
		{583, 1083, 619, 1149, 618, 1148, 615, 1143, 620, 1151, 613,
		1138, 620, 1152, 627, 1164, 627, 1165, 638, 1184, 624, 1160,
		624, 1158, 634, 1178, 638, 1186, 652, 1210, 653, 1213, 660,
		1226, 671, 1245, 671, 1245, 679, 1261, 683, 1269, 690, 1282,
		694, 1288, 696, 1292, 690, 1281, 694, 1290, 693, 1287, 707,
		1313, 649, 1205, 655, 1217},
		{589, 1095, 623, 1157, 622, 1156, 619, 1149, 623, 1157, 616,
		1144, 624, 1158, 630, 1170, 631, 1173, 631, 1173, 629, 1167,
		627, 1165, 638, 1186, 643, 1193, 655, 1216, 666, 1236, 662,
		1230, 673, 1251, 673, 1249, 680, 1264, 684, 1270, 692, 1284,
		697, 1294, 697, 1295, 692, 1286, 697, 1295, 696, 1292, 707,
		1313, 650, 1206, 655, 1216},
		{594, 1104, 628, 1166, 624, 1160, 622, 1156, 627, 1164, 618,
		1148, 627, 1164, 632, 1174, 634, 1177, 634, 1178, 630, 1170,
		629, 1169, 641, 1190, 644, 1196, 656, 1218, 659, 1223, 664,
		1234, 675, 1253, 673, 1251, 681, 1265, 685, 1271, 693, 1287,
		694, 1290, 697, 1295, 693, 1287, 699, 1299, 708, 1316, 710,
		1318, 649, 1205, 652, 1210},
		{597, 1109, 629, 1169, 628, 1166, 624, 1160, 628, 1166, 620,
		1152, 627, 1165, 633, 1175, 634, 1178, 634, 1178, 641, 1191,
		631, 1173, 641, 1191, 646, 1200, 659, 1223, 661, 1227, 666,
		1236, 676, 1255, 676, 1256, 681, 1265, 685, 1273, 692, 1286,
		713, 1325, 699, 1297, 694, 1288, 701, 1301, 701, 1301, 708,
		1316, 646, 1200, 649, 1205},
		{601, 1115, 630, 1170, 629, 1167, 625, 1161, 628, 1166, 620,
		1151, 628, 1166, 633, 1175, 634, 1178, 636, 1180, 631, 1173,
		630, 1170, 641, 1191, 646, 1200, 659, 1225, 660, 1226, 674,
		1252, 676, 1255, 673, 1251, 680, 1264, 685, 1271, 692, 1286,
		694, 1290, 698, 1296, 693, 1287, 699, 1299, 702, 1304, 713,
		1323, 645, 1199, 647, 1201},
		{606, 1125, 632, 1174, 629, 1169, 627, 1164, 629, 1169, 622,
		1154, 629, 1167, 634, 1178, 634, 1178, 637, 1183, 633, 1175,
		630, 1170, 642, 1192, 647, 1201, 659, 1223, 660, 1226, 666,
		1236, 676, 1255, 673, 1251, 681, 1265, 685, 1271, 693, 1287,
		697, 1294, 701, 1301, 704, 1308, 702, 1304, 706, 1310, 718,
		1334, 638, 1184, 641, 1190},
		{613, 1138, 634, 1177, 631, 1173, 630, 1170, 632, 1174, 624,
		1158, 633, 1175, 637, 1183, 638, 1186, 641, 1190, 636, 1180,
		637, 1183, 645, 1199, 651, 1209, 662, 1229, 664, 1232, 670,
		1244, 680, 1262, 680, 1262, 688, 1278, 692, 1284, 699, 1297,
		704, 1307, 707, 1313, 704, 1307, 712, 1322, 715, 1329, 743,
		1379, 643, 1193, 644, 1196},
		{629, 1169, 639, 1187, 634, 1178, 629, 1169, 629, 1169, 620,
		1152, 627, 1165, 641, 1191, 630, 1170, 633, 1175, 627, 1165,
		624, 1160, 634, 1178, 639, 1187, 656, 1218, 652, 1210, 657,
		1221, 667, 1239, 678, 1258, 673, 1251, 678, 1258, 685, 1271,
		706, 1310, 692, 1284, 689, 1279, 697, 1294, 701, 1301, 727,
		1349, 643, 1193, 644, 1196},
		{757, 1407, 748, 1388, 705, 1309, 698, 1296, 686, 1274, 678,
		1260, 685, 1271, 683, 1269, 661, 1227, 671, 1245, 655, 1217,
		669, 1242, 659, 1223, 665, 1235, 665, 1235, 661, 1227, 649,
		1205, 646, 1200, 641, 1191, 649, 1205, 664, 1232, 629, 1167,
		645, 1199, 629, 1167, 645, 1199, 622, 1154, 629, 1167, 629,
		1167, 500, 3000, 500, 3000},
	}

};

#endif
