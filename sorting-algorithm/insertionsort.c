#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void insertionsort(int array[], int n)
{
    int i, j, joker; //joker muda de posição.

    for(i = 1; i < n; i++) //percorre array
    {
        joker = array[i]; 

        j = i-1;

        while (j >= 0 && joker < array[j]) //compara "joker" com todos antecessores
        {
            array[j+1] = array[j];

            j--;
        }

        array[j+1] = joker;
    }
}


void main()
{
	clock_t Start, End; 
	double Total_Time;
	Start = clock();

	int array[] = {45150, 50900, 3811, 55304, 18670, 58878, 23322, 33940, 34532, 30457, 55258, 1847, 26420, 7797, 21708, 11073, 25805, 4477, 14356, 22125, 45731, 42343, 38376, 6618, 59153, 16538, 35918, 21693, 26069, 39690, 49202, 20321, 17973, 18078, 55158, 60491, 16850, 40039, 31666, 65648, 30369, 20375, 16993, 30825, 21515, 40159, 33581, 43116, 31146, 65088, 67019, 8029, 8913, 68093, 44357, 52533, 67982, 1476, 10663, 11668, 20261, 19908, 26434, 33676, 26982, 12829, 48864, 19816, 55162, 67501, 52414, 42551, 39172, 43247, 11820, 32644, 5831, 47076, 36282, 47226, 27932, 24652, 66278, 16304, 5801, 51347, 19612, 69678, 53847, 62069, 12139, 58567, 34332, 28112, 61495, 14086, 23445, 48034, 65891, 3751, 7470, 64219, 69763, 53547, 22424, 49451, 9955, 32757, 22994, 51295, 20578, 40798, 22235, 37187, 6963, 47741, 22641, 3663, 34013, 35081, 67242, 50516, 34997, 42996, 48102, 22702, 55607, 69310, 40105, 30784, 18702, 58382, 21891, 40691, 58350, 67999, 16822, 35787, 58992, 38012, 64217, 48051, 59340, 44465, 68944, 56079, 25884, 69361, 34705, 18799, 40593, 28468, 9125, 5202, 18016, 61897, 34959, 20046, 8215, 12251, 1543, 69836, 2504, 41558, 8621, 66155, 14491, 57630, 5680, 19538, 28211, 44223, 32519, 3808, 5085, 38172, 7144, 47666, 32884, 42323, 43194, 7445, 11698, 51394, 55910, 63637, 39245, 12210, 48049, 40090, 43418, 34014, 5749, 14952, 40398, 11078, 30935, 23352, 47219, 46472, 42684, 3977, 47734, 37703, 9604, 35555, 33672, 61535, 15411, 69142, 46253, 47299, 31819, 42331, 47334, 27689, 11556, 43549, 43478, 61770, 28160, 29459, 12054, 68714, 18477, 7204, 24395, 23670, 68397, 60471, 22407, 64279, 55565, 60987, 56233, 29203, 13494, 53744, 46344, 49022, 59045, 13467, 26476, 12917, 31227, 45812, 43777, 10605, 23755, 38162, 42415, 907, 36667, 27518, 50109, 36731, 34165, 59195, 7550, 69985, 9690, 22208, 8557, 29483, 19829, 31876, 31143, 13613, 46481, 45219, 20493, 21675, 62070, 29852, 11747, 29008, 38076, 22296, 51377, 41244, 56947, 24456, 14447, 46174, 1971, 66042, 30183, 51795, 24467, 50879, 61209, 42750, 62578, 52346, 50476, 42247, 64812, 64962, 66660, 34808, 59092, 47956, 2511, 6707, 62499, 44137, 18592, 222, 67557, 36054, 9228, 69648, 65425, 36237, 24437, 63247, 65134, 8085, 55623, 10631, 44296, 55144, 32447, 68249, 66295, 16755, 48869, 16771, 38760, 66120, 17021, 4448, 23567, 57410, 35108, 62345, 8256, 54681, 44371, 3550, 59808, 46147, 56502, 19316, 12490, 8876, 46785, 68495, 35370, 695, 68544, 39502, 28652, 41783, 47421, 21288, 18957, 22977, 5445, 48647, 11426, 60431, 20568, 61322, 55940, 64395, 57319, 30812, 6553, 54346, 36937, 24138, 69882, 90, 26681, 60823, 40492, 2539, 66614, 820, 30728, 69136, 52449, 20588, 27333, 51426, 43811, 4277, 34233, 68077, 8328, 8514, 68321, 57498, 10917, 63179, 35010, 54309, 69524, 41835, 50575, 18163, 20358, 18106, 65325, 27454, 61430, 5185, 40065, 39105, 42872, 62299, 24314, 52387, 65582, 17671, 62390, 20923, 67909, 41924, 29614, 55504, 13447, 46322, 59413, 21743, 12087, 5197, 6461, 52640, 22420, 48321, 54024, 53774, 13701, 61168, 46641, 5041, 51682, 1916, 512, 60408, 18594, 10770, 65712, 36381, 41598, 33897, 56717, 15385, 42364, 54965, 957, 56029, 46849, 3495, 54372, 16079, 211, 8796, 64477, 22478, 10685, 27307, 7623, 29883, 63496, 28931, 9433, 26362, 65640, 27785, 53217, 20727, 41333, 38451, 40497, 4050, 2921, 55900, 22275, 65041, 27958, 69306, 27352, 69593, 13010, 17176, 12571, 23347, 64665, 67004, 64621, 46029, 55246, 30724, 27437, 30923, 6285, 9443, 24494, 22094, 26028, 47088, 52660, 20662, 66391, 66056, 7245, 18376, 60977, 811, 6073, 39096, 15584, 36466, 705, 41811, 69149, 41115, 7113, 45408, 58635, 548, 40156, 10806, 40628, 8976, 38065, 54370, 56609, 37845, 50845, 18882, 32720, 40185, 46196, 22819, 68615, 19829, 40425, 37710, 150, 42, 6502, 66894, 45772, 30653, 40803, 44518, 19133, 57626, 18629, 51782, 60110, 15361, 17082, 63558, 2917, 32758, 19249, 30944, 40623, 31445, 68076, 50666, 68383, 27769, 14791, 62554, 20549, 35799, 2749, 5819, 27195, 22874, 51489, 7682, 55263, 3637, 65042, 23404, 22399, 65137, 8126, 46695, 11269, 28574, 23705, 55517, 64839, 21153, 42863, 11633, 56773, 2090, 9618, 66532, 41222, 41703, 16584, 22939, 69731, 25549, 40799, 26769, 7076, 66792, 29207, 64031, 45986, 37079, 59998, 24475, 28353, 60776, 25276, 12175, 25452, 1771, 12988, 55784, 8114, 34353, 36410, 27156, 42718, 12233, 22458, 39625, 62693, 66211, 56933, 37452, 63400, 57412, 1605, 11223, 13244, 26185, 19991, 15518, 8704, 10072, 68374, 1516, 69439, 29407, 53522, 49504, 16420, 16616, 13873, 41483, 52494, 14131, 51460, 32353, 48098, 59934, 22602, 37450, 44726, 42692, 43428, 17043, 67704, 58983, 8148, 57106, 1198, 59265, 8348, 11848, 21115, 15176, 54953, 7916, 47308, 52306, 37436, 45079, 45544, 9081, 52663, 46775, 68192, 17717, 51874, 41511, 18138, 44863, 60633, 25104, 52198, 34293, 33217, 44388, 4513, 23481, 32898, 4271, 9494, 8536, 53400, 18874, 54494, 48189, 31849, 6954, 60952, 28535, 53697, 38260, 513, 65883, 1251, 19200, 51135, 18122, 13421, 41236, 9766, 3911, 66149, 42075, 38236, 37413, 16142, 42048, 37777, 45591, 12413, 17545, 16719, 30628, 12043, 16375, 29555, 32991, 58346, 58334, 31921, 53868, 52280, 19885, 53611, 13916, 31196, 39262, 44872, 54757, 40840, 63425, 38285, 27080, 405, 34190, 29523, 25947, 54458, 49392, 33362, 10930, 16231, 32399, 14606, 26910, 28849, 12425, 13565, 47556, 460, 17041, 3862, 26252, 33994, 1490, 62071, 6355, 5143, 54050, 2017, 46238, 18646, 21709, 18734, 23975, 6102, 35838, 60303, 2763, 23202, 50932, 24625, 66146, 28459, 47041, 68657, 69332, 11907, 46210, 54423, 39041, 63981, 61148, 36029, 525, 11544, 20911, 4987, 50668, 43117, 69096, 24017, 39677, 17517, 17407, 12900, 13885, 17, 47777, 69504, 18220, 18586, 41491, 27020, 68288, 61743, 56109, 34076, 5505, 44862, 15606, 52478, 14758, 67806, 18936, 21770, 32077, 29061, 29908, 58900, 27709, 45850, 36398, 15784, 40986, 17173, 16987, 23058, 229, 60232, 30349, 51792, 48541, 2596, 43668, 24371, 41727, 1166, 63665, 21075, 59725, 59937, 28153, 20633, 18144, 64869, 6074, 28208, 21302, 20946, 26097, 66957, 22312, 9290, 39763, 33672, 53598, 18035, 47913, 45172, 23714, 25819, 53206, 43978, 39490, 8073, 61105, 61362, 68060, 69119, 51825, 45928, 6751, 60484, 29991, 37539, 67053, 68277, 15057, 52485, 61775, 66723, 16021, 4386, 63658, 55117, 29679, 29690, 4508, 33176, 11979, 51708, 16306, 7592, 63494, 14211, 42741, 34179, 47850, 10744, 66521, 21356, 36167, 63162, 14860, 8525, 62501, 53167, 24353, 12870, 33841, 7679, 24636, 25641, 37046, 2980, 42981, 20966, 38175, 59571, 14568, 65565, 30547, 59406, 25725, 15555, 11587, 28530, 65609, 9931, 59591, 26429, 54435, 4314, 34456, 6472, 17866, 62902, 53127, 51736, 19756, 69370, 23939, 15100, 17831, 31421, 26181, 12345, 36141, 36372, 16048, 1028, 33281, 69827, 11339, 30059, 63431, 34874, 69534, 52365, 22424, 56606, 69864, 54561, 57713, 35160, 7624, 40302, 41535, 52166, 14918, 34655, 69966, 59400, 2868, 44452, 7368};
	
	int tamanho = sizeof(array)/sizeof(int);
	
	insertionsort(array, tamanho);
	
	for (int i = 0; i < tamanho; i++)
	{
		printf("%d ", array[i]);
	}

	printf("\n");

	End = clock();
	Total_Time = (double)(End - Start) / CLOCKS_PER_SEC;
	printf("Tempo: %fs\n", Total_Time);
}