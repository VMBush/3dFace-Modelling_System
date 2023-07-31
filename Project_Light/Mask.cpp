#include "Mask.h"


std::vector<std::pair<int, int>> TESSELATION{
std::pair<int, int>(127, 34), std::pair<int, int>(34, 139), std::pair<int, int>(139, 127), std::pair<int, int>(11, 0), std::pair<int, int>(0, 37), std::pair<int, int>(37, 11),
std::pair<int, int>(232, 231), std::pair<int, int>(231, 120), std::pair<int, int>(120, 232), std::pair<int, int>(72, 37), std::pair<int, int>(37, 39), std::pair<int, int>(39, 72),
std::pair<int, int>(128, 121), std::pair<int, int>(121, 47), std::pair<int, int>(47, 128), std::pair<int, int>(232, 121), std::pair<int, int>(121, 128), std::pair<int, int>(128, 232),
std::pair<int, int>(104, 69), std::pair<int, int>(69, 67), std::pair<int, int>(67, 104), std::pair<int, int>(175, 171), std::pair<int, int>(171, 148), std::pair<int, int>(148, 175),
std::pair<int, int>(118, 50), std::pair<int, int>(50, 101), std::pair<int, int>(101, 118), std::pair<int, int>(73, 39), std::pair<int, int>(39, 40), std::pair<int, int>(40, 73),
std::pair<int, int>(9, 151), std::pair<int, int>(151, 108), std::pair<int, int>(108, 9), std::pair<int, int>(48, 115), std::pair<int, int>(115, 131), std::pair<int, int>(131, 48),
std::pair<int, int>(194, 204), std::pair<int, int>(204, 211), std::pair<int, int>(211, 194), std::pair<int, int>(74, 40), std::pair<int, int>(40, 185), std::pair<int, int>(185, 74),
std::pair<int, int>(80, 42), std::pair<int, int>(42, 183), std::pair<int, int>(183, 80), std::pair<int, int>(40, 92), std::pair<int, int>(92, 186), std::pair<int, int>(186, 40),
std::pair<int, int>(230, 229), std::pair<int, int>(229, 118), std::pair<int, int>(118, 230), std::pair<int, int>(202, 212), std::pair<int, int>(212, 214), std::pair<int, int>(214, 202),
std::pair<int, int>(83, 18), std::pair<int, int>(18, 17), std::pair<int, int>(17, 83), std::pair<int, int>(76, 61), std::pair<int, int>(61, 146), std::pair<int, int>(146, 76),
std::pair<int, int>(160, 29), std::pair<int, int>(29, 30), std::pair<int, int>(30, 160), std::pair<int, int>(56, 157), std::pair<int, int>(157, 173), std::pair<int, int>(173, 56),
std::pair<int, int>(106, 204), std::pair<int, int>(204, 194), std::pair<int, int>(194, 106), std::pair<int, int>(135, 214), std::pair<int, int>(214, 192), std::pair<int, int>(192, 135),
std::pair<int, int>(203, 165), std::pair<int, int>(165, 98), std::pair<int, int>(98, 203), std::pair<int, int>(21, 71), std::pair<int, int>(71, 68), std::pair<int, int>(68, 21),
std::pair<int, int>(51, 45), std::pair<int, int>(45, 4), std::pair<int, int>(4, 51), std::pair<int, int>(144, 24), std::pair<int, int>(24, 23), std::pair<int, int>(23, 144),
std::pair<int, int>(77, 146), std::pair<int, int>(146, 91), std::pair<int, int>(91, 77), std::pair<int, int>(205, 50), std::pair<int, int>(50, 187), std::pair<int, int>(187, 205),
std::pair<int, int>(201, 200), std::pair<int, int>(200, 18), std::pair<int, int>(18, 201), std::pair<int, int>(91, 106), std::pair<int, int>(106, 182), std::pair<int, int>(182, 91),
std::pair<int, int>(90, 91), std::pair<int, int>(91, 181), std::pair<int, int>(181, 90), std::pair<int, int>(85, 84), std::pair<int, int>(84, 17), std::pair<int, int>(17, 85),
std::pair<int, int>(206, 203), std::pair<int, int>(203, 36), std::pair<int, int>(36, 206), std::pair<int, int>(148, 171), std::pair<int, int>(171, 140), std::pair<int, int>(140, 148),
std::pair<int, int>(92, 40), std::pair<int, int>(40, 39), std::pair<int, int>(39, 92), std::pair<int, int>(193, 189), std::pair<int, int>(189, 244), std::pair<int, int>(244, 193),
std::pair<int, int>(159, 158), std::pair<int, int>(158, 28), std::pair<int, int>(28, 159), std::pair<int, int>(247, 246), std::pair<int, int>(246, 161), std::pair<int, int>(161, 247),
std::pair<int, int>(236, 3), std::pair<int, int>(3, 196), std::pair<int, int>(196, 236), std::pair<int, int>(54, 68), std::pair<int, int>(68, 104), std::pair<int, int>(104, 54),
std::pair<int, int>(193, 168), std::pair<int, int>(168, 8), std::pair<int, int>(8, 193), std::pair<int, int>(117, 228), std::pair<int, int>(228, 31), std::pair<int, int>(31, 117),
std::pair<int, int>(189, 193), std::pair<int, int>(193, 55), std::pair<int, int>(55, 189), std::pair<int, int>(98, 97), std::pair<int, int>(97, 99), std::pair<int, int>(99, 98),
std::pair<int, int>(126, 47), std::pair<int, int>(47, 100), std::pair<int, int>(100, 126), std::pair<int, int>(166, 79), std::pair<int, int>(79, 218), std::pair<int, int>(218, 166),
std::pair<int, int>(155, 154), std::pair<int, int>(154, 26), std::pair<int, int>(26, 155), std::pair<int, int>(209, 49), std::pair<int, int>(49, 131), std::pair<int, int>(131, 209),
std::pair<int, int>(135, 136), std::pair<int, int>(136, 150), std::pair<int, int>(150, 135), std::pair<int, int>(47, 126), std::pair<int, int>(126, 217), std::pair<int, int>(217, 47),
std::pair<int, int>(223, 52), std::pair<int, int>(52, 53), std::pair<int, int>(53, 223), std::pair<int, int>(45, 51), std::pair<int, int>(51, 134), std::pair<int, int>(134, 45),
std::pair<int, int>(211, 170), std::pair<int, int>(170, 140), std::pair<int, int>(140, 211), std::pair<int, int>(67, 69), std::pair<int, int>(69, 108), std::pair<int, int>(108, 67),
std::pair<int, int>(43, 106), std::pair<int, int>(106, 91), std::pair<int, int>(91, 43), std::pair<int, int>(230, 119), std::pair<int, int>(119, 120), std::pair<int, int>(120, 230),
std::pair<int, int>(226, 130), std::pair<int, int>(130, 247), std::pair<int, int>(247, 226), std::pair<int, int>(63, 53), std::pair<int, int>(53, 52), std::pair<int, int>(52, 63),
std::pair<int, int>(238, 20), std::pair<int, int>(20, 242), std::pair<int, int>(242, 238), std::pair<int, int>(46, 70), std::pair<int, int>(70, 156), std::pair<int, int>(156, 46),
std::pair<int, int>(78, 62), std::pair<int, int>(62, 96), std::pair<int, int>(96, 78), std::pair<int, int>(46, 53), std::pair<int, int>(53, 63), std::pair<int, int>(63, 46),
std::pair<int, int>(143, 34), std::pair<int, int>(34, 227), std::pair<int, int>(227, 143), std::pair<int, int>(123, 117), std::pair<int, int>(117, 111), std::pair<int, int>(111, 123),
std::pair<int, int>(44, 125), std::pair<int, int>(125, 19), std::pair<int, int>(19, 44), std::pair<int, int>(236, 134), std::pair<int, int>(134, 51), std::pair<int, int>(51, 236),
std::pair<int, int>(216, 206), std::pair<int, int>(206, 205), std::pair<int, int>(205, 216), std::pair<int, int>(154, 153), std::pair<int, int>(153, 22), std::pair<int, int>(22, 154),
std::pair<int, int>(39, 37), std::pair<int, int>(37, 167), std::pair<int, int>(167, 39), std::pair<int, int>(200, 201), std::pair<int, int>(201, 208), std::pair<int, int>(208, 200),
std::pair<int, int>(36, 142), std::pair<int, int>(142, 100), std::pair<int, int>(100, 36), std::pair<int, int>(57, 212), std::pair<int, int>(212, 202), std::pair<int, int>(202, 57),
std::pair<int, int>(20, 60), std::pair<int, int>(60, 99), std::pair<int, int>(99, 20), std::pair<int, int>(28, 158), std::pair<int, int>(158, 157), std::pair<int, int>(157, 28),
std::pair<int, int>(35, 226), std::pair<int, int>(226, 113), std::pair<int, int>(113, 35), std::pair<int, int>(160, 159), std::pair<int, int>(159, 27), std::pair<int, int>(27, 160),
std::pair<int, int>(204, 202), std::pair<int, int>(202, 210), std::pair<int, int>(210, 204), std::pair<int, int>(113, 225), std::pair<int, int>(225, 46), std::pair<int, int>(46, 113),
std::pair<int, int>(43, 202), std::pair<int, int>(202, 204), std::pair<int, int>(204, 43), std::pair<int, int>(62, 76), std::pair<int, int>(76, 77), std::pair<int, int>(77, 62),
std::pair<int, int>(137, 123), std::pair<int, int>(123, 116), std::pair<int, int>(116, 137), std::pair<int, int>(41, 38), std::pair<int, int>(38, 72), std::pair<int, int>(72, 41),
std::pair<int, int>(203, 129), std::pair<int, int>(129, 142), std::pair<int, int>(142, 203), std::pair<int, int>(64, 98), std::pair<int, int>(98, 240), std::pair<int, int>(240, 64),
std::pair<int, int>(49, 102), std::pair<int, int>(102, 64), std::pair<int, int>(64, 49), std::pair<int, int>(41, 73), std::pair<int, int>(73, 74), std::pair<int, int>(74, 41),
std::pair<int, int>(212, 216), std::pair<int, int>(216, 207), std::pair<int, int>(207, 212), std::pair<int, int>(42, 74), std::pair<int, int>(74, 184), std::pair<int, int>(184, 42),
std::pair<int, int>(169, 170), std::pair<int, int>(170, 211), std::pair<int, int>(211, 169), std::pair<int, int>(170, 149), std::pair<int, int>(149, 176), std::pair<int, int>(176, 170),
std::pair<int, int>(105, 66), std::pair<int, int>(66, 69), std::pair<int, int>(69, 105), std::pair<int, int>(122, 6), std::pair<int, int>(6, 168), std::pair<int, int>(168, 122),
std::pair<int, int>(123, 147), std::pair<int, int>(147, 187), std::pair<int, int>(187, 123), std::pair<int, int>(96, 77), std::pair<int, int>(77, 90), std::pair<int, int>(90, 96),
std::pair<int, int>(65, 55), std::pair<int, int>(55, 107), std::pair<int, int>(107, 65), std::pair<int, int>(89, 90), std::pair<int, int>(90, 180), std::pair<int, int>(180, 89),
std::pair<int, int>(101, 100), std::pair<int, int>(100, 120), std::pair<int, int>(120, 101), std::pair<int, int>(63, 105), std::pair<int, int>(105, 104), std::pair<int, int>(104, 63),
std::pair<int, int>(93, 137), std::pair<int, int>(137, 227), std::pair<int, int>(227, 93), std::pair<int, int>(15, 86), std::pair<int, int>(86, 85), std::pair<int, int>(85, 15),
std::pair<int, int>(129, 102), std::pair<int, int>(102, 49), std::pair<int, int>(49, 129), std::pair<int, int>(14, 87), std::pair<int, int>(87, 86), std::pair<int, int>(86, 14),
std::pair<int, int>(55, 8), std::pair<int, int>(8, 9), std::pair<int, int>(9, 55), std::pair<int, int>(100, 47), std::pair<int, int>(47, 121), std::pair<int, int>(121, 100),
std::pair<int, int>(145, 23), std::pair<int, int>(23, 22), std::pair<int, int>(22, 145), std::pair<int, int>(88, 89), std::pair<int, int>(89, 179), std::pair<int, int>(179, 88),
std::pair<int, int>(6, 122), std::pair<int, int>(122, 196), std::pair<int, int>(196, 6), std::pair<int, int>(88, 95), std::pair<int, int>(95, 96), std::pair<int, int>(96, 88),
std::pair<int, int>(138, 172), std::pair<int, int>(172, 136), std::pair<int, int>(136, 138), std::pair<int, int>(215, 58), std::pair<int, int>(58, 172), std::pair<int, int>(172, 215),
std::pair<int, int>(115, 48), std::pair<int, int>(48, 219), std::pair<int, int>(219, 115), std::pair<int, int>(42, 80), std::pair<int, int>(80, 81), std::pair<int, int>(81, 42),
std::pair<int, int>(195, 3), std::pair<int, int>(3, 51), std::pair<int, int>(51, 195), std::pair<int, int>(43, 146), std::pair<int, int>(146, 61), std::pair<int, int>(61, 43),
std::pair<int, int>(171, 175), std::pair<int, int>(175, 199), std::pair<int, int>(199, 171), std::pair<int, int>(81, 82), std::pair<int, int>(82, 38), std::pair<int, int>(38, 81),
std::pair<int, int>(53, 46), std::pair<int, int>(46, 225), std::pair<int, int>(225, 53), std::pair<int, int>(144, 163), std::pair<int, int>(163, 110), std::pair<int, int>(110, 144),
std::pair<int, int>(52, 65), std::pair<int, int>(65, 66), std::pair<int, int>(66, 52), std::pair<int, int>(229, 228), std::pair<int, int>(228, 117), std::pair<int, int>(117, 229),
std::pair<int, int>(34, 127), std::pair<int, int>(127, 234), std::pair<int, int>(234, 34), std::pair<int, int>(107, 108), std::pair<int, int>(108, 69), std::pair<int, int>(69, 107),
std::pair<int, int>(109, 108), std::pair<int, int>(108, 151), std::pair<int, int>(151, 109), std::pair<int, int>(48, 64), std::pair<int, int>(64, 235), std::pair<int, int>(235, 48),
std::pair<int, int>(62, 78), std::pair<int, int>(78, 191), std::pair<int, int>(191, 62), std::pair<int, int>(129, 209), std::pair<int, int>(209, 126), std::pair<int, int>(126, 129),
std::pair<int, int>(111, 35), std::pair<int, int>(35, 143), std::pair<int, int>(143, 111), std::pair<int, int>(117, 123), std::pair<int, int>(123, 50), std::pair<int, int>(50, 117),
std::pair<int, int>(222, 65), std::pair<int, int>(65, 52), std::pair<int, int>(52, 222), std::pair<int, int>(19, 125), std::pair<int, int>(125, 141), std::pair<int, int>(141, 19),
std::pair<int, int>(221, 55), std::pair<int, int>(55, 65), std::pair<int, int>(65, 221), std::pair<int, int>(3, 195), std::pair<int, int>(195, 197), std::pair<int, int>(197, 3),
std::pair<int, int>(25, 7), std::pair<int, int>(7, 33), std::pair<int, int>(33, 25), std::pair<int, int>(220, 237), std::pair<int, int>(237, 44), std::pair<int, int>(44, 220),
std::pair<int, int>(70, 71), std::pair<int, int>(71, 139), std::pair<int, int>(139, 70), std::pair<int, int>(122, 193), std::pair<int, int>(193, 245), std::pair<int, int>(245, 122),
std::pair<int, int>(247, 130), std::pair<int, int>(130, 33), std::pair<int, int>(33, 247), std::pair<int, int>(71, 21), std::pair<int, int>(21, 162), std::pair<int, int>(162, 71),
std::pair<int, int>(170, 169), std::pair<int, int>(169, 150), std::pair<int, int>(150, 170), std::pair<int, int>(188, 174), std::pair<int, int>(174, 196), std::pair<int, int>(196, 188),
std::pair<int, int>(216, 186), std::pair<int, int>(186, 92), std::pair<int, int>(92, 216), std::pair<int, int>(2, 97), std::pair<int, int>(97, 167), std::pair<int, int>(167, 2),
std::pair<int, int>(141, 125), std::pair<int, int>(125, 241), std::pair<int, int>(241, 141), std::pair<int, int>(164, 167), std::pair<int, int>(167, 37), std::pair<int, int>(37, 164),
std::pair<int, int>(72, 38), std::pair<int, int>(38, 12), std::pair<int, int>(12, 72), std::pair<int, int>(38, 82), std::pair<int, int>(82, 13), std::pair<int, int>(13, 38),
std::pair<int, int>(63, 68), std::pair<int, int>(68, 71), std::pair<int, int>(71, 63), std::pair<int, int>(226, 35), std::pair<int, int>(35, 111), std::pair<int, int>(111, 226),
std::pair<int, int>(101, 50), std::pair<int, int>(50, 205), std::pair<int, int>(205, 101), std::pair<int, int>(206, 92), std::pair<int, int>(92, 165), std::pair<int, int>(165, 206),
std::pair<int, int>(209, 198), std::pair<int, int>(198, 217), std::pair<int, int>(217, 209), std::pair<int, int>(165, 167), std::pair<int, int>(167, 97), std::pair<int, int>(97, 165),
std::pair<int, int>(220, 115), std::pair<int, int>(115, 218), std::pair<int, int>(218, 220), std::pair<int, int>(133, 112), std::pair<int, int>(112, 243), std::pair<int, int>(243, 133),
std::pair<int, int>(239, 238), std::pair<int, int>(238, 241), std::pair<int, int>(241, 239), std::pair<int, int>(214, 135), std::pair<int, int>(135, 169), std::pair<int, int>(169, 214),
std::pair<int, int>(190, 173), std::pair<int, int>(173, 133), std::pair<int, int>(133, 190), std::pair<int, int>(171, 208), std::pair<int, int>(208, 32), std::pair<int, int>(32, 171),
std::pair<int, int>(125, 44), std::pair<int, int>(44, 237), std::pair<int, int>(237, 125), std::pair<int, int>(86, 87), std::pair<int, int>(87, 178), std::pair<int, int>(178, 86),
std::pair<int, int>(85, 86), std::pair<int, int>(86, 179), std::pair<int, int>(179, 85), std::pair<int, int>(84, 85), std::pair<int, int>(85, 180), std::pair<int, int>(180, 84),
std::pair<int, int>(83, 84), std::pair<int, int>(84, 181), std::pair<int, int>(181, 83), std::pair<int, int>(201, 83), std::pair<int, int>(83, 182), std::pair<int, int>(182, 201),
std::pair<int, int>(137, 93), std::pair<int, int>(93, 132), std::pair<int, int>(132, 137), std::pair<int, int>(76, 62), std::pair<int, int>(62, 183), std::pair<int, int>(183, 76),
std::pair<int, int>(61, 76), std::pair<int, int>(76, 184), std::pair<int, int>(184, 61), std::pair<int, int>(57, 61), std::pair<int, int>(61, 185), std::pair<int, int>(185, 57),
std::pair<int, int>(212, 57), std::pair<int, int>(57, 186), std::pair<int, int>(186, 212), std::pair<int, int>(214, 207), std::pair<int, int>(207, 187), std::pair<int, int>(187, 214),
std::pair<int, int>(34, 143), std::pair<int, int>(143, 156), std::pair<int, int>(156, 34), std::pair<int, int>(79, 239), std::pair<int, int>(239, 237), std::pair<int, int>(237, 79),
std::pair<int, int>(123, 137), std::pair<int, int>(137, 177), std::pair<int, int>(177, 123), std::pair<int, int>(44, 1), std::pair<int, int>(1, 4), std::pair<int, int>(4, 44),
std::pair<int, int>(201, 194), std::pair<int, int>(194, 32), std::pair<int, int>(32, 201), std::pair<int, int>(64, 102), std::pair<int, int>(102, 129), std::pair<int, int>(129, 64),
std::pair<int, int>(213, 215), std::pair<int, int>(215, 138), std::pair<int, int>(138, 213), std::pair<int, int>(59, 166), std::pair<int, int>(166, 219), std::pair<int, int>(219, 59),
std::pair<int, int>(242, 99), std::pair<int, int>(99, 97), std::pair<int, int>(97, 242), std::pair<int, int>(2, 94), std::pair<int, int>(94, 141), std::pair<int, int>(141, 2),
std::pair<int, int>(75, 59), std::pair<int, int>(59, 235), std::pair<int, int>(235, 75), std::pair<int, int>(24, 110), std::pair<int, int>(110, 228), std::pair<int, int>(228, 24),
std::pair<int, int>(25, 130), std::pair<int, int>(130, 226), std::pair<int, int>(226, 25), std::pair<int, int>(23, 24), std::pair<int, int>(24, 229), std::pair<int, int>(229, 23),
std::pair<int, int>(22, 23), std::pair<int, int>(23, 230), std::pair<int, int>(230, 22), std::pair<int, int>(26, 22), std::pair<int, int>(22, 231), std::pair<int, int>(231, 26),
std::pair<int, int>(112, 26), std::pair<int, int>(26, 232), std::pair<int, int>(232, 112), std::pair<int, int>(189, 190), std::pair<int, int>(190, 243), std::pair<int, int>(243, 189),
std::pair<int, int>(221, 56), std::pair<int, int>(56, 190), std::pair<int, int>(190, 221), std::pair<int, int>(28, 56), std::pair<int, int>(56, 221), std::pair<int, int>(221, 28),
std::pair<int, int>(27, 28), std::pair<int, int>(28, 222), std::pair<int, int>(222, 27), std::pair<int, int>(29, 27), std::pair<int, int>(27, 223), std::pair<int, int>(223, 29),
std::pair<int, int>(30, 29), std::pair<int, int>(29, 224), std::pair<int, int>(224, 30), std::pair<int, int>(247, 30), std::pair<int, int>(30, 225), std::pair<int, int>(225, 247),
std::pair<int, int>(238, 79), std::pair<int, int>(79, 20), std::pair<int, int>(20, 238), std::pair<int, int>(166, 59), std::pair<int, int>(59, 75), std::pair<int, int>(75, 166),
std::pair<int, int>(60, 75), std::pair<int, int>(75, 240), std::pair<int, int>(240, 60), std::pair<int, int>(147, 177), std::pair<int, int>(177, 215), std::pair<int, int>(215, 147),
std::pair<int, int>(20, 79), std::pair<int, int>(79, 166), std::pair<int, int>(166, 20), std::pair<int, int>(187, 147), std::pair<int, int>(147, 213), std::pair<int, int>(213, 187),
std::pair<int, int>(112, 233), std::pair<int, int>(233, 244), std::pair<int, int>(244, 112), std::pair<int, int>(233, 128), std::pair<int, int>(128, 245), std::pair<int, int>(245, 233),
std::pair<int, int>(128, 114), std::pair<int, int>(114, 188), std::pair<int, int>(188, 128), std::pair<int, int>(114, 217), std::pair<int, int>(217, 174), std::pair<int, int>(174, 114),
std::pair<int, int>(131, 115), std::pair<int, int>(115, 220), std::pair<int, int>(220, 131), std::pair<int, int>(217, 198), std::pair<int, int>(198, 236), std::pair<int, int>(236, 217),
std::pair<int, int>(198, 131), std::pair<int, int>(131, 134), std::pair<int, int>(134, 198), std::pair<int, int>(177, 132), std::pair<int, int>(132, 58), std::pair<int, int>(58, 177),
std::pair<int, int>(143, 35), std::pair<int, int>(35, 124), std::pair<int, int>(124, 143), std::pair<int, int>(110, 163), std::pair<int, int>(163, 7), std::pair<int, int>(7, 110),
std::pair<int, int>(228, 110), std::pair<int, int>(110, 25), std::pair<int, int>(25, 228), std::pair<int, int>(356, 389), std::pair<int, int>(389, 368), std::pair<int, int>(368, 356),
std::pair<int, int>(11, 302), std::pair<int, int>(302, 267), std::pair<int, int>(267, 11), std::pair<int, int>(452, 350), std::pair<int, int>(350, 349), std::pair<int, int>(349, 452),
std::pair<int, int>(302, 303), std::pair<int, int>(303, 269), std::pair<int, int>(269, 302), std::pair<int, int>(357, 343), std::pair<int, int>(343, 277), std::pair<int, int>(277, 357),
std::pair<int, int>(452, 453), std::pair<int, int>(453, 357), std::pair<int, int>(357, 452), std::pair<int, int>(333, 332), std::pair<int, int>(332, 297), std::pair<int, int>(297, 333),
std::pair<int, int>(175, 152), std::pair<int, int>(152, 377), std::pair<int, int>(377, 175), std::pair<int, int>(347, 348), std::pair<int, int>(348, 330), std::pair<int, int>(330, 347),
std::pair<int, int>(303, 304), std::pair<int, int>(304, 270), std::pair<int, int>(270, 303), std::pair<int, int>(9, 336), std::pair<int, int>(336, 337), std::pair<int, int>(337, 9),
std::pair<int, int>(278, 279), std::pair<int, int>(279, 360), std::pair<int, int>(360, 278), std::pair<int, int>(418, 262), std::pair<int, int>(262, 431), std::pair<int, int>(431, 418),
std::pair<int, int>(304, 408), std::pair<int, int>(408, 409), std::pair<int, int>(409, 304), std::pair<int, int>(310, 415), std::pair<int, int>(415, 407), std::pair<int, int>(407, 310),
std::pair<int, int>(270, 409), std::pair<int, int>(409, 410), std::pair<int, int>(410, 270), std::pair<int, int>(450, 348), std::pair<int, int>(348, 347), std::pair<int, int>(347, 450),
std::pair<int, int>(422, 430), std::pair<int, int>(430, 434), std::pair<int, int>(434, 422), std::pair<int, int>(313, 314), std::pair<int, int>(314, 17), std::pair<int, int>(17, 313),
std::pair<int, int>(306, 307), std::pair<int, int>(307, 375), std::pair<int, int>(375, 306), std::pair<int, int>(387, 388), std::pair<int, int>(388, 260), std::pair<int, int>(260, 387),
std::pair<int, int>(286, 414), std::pair<int, int>(414, 398), std::pair<int, int>(398, 286), std::pair<int, int>(335, 406), std::pair<int, int>(406, 418), std::pair<int, int>(418, 335),
std::pair<int, int>(364, 367), std::pair<int, int>(367, 416), std::pair<int, int>(416, 364), std::pair<int, int>(423, 358), std::pair<int, int>(358, 327), std::pair<int, int>(327, 423),
std::pair<int, int>(251, 284), std::pair<int, int>(284, 298), std::pair<int, int>(298, 251), std::pair<int, int>(281, 5), std::pair<int, int>(5, 4), std::pair<int, int>(4, 281),
std::pair<int, int>(373, 374), std::pair<int, int>(374, 253), std::pair<int, int>(253, 373), std::pair<int, int>(307, 320), std::pair<int, int>(320, 321), std::pair<int, int>(321, 307),
std::pair<int, int>(425, 427), std::pair<int, int>(427, 411), std::pair<int, int>(411, 425), std::pair<int, int>(421, 313), std::pair<int, int>(313, 18), std::pair<int, int>(18, 421),
std::pair<int, int>(321, 405), std::pair<int, int>(405, 406), std::pair<int, int>(406, 321), std::pair<int, int>(320, 404), std::pair<int, int>(404, 405), std::pair<int, int>(405, 320),
std::pair<int, int>(315, 16), std::pair<int, int>(16, 17), std::pair<int, int>(17, 315), std::pair<int, int>(426, 425), std::pair<int, int>(425, 266), std::pair<int, int>(266, 426),
std::pair<int, int>(377, 400), std::pair<int, int>(400, 369), std::pair<int, int>(369, 377), std::pair<int, int>(322, 391), std::pair<int, int>(391, 269), std::pair<int, int>(269, 322),
std::pair<int, int>(417, 465), std::pair<int, int>(465, 464), std::pair<int, int>(464, 417), std::pair<int, int>(386, 257), std::pair<int, int>(257, 258), std::pair<int, int>(258, 386),
std::pair<int, int>(466, 260), std::pair<int, int>(260, 388), std::pair<int, int>(388, 466), std::pair<int, int>(456, 399), std::pair<int, int>(399, 419), std::pair<int, int>(419, 456),
std::pair<int, int>(284, 332), std::pair<int, int>(332, 333), std::pair<int, int>(333, 284), std::pair<int, int>(417, 285), std::pair<int, int>(285, 8), std::pair<int, int>(8, 417),
std::pair<int, int>(346, 340), std::pair<int, int>(340, 261), std::pair<int, int>(261, 346), std::pair<int, int>(413, 441), std::pair<int, int>(441, 285), std::pair<int, int>(285, 413),
std::pair<int, int>(327, 460), std::pair<int, int>(460, 328), std::pair<int, int>(328, 327), std::pair<int, int>(355, 371), std::pair<int, int>(371, 329), std::pair<int, int>(329, 355),
std::pair<int, int>(392, 439), std::pair<int, int>(439, 438), std::pair<int, int>(438, 392), std::pair<int, int>(382, 341), std::pair<int, int>(341, 256), std::pair<int, int>(256, 382),
std::pair<int, int>(429, 420), std::pair<int, int>(420, 360), std::pair<int, int>(360, 429), std::pair<int, int>(364, 394), std::pair<int, int>(394, 379), std::pair<int, int>(379, 364),
std::pair<int, int>(277, 343), std::pair<int, int>(343, 437), std::pair<int, int>(437, 277), std::pair<int, int>(443, 444), std::pair<int, int>(444, 283), std::pair<int, int>(283, 443),
std::pair<int, int>(275, 440), std::pair<int, int>(440, 363), std::pair<int, int>(363, 275), std::pair<int, int>(431, 262), std::pair<int, int>(262, 369), std::pair<int, int>(369, 431),
std::pair<int, int>(297, 338), std::pair<int, int>(338, 337), std::pair<int, int>(337, 297), std::pair<int, int>(273, 375), std::pair<int, int>(375, 321), std::pair<int, int>(321, 273),
std::pair<int, int>(450, 451), std::pair<int, int>(451, 349), std::pair<int, int>(349, 450), std::pair<int, int>(446, 342), std::pair<int, int>(342, 467), std::pair<int, int>(467, 446),
std::pair<int, int>(293, 334), std::pair<int, int>(334, 282), std::pair<int, int>(282, 293), std::pair<int, int>(458, 461), std::pair<int, int>(461, 462), std::pair<int, int>(462, 458),
std::pair<int, int>(276, 353), std::pair<int, int>(353, 383), std::pair<int, int>(383, 276), std::pair<int, int>(308, 324), std::pair<int, int>(324, 325), std::pair<int, int>(325, 308),
std::pair<int, int>(276, 300), std::pair<int, int>(300, 293), std::pair<int, int>(293, 276), std::pair<int, int>(372, 345), std::pair<int, int>(345, 447), std::pair<int, int>(447, 372),
std::pair<int, int>(352, 345), std::pair<int, int>(345, 340), std::pair<int, int>(340, 352), std::pair<int, int>(274, 1), std::pair<int, int>(1, 19), std::pair<int, int>(19, 274),
std::pair<int, int>(456, 248), std::pair<int, int>(248, 281), std::pair<int, int>(281, 456), std::pair<int, int>(436, 427), std::pair<int, int>(427, 425), std::pair<int, int>(425, 436),
std::pair<int, int>(381, 256), std::pair<int, int>(256, 252), std::pair<int, int>(252, 381), std::pair<int, int>(269, 391), std::pair<int, int>(391, 393), std::pair<int, int>(393, 269),
std::pair<int, int>(200, 199), std::pair<int, int>(199, 428), std::pair<int, int>(428, 200), std::pair<int, int>(266, 330), std::pair<int, int>(330, 329), std::pair<int, int>(329, 266),
std::pair<int, int>(287, 273), std::pair<int, int>(273, 422), std::pair<int, int>(422, 287), std::pair<int, int>(250, 462), std::pair<int, int>(462, 328), std::pair<int, int>(328, 250),
std::pair<int, int>(258, 286), std::pair<int, int>(286, 384), std::pair<int, int>(384, 258), std::pair<int, int>(265, 353), std::pair<int, int>(353, 342), std::pair<int, int>(342, 265),
std::pair<int, int>(387, 259), std::pair<int, int>(259, 257), std::pair<int, int>(257, 387), std::pair<int, int>(424, 431), std::pair<int, int>(431, 430), std::pair<int, int>(430, 424),
std::pair<int, int>(342, 353), std::pair<int, int>(353, 276), std::pair<int, int>(276, 342), std::pair<int, int>(273, 335), std::pair<int, int>(335, 424), std::pair<int, int>(424, 273),
std::pair<int, int>(292, 325), std::pair<int, int>(325, 307), std::pair<int, int>(307, 292), std::pair<int, int>(366, 447), std::pair<int, int>(447, 345), std::pair<int, int>(345, 366),
std::pair<int, int>(271, 303), std::pair<int, int>(303, 302), std::pair<int, int>(302, 271), std::pair<int, int>(423, 266), std::pair<int, int>(266, 371), std::pair<int, int>(371, 423),
std::pair<int, int>(294, 455), std::pair<int, int>(455, 460), std::pair<int, int>(460, 294), std::pair<int, int>(279, 278), std::pair<int, int>(278, 294), std::pair<int, int>(294, 279),
std::pair<int, int>(271, 272), std::pair<int, int>(272, 304), std::pair<int, int>(304, 271), std::pair<int, int>(432, 434), std::pair<int, int>(434, 427), std::pair<int, int>(427, 432),
std::pair<int, int>(272, 407), std::pair<int, int>(407, 408), std::pair<int, int>(408, 272), std::pair<int, int>(394, 430), std::pair<int, int>(430, 431), std::pair<int, int>(431, 394),
std::pair<int, int>(395, 369), std::pair<int, int>(369, 400), std::pair<int, int>(400, 395), std::pair<int, int>(334, 333), std::pair<int, int>(333, 299), std::pair<int, int>(299, 334),
std::pair<int, int>(351, 417), std::pair<int, int>(417, 168), std::pair<int, int>(168, 351), std::pair<int, int>(352, 280), std::pair<int, int>(280, 411), std::pair<int, int>(411, 352),
std::pair<int, int>(325, 319), std::pair<int, int>(319, 320), std::pair<int, int>(320, 325), std::pair<int, int>(295, 296), std::pair<int, int>(296, 336), std::pair<int, int>(336, 295),
std::pair<int, int>(319, 403), std::pair<int, int>(403, 404), std::pair<int, int>(404, 319), std::pair<int, int>(330, 348), std::pair<int, int>(348, 349), std::pair<int, int>(349, 330),
std::pair<int, int>(293, 298), std::pair<int, int>(298, 333), std::pair<int, int>(333, 293), std::pair<int, int>(323, 454), std::pair<int, int>(454, 447), std::pair<int, int>(447, 323),
std::pair<int, int>(15, 16), std::pair<int, int>(16, 315), std::pair<int, int>(315, 15), std::pair<int, int>(358, 429), std::pair<int, int>(429, 279), std::pair<int, int>(279, 358),
std::pair<int, int>(14, 15), std::pair<int, int>(15, 316), std::pair<int, int>(316, 14), std::pair<int, int>(285, 336), std::pair<int, int>(336, 9), std::pair<int, int>(9, 285),
std::pair<int, int>(329, 349), std::pair<int, int>(349, 350), std::pair<int, int>(350, 329), std::pair<int, int>(374, 380), std::pair<int, int>(380, 252), std::pair<int, int>(252, 374),
std::pair<int, int>(318, 402), std::pair<int, int>(402, 403), std::pair<int, int>(403, 318), std::pair<int, int>(6, 197), std::pair<int, int>(197, 419), std::pair<int, int>(419, 6),
std::pair<int, int>(318, 319), std::pair<int, int>(319, 325), std::pair<int, int>(325, 318), std::pair<int, int>(367, 364), std::pair<int, int>(364, 365), std::pair<int, int>(365, 367),
std::pair<int, int>(435, 367), std::pair<int, int>(367, 397), std::pair<int, int>(397, 435), std::pair<int, int>(344, 438), std::pair<int, int>(438, 439), std::pair<int, int>(439, 344),
std::pair<int, int>(272, 271), std::pair<int, int>(271, 311), std::pair<int, int>(311, 272), std::pair<int, int>(195, 5), std::pair<int, int>(5, 281), std::pair<int, int>(281, 195),
std::pair<int, int>(273, 287), std::pair<int, int>(287, 291), std::pair<int, int>(291, 273), std::pair<int, int>(396, 428), std::pair<int, int>(428, 199), std::pair<int, int>(199, 396),
std::pair<int, int>(311, 271), std::pair<int, int>(271, 268), std::pair<int, int>(268, 311), std::pair<int, int>(283, 444), std::pair<int, int>(444, 445), std::pair<int, int>(445, 283),
std::pair<int, int>(373, 254), std::pair<int, int>(254, 339), std::pair<int, int>(339, 373), std::pair<int, int>(282, 334), std::pair<int, int>(334, 296), std::pair<int, int>(296, 282),
std::pair<int, int>(449, 347), std::pair<int, int>(347, 346), std::pair<int, int>(346, 449), std::pair<int, int>(264, 447), std::pair<int, int>(447, 454), std::pair<int, int>(454, 264),
std::pair<int, int>(336, 296), std::pair<int, int>(296, 299), std::pair<int, int>(299, 336), std::pair<int, int>(338, 10), std::pair<int, int>(10, 151), std::pair<int, int>(151, 338),
std::pair<int, int>(278, 439), std::pair<int, int>(439, 455), std::pair<int, int>(455, 278), std::pair<int, int>(292, 407), std::pair<int, int>(407, 415), std::pair<int, int>(415, 292),
std::pair<int, int>(358, 371), std::pair<int, int>(371, 355), std::pair<int, int>(355, 358), std::pair<int, int>(340, 345), std::pair<int, int>(345, 372), std::pair<int, int>(372, 340),
std::pair<int, int>(346, 347), std::pair<int, int>(347, 280), std::pair<int, int>(280, 346), std::pair<int, int>(442, 443), std::pair<int, int>(443, 282), std::pair<int, int>(282, 442),
std::pair<int, int>(19, 94), std::pair<int, int>(94, 370), std::pair<int, int>(370, 19), std::pair<int, int>(441, 442), std::pair<int, int>(442, 295), std::pair<int, int>(295, 441),
std::pair<int, int>(248, 419), std::pair<int, int>(419, 197), std::pair<int, int>(197, 248), std::pair<int, int>(263, 255), std::pair<int, int>(255, 359), std::pair<int, int>(359, 263),
std::pair<int, int>(440, 275), std::pair<int, int>(275, 274), std::pair<int, int>(274, 440), std::pair<int, int>(300, 383), std::pair<int, int>(383, 368), std::pair<int, int>(368, 300),
std::pair<int, int>(351, 412), std::pair<int, int>(412, 465), std::pair<int, int>(465, 351), std::pair<int, int>(263, 467), std::pair<int, int>(467, 466), std::pair<int, int>(466, 263),
std::pair<int, int>(301, 368), std::pair<int, int>(368, 389), std::pair<int, int>(389, 301), std::pair<int, int>(395, 378), std::pair<int, int>(378, 379), std::pair<int, int>(379, 395),
std::pair<int, int>(412, 351), std::pair<int, int>(351, 419), std::pair<int, int>(419, 412), std::pair<int, int>(436, 426), std::pair<int, int>(426, 322), std::pair<int, int>(322, 436),
std::pair<int, int>(2, 164), std::pair<int, int>(164, 393), std::pair<int, int>(393, 2), std::pair<int, int>(370, 462), std::pair<int, int>(462, 461), std::pair<int, int>(461, 370),
std::pair<int, int>(164, 0), std::pair<int, int>(0, 267), std::pair<int, int>(267, 164), std::pair<int, int>(302, 11), std::pair<int, int>(11, 12), std::pair<int, int>(12, 302),
std::pair<int, int>(268, 12), std::pair<int, int>(12, 13), std::pair<int, int>(13, 268), std::pair<int, int>(293, 300), std::pair<int, int>(300, 301), std::pair<int, int>(301, 293),
std::pair<int, int>(446, 261), std::pair<int, int>(261, 340), std::pair<int, int>(340, 446), std::pair<int, int>(330, 266), std::pair<int, int>(266, 425), std::pair<int, int>(425, 330),
std::pair<int, int>(426, 423), std::pair<int, int>(423, 391), std::pair<int, int>(391, 426), std::pair<int, int>(429, 355), std::pair<int, int>(355, 437), std::pair<int, int>(437, 429),
std::pair<int, int>(391, 327), std::pair<int, int>(327, 326), std::pair<int, int>(326, 391), std::pair<int, int>(440, 457), std::pair<int, int>(457, 438), std::pair<int, int>(438, 440),
std::pair<int, int>(341, 382), std::pair<int, int>(382, 362), std::pair<int, int>(362, 341), std::pair<int, int>(459, 457), std::pair<int, int>(457, 461), std::pair<int, int>(461, 459),
std::pair<int, int>(434, 430), std::pair<int, int>(430, 394), std::pair<int, int>(394, 434), std::pair<int, int>(414, 463), std::pair<int, int>(463, 362), std::pair<int, int>(362, 414),
std::pair<int, int>(396, 369), std::pair<int, int>(369, 262), std::pair<int, int>(262, 396), std::pair<int, int>(354, 461), std::pair<int, int>(461, 457), std::pair<int, int>(457, 354),
std::pair<int, int>(316, 403), std::pair<int, int>(403, 402), std::pair<int, int>(402, 316), std::pair<int, int>(315, 404), std::pair<int, int>(404, 403), std::pair<int, int>(403, 315),
std::pair<int, int>(314, 405), std::pair<int, int>(405, 404), std::pair<int, int>(404, 314), std::pair<int, int>(313, 406), std::pair<int, int>(406, 405), std::pair<int, int>(405, 313),
std::pair<int, int>(421, 418), std::pair<int, int>(418, 406), std::pair<int, int>(406, 421), std::pair<int, int>(366, 401), std::pair<int, int>(401, 361), std::pair<int, int>(361, 366),
std::pair<int, int>(306, 408), std::pair<int, int>(408, 407), std::pair<int, int>(407, 306), std::pair<int, int>(291, 409), std::pair<int, int>(409, 408), std::pair<int, int>(408, 291),
std::pair<int, int>(287, 410), std::pair<int, int>(410, 409), std::pair<int, int>(409, 287), std::pair<int, int>(432, 436), std::pair<int, int>(436, 410), std::pair<int, int>(410, 432),
std::pair<int, int>(434, 416), std::pair<int, int>(416, 411), std::pair<int, int>(411, 434), std::pair<int, int>(264, 368), std::pair<int, int>(368, 383), std::pair<int, int>(383, 264),
std::pair<int, int>(309, 438), std::pair<int, int>(438, 457), std::pair<int, int>(457, 309), std::pair<int, int>(352, 376), std::pair<int, int>(376, 401), std::pair<int, int>(401, 352),
std::pair<int, int>(274, 275), std::pair<int, int>(275, 4), std::pair<int, int>(4, 274), std::pair<int, int>(421, 428), std::pair<int, int>(428, 262), std::pair<int, int>(262, 421),
std::pair<int, int>(294, 327), std::pair<int, int>(327, 358), std::pair<int, int>(358, 294), std::pair<int, int>(433, 416), std::pair<int, int>(416, 367), std::pair<int, int>(367, 433),
std::pair<int, int>(289, 455), std::pair<int, int>(455, 439), std::pair<int, int>(439, 289), std::pair<int, int>(462, 370), std::pair<int, int>(370, 326), std::pair<int, int>(326, 462),
std::pair<int, int>(2, 326), std::pair<int, int>(326, 370), std::pair<int, int>(370, 2), std::pair<int, int>(305, 460), std::pair<int, int>(460, 455), std::pair<int, int>(455, 305),
std::pair<int, int>(254, 449), std::pair<int, int>(449, 448), std::pair<int, int>(448, 254), std::pair<int, int>(255, 261), std::pair<int, int>(261, 446), std::pair<int, int>(446, 255),
std::pair<int, int>(253, 450), std::pair<int, int>(450, 449), std::pair<int, int>(449, 253), std::pair<int, int>(252, 451), std::pair<int, int>(451, 450), std::pair<int, int>(450, 252),
std::pair<int, int>(256, 452), std::pair<int, int>(452, 451), std::pair<int, int>(451, 256), std::pair<int, int>(341, 453), std::pair<int, int>(453, 452), std::pair<int, int>(452, 341),
std::pair<int, int>(413, 464), std::pair<int, int>(464, 463), std::pair<int, int>(463, 413), std::pair<int, int>(441, 413), std::pair<int, int>(413, 414), std::pair<int, int>(414, 441),
std::pair<int, int>(258, 442), std::pair<int, int>(442, 441), std::pair<int, int>(441, 258), std::pair<int, int>(257, 443), std::pair<int, int>(443, 442), std::pair<int, int>(442, 257),
std::pair<int, int>(259, 444), std::pair<int, int>(444, 443), std::pair<int, int>(443, 259), std::pair<int, int>(260, 445), std::pair<int, int>(445, 444), std::pair<int, int>(444, 260),
std::pair<int, int>(467, 342), std::pair<int, int>(342, 445), std::pair<int, int>(445, 467), std::pair<int, int>(459, 458), std::pair<int, int>(458, 250), std::pair<int, int>(250, 459),
std::pair<int, int>(289, 392), std::pair<int, int>(392, 290), std::pair<int, int>(290, 289), std::pair<int, int>(290, 328), std::pair<int, int>(328, 460), std::pair<int, int>(460, 290),
std::pair<int, int>(376, 433), std::pair<int, int>(433, 435), std::pair<int, int>(435, 376), std::pair<int, int>(250, 290), std::pair<int, int>(290, 392), std::pair<int, int>(392, 250),
std::pair<int, int>(411, 416), std::pair<int, int>(416, 433), std::pair<int, int>(433, 411), std::pair<int, int>(341, 463), std::pair<int, int>(463, 464), std::pair<int, int>(464, 341),
std::pair<int, int>(453, 464), std::pair<int, int>(464, 465), std::pair<int, int>(465, 453), std::pair<int, int>(357, 465), std::pair<int, int>(465, 412), std::pair<int, int>(412, 357),
std::pair<int, int>(343, 412), std::pair<int, int>(412, 399), std::pair<int, int>(399, 343), std::pair<int, int>(360, 363), std::pair<int, int>(363, 440), std::pair<int, int>(440, 360),
std::pair<int, int>(437, 399), std::pair<int, int>(399, 456), std::pair<int, int>(456, 437), std::pair<int, int>(420, 456), std::pair<int, int>(456, 363), std::pair<int, int>(363, 420),
std::pair<int, int>(401, 435), std::pair<int, int>(435, 288), std::pair<int, int>(288, 401), std::pair<int, int>(372, 383), std::pair<int, int>(383, 353), std::pair<int, int>(353, 372),
std::pair<int, int>(339, 255), std::pair<int, int>(255, 249), std::pair<int, int>(249, 339), std::pair<int, int>(448, 261), std::pair<int, int>(261, 255), std::pair<int, int>(255, 448),
std::pair<int, int>(133, 243), std::pair<int, int>(243, 190), std::pair<int, int>(190, 133), std::pair<int, int>(133, 155), std::pair<int, int>(155, 112), std::pair<int, int>(112, 133),
std::pair<int, int>(33, 246), std::pair<int, int>(246, 247), std::pair<int, int>(247, 33), std::pair<int, int>(33, 130), std::pair<int, int>(130, 25), std::pair<int, int>(25, 33),
std::pair<int, int>(398, 384), std::pair<int, int>(384, 286), std::pair<int, int>(286, 398), std::pair<int, int>(362, 398), std::pair<int, int>(398, 414), std::pair<int, int>(414, 362),
std::pair<int, int>(362, 463), std::pair<int, int>(463, 341), std::pair<int, int>(341, 362), std::pair<int, int>(263, 359), std::pair<int, int>(359, 467), std::pair<int, int>(467, 263),
std::pair<int, int>(263, 249), std::pair<int, int>(249, 255), std::pair<int, int>(255, 263), std::pair<int, int>(466, 467), std::pair<int, int>(467, 260), std::pair<int, int>(260, 466),
std::pair<int, int>(75, 60), std::pair<int, int>(60, 166), std::pair<int, int>(166, 75), std::pair<int, int>(238, 239), std::pair<int, int>(239, 79), std::pair<int, int>(79, 238),
std::pair<int, int>(162, 127), std::pair<int, int>(127, 139), std::pair<int, int>(139, 162), std::pair<int, int>(72, 11), std::pair<int, int>(11, 37), std::pair<int, int>(37, 72),
std::pair<int, int>(121, 232), std::pair<int, int>(232, 120), std::pair<int, int>(120, 121), std::pair<int, int>(73, 72), std::pair<int, int>(72, 39), std::pair<int, int>(39, 73),
std::pair<int, int>(114, 128), std::pair<int, int>(128, 47), std::pair<int, int>(47, 114), std::pair<int, int>(233, 232), std::pair<int, int>(232, 128), std::pair<int, int>(128, 233),
std::pair<int, int>(103, 104), std::pair<int, int>(104, 67), std::pair<int, int>(67, 103), std::pair<int, int>(152, 175), std::pair<int, int>(175, 148), std::pair<int, int>(148, 152),
std::pair<int, int>(119, 118), std::pair<int, int>(118, 101), std::pair<int, int>(101, 119), std::pair<int, int>(74, 73), std::pair<int, int>(73, 40), std::pair<int, int>(40, 74),
std::pair<int, int>(107, 9), std::pair<int, int>(9, 108), std::pair<int, int>(108, 107), std::pair<int, int>(49, 48), std::pair<int, int>(48, 131), std::pair<int, int>(131, 49),
std::pair<int, int>(32, 194), std::pair<int, int>(194, 211), std::pair<int, int>(211, 32), std::pair<int, int>(184, 74), std::pair<int, int>(74, 185), std::pair<int, int>(185, 184),
std::pair<int, int>(191, 80), std::pair<int, int>(80, 183), std::pair<int, int>(183, 191), std::pair<int, int>(185, 40), std::pair<int, int>(40, 186), std::pair<int, int>(186, 185),
std::pair<int, int>(119, 230), std::pair<int, int>(230, 118), std::pair<int, int>(118, 119), std::pair<int, int>(210, 202), std::pair<int, int>(202, 214), std::pair<int, int>(214, 210),
std::pair<int, int>(84, 83), std::pair<int, int>(83, 17), std::pair<int, int>(17, 84), std::pair<int, int>(77, 76), std::pair<int, int>(76, 146), std::pair<int, int>(146, 77),
std::pair<int, int>(161, 160), std::pair<int, int>(160, 30), std::pair<int, int>(30, 161), std::pair<int, int>(190, 56), std::pair<int, int>(56, 173), std::pair<int, int>(173, 190),
std::pair<int, int>(182, 106), std::pair<int, int>(106, 194), std::pair<int, int>(194, 182), std::pair<int, int>(138, 135), std::pair<int, int>(135, 192), std::pair<int, int>(192, 138),
std::pair<int, int>(129, 203), std::pair<int, int>(203, 98), std::pair<int, int>(98, 129), std::pair<int, int>(54, 21), std::pair<int, int>(21, 68), std::pair<int, int>(68, 54),
std::pair<int, int>(5, 51), std::pair<int, int>(51, 4), std::pair<int, int>(4, 5), std::pair<int, int>(145, 144), std::pair<int, int>(144, 23), std::pair<int, int>(23, 145),
std::pair<int, int>(90, 77), std::pair<int, int>(77, 91), std::pair<int, int>(91, 90), std::pair<int, int>(207, 205), std::pair<int, int>(205, 187), std::pair<int, int>(187, 207),
std::pair<int, int>(83, 201), std::pair<int, int>(201, 18), std::pair<int, int>(18, 83), std::pair<int, int>(181, 91), std::pair<int, int>(91, 182), std::pair<int, int>(182, 181),
std::pair<int, int>(180, 90), std::pair<int, int>(90, 181), std::pair<int, int>(181, 180), std::pair<int, int>(16, 85), std::pair<int, int>(85, 17), std::pair<int, int>(17, 16),
std::pair<int, int>(205, 206), std::pair<int, int>(206, 36), std::pair<int, int>(36, 205), std::pair<int, int>(176, 148), std::pair<int, int>(148, 140), std::pair<int, int>(140, 176),
std::pair<int, int>(165, 92), std::pair<int, int>(92, 39), std::pair<int, int>(39, 165), std::pair<int, int>(245, 193), std::pair<int, int>(193, 244), std::pair<int, int>(244, 245),
std::pair<int, int>(27, 159), std::pair<int, int>(159, 28), std::pair<int, int>(28, 27), std::pair<int, int>(30, 247), std::pair<int, int>(247, 161), std::pair<int, int>(161, 30),
std::pair<int, int>(174, 236), std::pair<int, int>(236, 196), std::pair<int, int>(196, 174), std::pair<int, int>(103, 54), std::pair<int, int>(54, 104), std::pair<int, int>(104, 103),
std::pair<int, int>(55, 193), std::pair<int, int>(193, 8), std::pair<int, int>(8, 55), std::pair<int, int>(111, 117), std::pair<int, int>(117, 31), std::pair<int, int>(31, 111),
std::pair<int, int>(221, 189), std::pair<int, int>(189, 55), std::pair<int, int>(55, 221), std::pair<int, int>(240, 98), std::pair<int, int>(98, 99), std::pair<int, int>(99, 240),
std::pair<int, int>(142, 126), std::pair<int, int>(126, 100), std::pair<int, int>(100, 142), std::pair<int, int>(219, 166), std::pair<int, int>(166, 218), std::pair<int, int>(218, 219),
std::pair<int, int>(112, 155), std::pair<int, int>(155, 26), std::pair<int, int>(26, 112), std::pair<int, int>(198, 209), std::pair<int, int>(209, 131), std::pair<int, int>(131, 198),
std::pair<int, int>(169, 135), std::pair<int, int>(135, 150), std::pair<int, int>(150, 169), std::pair<int, int>(114, 47), std::pair<int, int>(47, 217), std::pair<int, int>(217, 114),
std::pair<int, int>(224, 223), std::pair<int, int>(223, 53), std::pair<int, int>(53, 224), std::pair<int, int>(220, 45), std::pair<int, int>(45, 134), std::pair<int, int>(134, 220),
std::pair<int, int>(32, 211), std::pair<int, int>(211, 140), std::pair<int, int>(140, 32), std::pair<int, int>(109, 67), std::pair<int, int>(67, 108), std::pair<int, int>(108, 109),
std::pair<int, int>(146, 43), std::pair<int, int>(43, 91), std::pair<int, int>(91, 146), std::pair<int, int>(231, 230), std::pair<int, int>(230, 120), std::pair<int, int>(120, 231),
std::pair<int, int>(113, 226), std::pair<int, int>(226, 247), std::pair<int, int>(247, 113), std::pair<int, int>(105, 63), std::pair<int, int>(63, 52), std::pair<int, int>(52, 105),
std::pair<int, int>(241, 238), std::pair<int, int>(238, 242), std::pair<int, int>(242, 241), std::pair<int, int>(124, 46), std::pair<int, int>(46, 156), std::pair<int, int>(156, 124),
std::pair<int, int>(95, 78), std::pair<int, int>(78, 96), std::pair<int, int>(96, 95), std::pair<int, int>(70, 46), std::pair<int, int>(46, 63), std::pair<int, int>(63, 70),
std::pair<int, int>(116, 143), std::pair<int, int>(143, 227), std::pair<int, int>(227, 116), std::pair<int, int>(116, 123), std::pair<int, int>(123, 111), std::pair<int, int>(111, 116),
std::pair<int, int>(1, 44), std::pair<int, int>(44, 19), std::pair<int, int>(19, 1), std::pair<int, int>(3, 236), std::pair<int, int>(236, 51), std::pair<int, int>(51, 3),
std::pair<int, int>(207, 216), std::pair<int, int>(216, 205), std::pair<int, int>(205, 207), std::pair<int, int>(26, 154), std::pair<int, int>(154, 22), std::pair<int, int>(22, 26),
std::pair<int, int>(165, 39), std::pair<int, int>(39, 167), std::pair<int, int>(167, 165), std::pair<int, int>(199, 200), std::pair<int, int>(200, 208), std::pair<int, int>(208, 199),
std::pair<int, int>(101, 36), std::pair<int, int>(36, 100), std::pair<int, int>(100, 101), std::pair<int, int>(43, 57), std::pair<int, int>(57, 202), std::pair<int, int>(202, 43),
std::pair<int, int>(242, 20), std::pair<int, int>(20, 99), std::pair<int, int>(99, 242), std::pair<int, int>(56, 28), std::pair<int, int>(28, 157), std::pair<int, int>(157, 56),
std::pair<int, int>(124, 35), std::pair<int, int>(35, 113), std::pair<int, int>(113, 124), std::pair<int, int>(29, 160), std::pair<int, int>(160, 27), std::pair<int, int>(27, 29),
std::pair<int, int>(211, 204), std::pair<int, int>(204, 210), std::pair<int, int>(210, 211), std::pair<int, int>(124, 113), std::pair<int, int>(113, 46), std::pair<int, int>(46, 124),
std::pair<int, int>(106, 43), std::pair<int, int>(43, 204), std::pair<int, int>(204, 106), std::pair<int, int>(96, 62), std::pair<int, int>(62, 77), std::pair<int, int>(77, 96),
std::pair<int, int>(227, 137), std::pair<int, int>(137, 116), std::pair<int, int>(116, 227), std::pair<int, int>(73, 41), std::pair<int, int>(41, 72), std::pair<int, int>(72, 73),
std::pair<int, int>(36, 203), std::pair<int, int>(203, 142), std::pair<int, int>(142, 36), std::pair<int, int>(235, 64), std::pair<int, int>(64, 240), std::pair<int, int>(240, 235),
std::pair<int, int>(48, 49), std::pair<int, int>(49, 64), std::pair<int, int>(64, 48), std::pair<int, int>(42, 41), std::pair<int, int>(41, 74), std::pair<int, int>(74, 42),
std::pair<int, int>(214, 212), std::pair<int, int>(212, 207), std::pair<int, int>(207, 214), std::pair<int, int>(183, 42), std::pair<int, int>(42, 184), std::pair<int, int>(184, 183),
std::pair<int, int>(210, 169), std::pair<int, int>(169, 211), std::pair<int, int>(211, 210), std::pair<int, int>(140, 170), std::pair<int, int>(170, 176), std::pair<int, int>(176, 140),
std::pair<int, int>(104, 105), std::pair<int, int>(105, 69), std::pair<int, int>(69, 104), std::pair<int, int>(193, 122), std::pair<int, int>(122, 168), std::pair<int, int>(168, 193),
std::pair<int, int>(50, 123), std::pair<int, int>(123, 187), std::pair<int, int>(187, 50), std::pair<int, int>(89, 96), std::pair<int, int>(96, 90), std::pair<int, int>(90, 89),
std::pair<int, int>(66, 65), std::pair<int, int>(65, 107), std::pair<int, int>(107, 66), std::pair<int, int>(179, 89), std::pair<int, int>(89, 180), std::pair<int, int>(180, 179),
std::pair<int, int>(119, 101), std::pair<int, int>(101, 120), std::pair<int, int>(120, 119), std::pair<int, int>(68, 63), std::pair<int, int>(63, 104), std::pair<int, int>(104, 68),
std::pair<int, int>(234, 93), std::pair<int, int>(93, 227), std::pair<int, int>(227, 234), std::pair<int, int>(16, 15), std::pair<int, int>(15, 85), std::pair<int, int>(85, 16),
std::pair<int, int>(209, 129), std::pair<int, int>(129, 49), std::pair<int, int>(49, 209), std::pair<int, int>(15, 14), std::pair<int, int>(14, 86), std::pair<int, int>(86, 15),
std::pair<int, int>(107, 55), std::pair<int, int>(55, 9), std::pair<int, int>(9, 107), std::pair<int, int>(120, 100), std::pair<int, int>(100, 121), std::pair<int, int>(121, 120),
std::pair<int, int>(153, 145), std::pair<int, int>(145, 22), std::pair<int, int>(22, 153), std::pair<int, int>(178, 88), std::pair<int, int>(88, 179), std::pair<int, int>(179, 178),
std::pair<int, int>(197, 6), std::pair<int, int>(6, 196), std::pair<int, int>(196, 197), std::pair<int, int>(89, 88), std::pair<int, int>(88, 96), std::pair<int, int>(96, 89),
std::pair<int, int>(135, 138), std::pair<int, int>(138, 136), std::pair<int, int>(136, 135), std::pair<int, int>(138, 215), std::pair<int, int>(215, 172), std::pair<int, int>(172, 138),
std::pair<int, int>(218, 115), std::pair<int, int>(115, 219), std::pair<int, int>(219, 218), std::pair<int, int>(41, 42), std::pair<int, int>(42, 81), std::pair<int, int>(81, 41),
std::pair<int, int>(5, 195), std::pair<int, int>(195, 51), std::pair<int, int>(51, 5), std::pair<int, int>(57, 43), std::pair<int, int>(43, 61), std::pair<int, int>(61, 57),
std::pair<int, int>(208, 171), std::pair<int, int>(171, 199), std::pair<int, int>(199, 208), std::pair<int, int>(41, 81), std::pair<int, int>(81, 38), std::pair<int, int>(38, 41),
std::pair<int, int>(224, 53), std::pair<int, int>(53, 225), std::pair<int, int>(225, 224), std::pair<int, int>(24, 144), std::pair<int, int>(144, 110), std::pair<int, int>(110, 24),
std::pair<int, int>(105, 52), std::pair<int, int>(52, 66), std::pair<int, int>(66, 105), std::pair<int, int>(118, 229), std::pair<int, int>(229, 117), std::pair<int, int>(117, 118),
std::pair<int, int>(227, 34), std::pair<int, int>(34, 234), std::pair<int, int>(234, 227), std::pair<int, int>(66, 107), std::pair<int, int>(107, 69), std::pair<int, int>(69, 66),
std::pair<int, int>(10, 109), std::pair<int, int>(109, 151), std::pair<int, int>(151, 10), std::pair<int, int>(219, 48), std::pair<int, int>(48, 235), std::pair<int, int>(235, 219),
std::pair<int, int>(183, 62), std::pair<int, int>(62, 191), std::pair<int, int>(191, 183), std::pair<int, int>(142, 129), std::pair<int, int>(129, 126), std::pair<int, int>(126, 142),
std::pair<int, int>(116, 111), std::pair<int, int>(111, 143), std::pair<int, int>(143, 116), std::pair<int, int>(118, 117), std::pair<int, int>(117, 50), std::pair<int, int>(50, 118),
std::pair<int, int>(223, 222), std::pair<int, int>(222, 52), std::pair<int, int>(52, 223), std::pair<int, int>(94, 19), std::pair<int, int>(19, 141), std::pair<int, int>(141, 94),
std::pair<int, int>(222, 221), std::pair<int, int>(221, 65), std::pair<int, int>(65, 222), std::pair<int, int>(196, 3), std::pair<int, int>(3, 197), std::pair<int, int>(197, 196),
std::pair<int, int>(45, 220), std::pair<int, int>(220, 44), std::pair<int, int>(44, 45), std::pair<int, int>(156, 70), std::pair<int, int>(70, 139), std::pair<int, int>(139, 156),
std::pair<int, int>(188, 122), std::pair<int, int>(122, 245), std::pair<int, int>(245, 188), std::pair<int, int>(139, 71), std::pair<int, int>(71, 162), std::pair<int, int>(162, 139),
std::pair<int, int>(149, 170), std::pair<int, int>(170, 150), std::pair<int, int>(150, 149), std::pair<int, int>(122, 188), std::pair<int, int>(188, 196), std::pair<int, int>(196, 122),
std::pair<int, int>(206, 216), std::pair<int, int>(216, 92), std::pair<int, int>(92, 206), std::pair<int, int>(164, 2), std::pair<int, int>(2, 167), std::pair<int, int>(167, 164),
std::pair<int, int>(242, 141), std::pair<int, int>(141, 241), std::pair<int, int>(241, 242), std::pair<int, int>(0, 164), std::pair<int, int>(164, 37), std::pair<int, int>(37, 0),
std::pair<int, int>(11, 72), std::pair<int, int>(72, 12), std::pair<int, int>(12, 11), std::pair<int, int>(12, 38), std::pair<int, int>(38, 13), std::pair<int, int>(13, 12),
std::pair<int, int>(70, 63), std::pair<int, int>(63, 71), std::pair<int, int>(71, 70), std::pair<int, int>(31, 226), std::pair<int, int>(226, 111), std::pair<int, int>(111, 31),
std::pair<int, int>(36, 101), std::pair<int, int>(101, 205), std::pair<int, int>(205, 36), std::pair<int, int>(203, 206), std::pair<int, int>(206, 165), std::pair<int, int>(165, 203),
std::pair<int, int>(126, 209), std::pair<int, int>(209, 217), std::pair<int, int>(217, 126), std::pair<int, int>(98, 165), std::pair<int, int>(165, 97), std::pair<int, int>(97, 98),
std::pair<int, int>(237, 220), std::pair<int, int>(220, 218), std::pair<int, int>(218, 237), std::pair<int, int>(237, 239), std::pair<int, int>(239, 241), std::pair<int, int>(241, 237),
std::pair<int, int>(210, 214), std::pair<int, int>(214, 169), std::pair<int, int>(169, 210), std::pair<int, int>(140, 171), std::pair<int, int>(171, 32), std::pair<int, int>(32, 140),
std::pair<int, int>(241, 125), std::pair<int, int>(125, 237), std::pair<int, int>(237, 241), std::pair<int, int>(179, 86), std::pair<int, int>(86, 178), std::pair<int, int>(178, 179),
std::pair<int, int>(180, 85), std::pair<int, int>(85, 179), std::pair<int, int>(179, 180), std::pair<int, int>(181, 84), std::pair<int, int>(84, 180), std::pair<int, int>(180, 181),
std::pair<int, int>(182, 83), std::pair<int, int>(83, 181), std::pair<int, int>(181, 182), std::pair<int, int>(194, 201), std::pair<int, int>(201, 182), std::pair<int, int>(182, 194),
std::pair<int, int>(177, 137), std::pair<int, int>(137, 132), std::pair<int, int>(132, 177), std::pair<int, int>(184, 76), std::pair<int, int>(76, 183), std::pair<int, int>(183, 184),
std::pair<int, int>(185, 61), std::pair<int, int>(61, 184), std::pair<int, int>(184, 185), std::pair<int, int>(186, 57), std::pair<int, int>(57, 185), std::pair<int, int>(185, 186),
std::pair<int, int>(216, 212), std::pair<int, int>(212, 186), std::pair<int, int>(186, 216), std::pair<int, int>(192, 214), std::pair<int, int>(214, 187), std::pair<int, int>(187, 192),
std::pair<int, int>(139, 34), std::pair<int, int>(34, 156), std::pair<int, int>(156, 139), std::pair<int, int>(218, 79), std::pair<int, int>(79, 237), std::pair<int, int>(237, 218),
std::pair<int, int>(147, 123), std::pair<int, int>(123, 177), std::pair<int, int>(177, 147), std::pair<int, int>(45, 44), std::pair<int, int>(44, 4), std::pair<int, int>(4, 45),
std::pair<int, int>(208, 201), std::pair<int, int>(201, 32), std::pair<int, int>(32, 208), std::pair<int, int>(98, 64), std::pair<int, int>(64, 129), std::pair<int, int>(129, 98),
std::pair<int, int>(192, 213), std::pair<int, int>(213, 138), std::pair<int, int>(138, 192), std::pair<int, int>(235, 59), std::pair<int, int>(59, 219), std::pair<int, int>(219, 235),
std::pair<int, int>(141, 242), std::pair<int, int>(242, 97), std::pair<int, int>(97, 141), std::pair<int, int>(97, 2), std::pair<int, int>(2, 141), std::pair<int, int>(141, 97),
std::pair<int, int>(240, 75), std::pair<int, int>(75, 235), std::pair<int, int>(235, 240), std::pair<int, int>(229, 24), std::pair<int, int>(24, 228), std::pair<int, int>(228, 229),
std::pair<int, int>(31, 25), std::pair<int, int>(25, 226), std::pair<int, int>(226, 31), std::pair<int, int>(230, 23), std::pair<int, int>(23, 229), std::pair<int, int>(229, 230),
std::pair<int, int>(231, 22), std::pair<int, int>(22, 230), std::pair<int, int>(230, 231), std::pair<int, int>(232, 26), std::pair<int, int>(26, 231), std::pair<int, int>(231, 232),
std::pair<int, int>(233, 112), std::pair<int, int>(112, 232), std::pair<int, int>(232, 233), std::pair<int, int>(244, 189), std::pair<int, int>(189, 243), std::pair<int, int>(243, 244),
std::pair<int, int>(189, 221), std::pair<int, int>(221, 190), std::pair<int, int>(190, 189), std::pair<int, int>(222, 28), std::pair<int, int>(28, 221), std::pair<int, int>(221, 222),
std::pair<int, int>(223, 27), std::pair<int, int>(27, 222), std::pair<int, int>(222, 223), std::pair<int, int>(224, 29), std::pair<int, int>(29, 223), std::pair<int, int>(223, 224),
std::pair<int, int>(225, 30), std::pair<int, int>(30, 224), std::pair<int, int>(224, 225), std::pair<int, int>(113, 247), std::pair<int, int>(247, 225), std::pair<int, int>(225, 113),
std::pair<int, int>(99, 60), std::pair<int, int>(60, 240), std::pair<int, int>(240, 99), std::pair<int, int>(213, 147), std::pair<int, int>(147, 215), std::pair<int, int>(215, 213),
std::pair<int, int>(60, 20), std::pair<int, int>(20, 166), std::pair<int, int>(166, 60), std::pair<int, int>(192, 187), std::pair<int, int>(187, 213), std::pair<int, int>(213, 192),
std::pair<int, int>(243, 112), std::pair<int, int>(112, 244), std::pair<int, int>(244, 243), std::pair<int, int>(244, 233), std::pair<int, int>(233, 245), std::pair<int, int>(245, 244),
std::pair<int, int>(245, 128), std::pair<int, int>(128, 188), std::pair<int, int>(188, 245), std::pair<int, int>(188, 114), std::pair<int, int>(114, 174), std::pair<int, int>(174, 188),
std::pair<int, int>(134, 131), std::pair<int, int>(131, 220), std::pair<int, int>(220, 134), std::pair<int, int>(174, 217), std::pair<int, int>(217, 236), std::pair<int, int>(236, 174),
std::pair<int, int>(236, 198), std::pair<int, int>(198, 134), std::pair<int, int>(134, 236), std::pair<int, int>(215, 177), std::pair<int, int>(177, 58), std::pair<int, int>(58, 215),
std::pair<int, int>(156, 143), std::pair<int, int>(143, 124), std::pair<int, int>(124, 156), std::pair<int, int>(25, 110), std::pair<int, int>(110, 7), std::pair<int, int>(7, 25),
std::pair<int, int>(31, 228), std::pair<int, int>(228, 25), std::pair<int, int>(25, 31), std::pair<int, int>(264, 356), std::pair<int, int>(356, 368), std::pair<int, int>(368, 264),
std::pair<int, int>(0, 11), std::pair<int, int>(11, 267), std::pair<int, int>(267, 0), std::pair<int, int>(451, 452), std::pair<int, int>(452, 349), std::pair<int, int>(349, 451),
std::pair<int, int>(267, 302), std::pair<int, int>(302, 269), std::pair<int, int>(269, 267), std::pair<int, int>(350, 357), std::pair<int, int>(357, 277), std::pair<int, int>(277, 350),
std::pair<int, int>(350, 452), std::pair<int, int>(452, 357), std::pair<int, int>(357, 350), std::pair<int, int>(299, 333), std::pair<int, int>(333, 297), std::pair<int, int>(297, 299),
std::pair<int, int>(396, 175), std::pair<int, int>(175, 377), std::pair<int, int>(377, 396), std::pair<int, int>(280, 347), std::pair<int, int>(347, 330), std::pair<int, int>(330, 280),
std::pair<int, int>(269, 303), std::pair<int, int>(303, 270), std::pair<int, int>(270, 269), std::pair<int, int>(151, 9), std::pair<int, int>(9, 337), std::pair<int, int>(337, 151),
std::pair<int, int>(344, 278), std::pair<int, int>(278, 360), std::pair<int, int>(360, 344), std::pair<int, int>(424, 418), std::pair<int, int>(418, 431), std::pair<int, int>(431, 424),
std::pair<int, int>(270, 304), std::pair<int, int>(304, 409), std::pair<int, int>(409, 270), std::pair<int, int>(272, 310), std::pair<int, int>(310, 407), std::pair<int, int>(407, 272),
std::pair<int, int>(322, 270), std::pair<int, int>(270, 410), std::pair<int, int>(410, 322), std::pair<int, int>(449, 450), std::pair<int, int>(450, 347), std::pair<int, int>(347, 449),
std::pair<int, int>(432, 422), std::pair<int, int>(422, 434), std::pair<int, int>(434, 432), std::pair<int, int>(18, 313), std::pair<int, int>(313, 17), std::pair<int, int>(17, 18),
std::pair<int, int>(291, 306), std::pair<int, int>(306, 375), std::pair<int, int>(375, 291), std::pair<int, int>(259, 387), std::pair<int, int>(387, 260), std::pair<int, int>(260, 259),
std::pair<int, int>(424, 335), std::pair<int, int>(335, 418), std::pair<int, int>(418, 424), std::pair<int, int>(434, 364), std::pair<int, int>(364, 416), std::pair<int, int>(416, 434),
std::pair<int, int>(391, 423), std::pair<int, int>(423, 327), std::pair<int, int>(327, 391), std::pair<int, int>(301, 251), std::pair<int, int>(251, 298), std::pair<int, int>(298, 301),
std::pair<int, int>(275, 281), std::pair<int, int>(281, 4), std::pair<int, int>(4, 275), std::pair<int, int>(254, 373), std::pair<int, int>(373, 253), std::pair<int, int>(253, 254),
std::pair<int, int>(375, 307), std::pair<int, int>(307, 321), std::pair<int, int>(321, 375), std::pair<int, int>(280, 425), std::pair<int, int>(425, 411), std::pair<int, int>(411, 280),
std::pair<int, int>(200, 421), std::pair<int, int>(421, 18), std::pair<int, int>(18, 200), std::pair<int, int>(335, 321), std::pair<int, int>(321, 406), std::pair<int, int>(406, 335),
std::pair<int, int>(321, 320), std::pair<int, int>(320, 405), std::pair<int, int>(405, 321), std::pair<int, int>(314, 315), std::pair<int, int>(315, 17), std::pair<int, int>(17, 314),
std::pair<int, int>(423, 426), std::pair<int, int>(426, 266), std::pair<int, int>(266, 423), std::pair<int, int>(396, 377), std::pair<int, int>(377, 369), std::pair<int, int>(369, 396),
std::pair<int, int>(270, 322), std::pair<int, int>(322, 269), std::pair<int, int>(269, 270), std::pair<int, int>(413, 417), std::pair<int, int>(417, 464), std::pair<int, int>(464, 413),
std::pair<int, int>(385, 386), std::pair<int, int>(386, 258), std::pair<int, int>(258, 385), std::pair<int, int>(248, 456), std::pair<int, int>(456, 419), std::pair<int, int>(419, 248),
std::pair<int, int>(298, 284), std::pair<int, int>(284, 333), std::pair<int, int>(333, 298), std::pair<int, int>(168, 417), std::pair<int, int>(417, 8), std::pair<int, int>(8, 168),
std::pair<int, int>(448, 346), std::pair<int, int>(346, 261), std::pair<int, int>(261, 448), std::pair<int, int>(417, 413), std::pair<int, int>(413, 285), std::pair<int, int>(285, 417),
std::pair<int, int>(326, 327), std::pair<int, int>(327, 328), std::pair<int, int>(328, 326), std::pair<int, int>(277, 355), std::pair<int, int>(355, 329), std::pair<int, int>(329, 277),
std::pair<int, int>(309, 392), std::pair<int, int>(392, 438), std::pair<int, int>(438, 309), std::pair<int, int>(381, 382), std::pair<int, int>(382, 256), std::pair<int, int>(256, 381),
std::pair<int, int>(279, 429), std::pair<int, int>(429, 360), std::pair<int, int>(360, 279), std::pair<int, int>(365, 364), std::pair<int, int>(364, 379), std::pair<int, int>(379, 365),
std::pair<int, int>(355, 277), std::pair<int, int>(277, 437), std::pair<int, int>(437, 355), std::pair<int, int>(282, 443), std::pair<int, int>(443, 283), std::pair<int, int>(283, 282),
std::pair<int, int>(281, 275), std::pair<int, int>(275, 363), std::pair<int, int>(363, 281), std::pair<int, int>(395, 431), std::pair<int, int>(431, 369), std::pair<int, int>(369, 395),
std::pair<int, int>(299, 297), std::pair<int, int>(297, 337), std::pair<int, int>(337, 299), std::pair<int, int>(335, 273), std::pair<int, int>(273, 321), std::pair<int, int>(321, 335),
std::pair<int, int>(348, 450), std::pair<int, int>(450, 349), std::pair<int, int>(349, 348), std::pair<int, int>(359, 446), std::pair<int, int>(446, 467), std::pair<int, int>(467, 359),
std::pair<int, int>(283, 293), std::pair<int, int>(293, 282), std::pair<int, int>(282, 283), std::pair<int, int>(250, 458), std::pair<int, int>(458, 462), std::pair<int, int>(462, 250),
std::pair<int, int>(300, 276), std::pair<int, int>(276, 383), std::pair<int, int>(383, 300), std::pair<int, int>(292, 308), std::pair<int, int>(308, 325), std::pair<int, int>(325, 292),
std::pair<int, int>(283, 276), std::pair<int, int>(276, 293), std::pair<int, int>(293, 283), std::pair<int, int>(264, 372), std::pair<int, int>(372, 447), std::pair<int, int>(447, 264),
std::pair<int, int>(346, 352), std::pair<int, int>(352, 340), std::pair<int, int>(340, 346), std::pair<int, int>(354, 274), std::pair<int, int>(274, 19), std::pair<int, int>(19, 354),
std::pair<int, int>(363, 456), std::pair<int, int>(456, 281), std::pair<int, int>(281, 363), std::pair<int, int>(426, 436), std::pair<int, int>(436, 425), std::pair<int, int>(425, 426),
std::pair<int, int>(380, 381), std::pair<int, int>(381, 252), std::pair<int, int>(252, 380), std::pair<int, int>(267, 269), std::pair<int, int>(269, 393), std::pair<int, int>(393, 267),
std::pair<int, int>(421, 200), std::pair<int, int>(200, 428), std::pair<int, int>(428, 421), std::pair<int, int>(371, 266), std::pair<int, int>(266, 329), std::pair<int, int>(329, 371),
std::pair<int, int>(432, 287), std::pair<int, int>(287, 422), std::pair<int, int>(422, 432), std::pair<int, int>(290, 250), std::pair<int, int>(250, 328), std::pair<int, int>(328, 290),
std::pair<int, int>(385, 258), std::pair<int, int>(258, 384), std::pair<int, int>(384, 385), std::pair<int, int>(446, 265), std::pair<int, int>(265, 342), std::pair<int, int>(342, 446),
std::pair<int, int>(386, 387), std::pair<int, int>(387, 257), std::pair<int, int>(257, 386), std::pair<int, int>(422, 424), std::pair<int, int>(424, 430), std::pair<int, int>(430, 422),
std::pair<int, int>(445, 342), std::pair<int, int>(342, 276), std::pair<int, int>(276, 445), std::pair<int, int>(422, 273), std::pair<int, int>(273, 424), std::pair<int, int>(424, 422),
std::pair<int, int>(306, 292), std::pair<int, int>(292, 307), std::pair<int, int>(307, 306), std::pair<int, int>(352, 366), std::pair<int, int>(366, 345), std::pair<int, int>(345, 352),
std::pair<int, int>(268, 271), std::pair<int, int>(271, 302), std::pair<int, int>(302, 268), std::pair<int, int>(358, 423), std::pair<int, int>(423, 371), std::pair<int, int>(371, 358),
std::pair<int, int>(327, 294), std::pair<int, int>(294, 460), std::pair<int, int>(460, 327), std::pair<int, int>(331, 279), std::pair<int, int>(279, 294), std::pair<int, int>(294, 331),
std::pair<int, int>(303, 271), std::pair<int, int>(271, 304), std::pair<int, int>(304, 303), std::pair<int, int>(436, 432), std::pair<int, int>(432, 427), std::pair<int, int>(427, 436),
std::pair<int, int>(304, 272), std::pair<int, int>(272, 408), std::pair<int, int>(408, 304), std::pair<int, int>(395, 394), std::pair<int, int>(394, 431), std::pair<int, int>(431, 395),
std::pair<int, int>(378, 395), std::pair<int, int>(395, 400), std::pair<int, int>(400, 378), std::pair<int, int>(296, 334), std::pair<int, int>(334, 299), std::pair<int, int>(299, 296),
std::pair<int, int>(6, 351), std::pair<int, int>(351, 168), std::pair<int, int>(168, 6), std::pair<int, int>(376, 352), std::pair<int, int>(352, 411), std::pair<int, int>(411, 376),
std::pair<int, int>(307, 325), std::pair<int, int>(325, 320), std::pair<int, int>(320, 307), std::pair<int, int>(285, 295), std::pair<int, int>(295, 336), std::pair<int, int>(336, 285),
std::pair<int, int>(320, 319), std::pair<int, int>(319, 404), std::pair<int, int>(404, 320), std::pair<int, int>(329, 330), std::pair<int, int>(330, 349), std::pair<int, int>(349, 329),
std::pair<int, int>(334, 293), std::pair<int, int>(293, 333), std::pair<int, int>(333, 334), std::pair<int, int>(366, 323), std::pair<int, int>(323, 447), std::pair<int, int>(447, 366),
std::pair<int, int>(316, 15), std::pair<int, int>(15, 315), std::pair<int, int>(315, 316), std::pair<int, int>(331, 358), std::pair<int, int>(358, 279), std::pair<int, int>(279, 331),
std::pair<int, int>(317, 14), std::pair<int, int>(14, 316), std::pair<int, int>(316, 317), std::pair<int, int>(8, 285), std::pair<int, int>(285, 9), std::pair<int, int>(9, 8),
std::pair<int, int>(277, 329), std::pair<int, int>(329, 350), std::pair<int, int>(350, 277), std::pair<int, int>(253, 374), std::pair<int, int>(374, 252), std::pair<int, int>(252, 253),
std::pair<int, int>(319, 318), std::pair<int, int>(318, 403), std::pair<int, int>(403, 319), std::pair<int, int>(351, 6), std::pair<int, int>(6, 419), std::pair<int, int>(419, 351),
std::pair<int, int>(324, 318), std::pair<int, int>(318, 325), std::pair<int, int>(325, 324), std::pair<int, int>(397, 367), std::pair<int, int>(367, 365), std::pair<int, int>(365, 397),
std::pair<int, int>(288, 435), std::pair<int, int>(435, 397), std::pair<int, int>(397, 288), std::pair<int, int>(278, 344), std::pair<int, int>(344, 439), std::pair<int, int>(439, 278),
std::pair<int, int>(310, 272), std::pair<int, int>(272, 311), std::pair<int, int>(311, 310), std::pair<int, int>(248, 195), std::pair<int, int>(195, 281), std::pair<int, int>(281, 248),
std::pair<int, int>(375, 273), std::pair<int, int>(273, 291), std::pair<int, int>(291, 375), std::pair<int, int>(175, 396), std::pair<int, int>(396, 199), std::pair<int, int>(199, 175),
std::pair<int, int>(312, 311), std::pair<int, int>(311, 268), std::pair<int, int>(268, 312), std::pair<int, int>(276, 283), std::pair<int, int>(283, 445), std::pair<int, int>(445, 276),
std::pair<int, int>(390, 373), std::pair<int, int>(373, 339), std::pair<int, int>(339, 390), std::pair<int, int>(295, 282), std::pair<int, int>(282, 296), std::pair<int, int>(296, 295),
std::pair<int, int>(448, 449), std::pair<int, int>(449, 346), std::pair<int, int>(346, 448), std::pair<int, int>(356, 264), std::pair<int, int>(264, 454), std::pair<int, int>(454, 356),
std::pair<int, int>(337, 336), std::pair<int, int>(336, 299), std::pair<int, int>(299, 337), std::pair<int, int>(337, 338), std::pair<int, int>(338, 151), std::pair<int, int>(151, 337),
std::pair<int, int>(294, 278), std::pair<int, int>(278, 455), std::pair<int, int>(455, 294), std::pair<int, int>(308, 292), std::pair<int, int>(292, 415), std::pair<int, int>(415, 308),
std::pair<int, int>(429, 358), std::pair<int, int>(358, 355), std::pair<int, int>(355, 429), std::pair<int, int>(265, 340), std::pair<int, int>(340, 372), std::pair<int, int>(372, 265),
std::pair<int, int>(352, 346), std::pair<int, int>(346, 280), std::pair<int, int>(280, 352), std::pair<int, int>(295, 442), std::pair<int, int>(442, 282), std::pair<int, int>(282, 295),
std::pair<int, int>(354, 19), std::pair<int, int>(19, 370), std::pair<int, int>(370, 354), std::pair<int, int>(285, 441), std::pair<int, int>(441, 295), std::pair<int, int>(295, 285),
std::pair<int, int>(195, 248), std::pair<int, int>(248, 197), std::pair<int, int>(197, 195), std::pair<int, int>(457, 440), std::pair<int, int>(440, 274), std::pair<int, int>(274, 457),
std::pair<int, int>(301, 300), std::pair<int, int>(300, 368), std::pair<int, int>(368, 301), std::pair<int, int>(417, 351), std::pair<int, int>(351, 465), std::pair<int, int>(465, 417),
std::pair<int, int>(251, 301), std::pair<int, int>(301, 389), std::pair<int, int>(389, 251), std::pair<int, int>(394, 395), std::pair<int, int>(395, 379), std::pair<int, int>(379, 394),
std::pair<int, int>(399, 412), std::pair<int, int>(412, 419), std::pair<int, int>(419, 399), std::pair<int, int>(410, 436), std::pair<int, int>(436, 322), std::pair<int, int>(322, 410),
std::pair<int, int>(326, 2), std::pair<int, int>(2, 393), std::pair<int, int>(393, 326), std::pair<int, int>(354, 370), std::pair<int, int>(370, 461), std::pair<int, int>(461, 354),
std::pair<int, int>(393, 164), std::pair<int, int>(164, 267), std::pair<int, int>(267, 393), std::pair<int, int>(268, 302), std::pair<int, int>(302, 12), std::pair<int, int>(12, 268),
std::pair<int, int>(312, 268), std::pair<int, int>(268, 13), std::pair<int, int>(13, 312), std::pair<int, int>(298, 293), std::pair<int, int>(293, 301), std::pair<int, int>(301, 298),
std::pair<int, int>(265, 446), std::pair<int, int>(446, 340), std::pair<int, int>(340, 265), std::pair<int, int>(280, 330), std::pair<int, int>(330, 425), std::pair<int, int>(425, 280),
std::pair<int, int>(322, 426), std::pair<int, int>(426, 391), std::pair<int, int>(391, 322), std::pair<int, int>(420, 429), std::pair<int, int>(429, 437), std::pair<int, int>(437, 420),
std::pair<int, int>(393, 391), std::pair<int, int>(391, 326), std::pair<int, int>(326, 393), std::pair<int, int>(344, 440), std::pair<int, int>(440, 438), std::pair<int, int>(438, 344),
std::pair<int, int>(458, 459), std::pair<int, int>(459, 461), std::pair<int, int>(461, 458), std::pair<int, int>(364, 434), std::pair<int, int>(434, 394), std::pair<int, int>(394, 364),
std::pair<int, int>(428, 396), std::pair<int, int>(396, 262), std::pair<int, int>(262, 428), std::pair<int, int>(274, 354), std::pair<int, int>(354, 457), std::pair<int, int>(457, 274),
std::pair<int, int>(317, 316), std::pair<int, int>(316, 402), std::pair<int, int>(402, 317), std::pair<int, int>(316, 315), std::pair<int, int>(315, 403), std::pair<int, int>(403, 316),
std::pair<int, int>(315, 314), std::pair<int, int>(314, 404), std::pair<int, int>(404, 315), std::pair<int, int>(314, 313), std::pair<int, int>(313, 405), std::pair<int, int>(405, 314),
std::pair<int, int>(313, 421), std::pair<int, int>(421, 406), std::pair<int, int>(406, 313), std::pair<int, int>(323, 366), std::pair<int, int>(366, 361), std::pair<int, int>(361, 323),
std::pair<int, int>(292, 306), std::pair<int, int>(306, 407), std::pair<int, int>(407, 292), std::pair<int, int>(306, 291), std::pair<int, int>(291, 408), std::pair<int, int>(408, 306),
std::pair<int, int>(291, 287), std::pair<int, int>(287, 409), std::pair<int, int>(409, 291), std::pair<int, int>(287, 432), std::pair<int, int>(432, 410), std::pair<int, int>(410, 287),
std::pair<int, int>(427, 434), std::pair<int, int>(434, 411), std::pair<int, int>(411, 427), std::pair<int, int>(372, 264), std::pair<int, int>(264, 383), std::pair<int, int>(383, 372),
std::pair<int, int>(459, 309), std::pair<int, int>(309, 457), std::pair<int, int>(457, 459), std::pair<int, int>(366, 352), std::pair<int, int>(352, 401), std::pair<int, int>(401, 366),
std::pair<int, int>(1, 274), std::pair<int, int>(274, 4), std::pair<int, int>(4, 1), std::pair<int, int>(418, 421), std::pair<int, int>(421, 262), std::pair<int, int>(262, 418),
std::pair<int, int>(331, 294), std::pair<int, int>(294, 358), std::pair<int, int>(358, 331), std::pair<int, int>(435, 433), std::pair<int, int>(433, 367), std::pair<int, int>(367, 435),
std::pair<int, int>(392, 289), std::pair<int, int>(289, 439), std::pair<int, int>(439, 392), std::pair<int, int>(328, 462), std::pair<int, int>(462, 326), std::pair<int, int>(326, 328),
std::pair<int, int>(94, 2), std::pair<int, int>(2, 370), std::pair<int, int>(370, 94), std::pair<int, int>(289, 305), std::pair<int, int>(305, 455), std::pair<int, int>(455, 289),
std::pair<int, int>(339, 254), std::pair<int, int>(254, 448), std::pair<int, int>(448, 339), std::pair<int, int>(359, 255), std::pair<int, int>(255, 446), std::pair<int, int>(446, 359),
std::pair<int, int>(254, 253), std::pair<int, int>(253, 449), std::pair<int, int>(449, 254), std::pair<int, int>(253, 252), std::pair<int, int>(252, 450), std::pair<int, int>(450, 253),
std::pair<int, int>(252, 256), std::pair<int, int>(256, 451), std::pair<int, int>(451, 252), std::pair<int, int>(256, 341), std::pair<int, int>(341, 452), std::pair<int, int>(452, 256),
std::pair<int, int>(414, 413), std::pair<int, int>(413, 463), std::pair<int, int>(463, 414), std::pair<int, int>(286, 441), std::pair<int, int>(441, 414), std::pair<int, int>(414, 286),
std::pair<int, int>(286, 258), std::pair<int, int>(258, 441), std::pair<int, int>(441, 286), std::pair<int, int>(258, 257), std::pair<int, int>(257, 442), std::pair<int, int>(442, 258),
std::pair<int, int>(257, 259), std::pair<int, int>(259, 443), std::pair<int, int>(443, 257), std::pair<int, int>(259, 260), std::pair<int, int>(260, 444), std::pair<int, int>(444, 259),
std::pair<int, int>(260, 467), std::pair<int, int>(467, 445), std::pair<int, int>(445, 260), std::pair<int, int>(309, 459), std::pair<int, int>(459, 250), std::pair<int, int>(250, 309),
std::pair<int, int>(305, 289), std::pair<int, int>(289, 290), std::pair<int, int>(290, 305), std::pair<int, int>(305, 290), std::pair<int, int>(290, 460), std::pair<int, int>(460, 305),
std::pair<int, int>(401, 376), std::pair<int, int>(376, 435), std::pair<int, int>(435, 401), std::pair<int, int>(309, 250), std::pair<int, int>(250, 392), std::pair<int, int>(392, 309),
std::pair<int, int>(376, 411), std::pair<int, int>(411, 433), std::pair<int, int>(433, 376), std::pair<int, int>(453, 341), std::pair<int, int>(341, 464), std::pair<int, int>(464, 453),
std::pair<int, int>(357, 453), std::pair<int, int>(453, 465), std::pair<int, int>(465, 357), std::pair<int, int>(343, 357), std::pair<int, int>(357, 412), std::pair<int, int>(412, 343),
std::pair<int, int>(437, 343), std::pair<int, int>(343, 399), std::pair<int, int>(399, 437), std::pair<int, int>(344, 360), std::pair<int, int>(360, 440), std::pair<int, int>(440, 344),
std::pair<int, int>(420, 437), std::pair<int, int>(437, 456), std::pair<int, int>(456, 420), std::pair<int, int>(360, 420), std::pair<int, int>(420, 363), std::pair<int, int>(363, 360),
std::pair<int, int>(361, 401), std::pair<int, int>(401, 288), std::pair<int, int>(288, 361), std::pair<int, int>(265, 372), std::pair<int, int>(372, 353), std::pair<int, int>(353, 265),
std::pair<int, int>(390, 339), std::pair<int, int>(339, 249), std::pair<int, int>(249, 390), std::pair<int, int>(339, 448), std::pair<int, int>(448, 255), std::pair<int, int>(255, 339)
};




Mask::Mask(std::string fPath) {
	
	verticesLineSize = 4;

	PyObject* pyVertices = this->run_py(fPath);
	
	int verticesSize;
	GLfloat* maskVertices = this->getVertices_fromPy(pyVertices, verticesSize);
	this->verticesSize = verticesSize;
	this->vertices = maskVertices;

	int indicesSize;
	GLuint* indices = getIndices(TESSELATION, indicesSize);
	this->indicesSize = indicesSize;
	this->indices = indices;

	setFrontFlags();

	setPolygons();

	setupMask();
}

void Mask::setFrontFlags() {
	glm::vec3 viewDir(0.0f, 0.0f, 1.0f);
	for (int i = 0; i < indicesSize / 3; i++) {
		int idx1, idx2, idx3;
		idx1 = indices[3 * i];
		idx2 = indices[3 * i + 1];
		idx3 = indices[3 * i + 2];
		
		if (vertices[verticesLineSize * idx1 + 4] != 1 || vertices[verticesLineSize * idx2 + 4] != 1 || vertices[verticesLineSize * idx3 + 4] != 1) {

			glm::vec3 vector1(verticesVector[idx1] - verticesVector[idx2]);
			glm::vec3 vector2(verticesVector[idx2] - verticesVector[idx3]);

			glm::vec3 normal = glm::cross(vector1, vector2);

			if (glm::dot(glm::normalize(normal), glm::normalize(viewDir)) > 0) {
				vertices[verticesLineSize * idx1 + 3] = 1;
				vertices[verticesLineSize * idx2 + 3] = 1;
				vertices[verticesLineSize * idx3 + 3] = 1;
			}
		}
	}

}

void Mask::setPolygons() {
	for (int i = 0; i < indicesSize / 3; i++) {
		PolygonS polygon;
		glm::vec3 vertex1 = {
			vertices[verticesLineSize * indices[3*i]],
			vertices[verticesLineSize * indices[3*i] + 1],
			vertices[verticesLineSize * indices[3*i] + 2]
		};
		glm::vec3 vertex2 = {
			vertices[verticesLineSize * indices[3*i + 1]],
			vertices[verticesLineSize * indices[3*i + 1] + 1],
			vertices[verticesLineSize * indices[3*i + 1] + 2]
		};
		glm::vec3 vertex3 = {
			vertices[verticesLineSize * indices[3*i + 2]],
			vertices[verticesLineSize * indices[3*i + 2] + 1],
			vertices[verticesLineSize * indices[3*i + 2] + 2]
		};
		
		polygon.vertex1 = vertex1;
		polygon.vertex2 = vertex2;
		polygon.vertex3 = vertex3;

		polygons.push_back(polygon);
	}

	for (int i = 0; i < polygons.size() - 1; i++) {
		for (int j = i + 1; j < polygons.size(); j++) {
			int cntr = 0;
			if (polygons[i].vertex1 == polygons[j].vertex1) {
				cntr++;
			}
			if (polygons[i].vertex1 == polygons[j].vertex2) {
				cntr++;
			}
			if (polygons[i].vertex1 == polygons[j].vertex3) {
				cntr++;
			}
			if (polygons[i].vertex2 == polygons[j].vertex1) {
				cntr++;
			}
			if (polygons[i].vertex2 == polygons[j].vertex2) {
				cntr++;
			}
			if (polygons[i].vertex2 == polygons[j].vertex3) {
				cntr++;
			}
			if (polygons[i].vertex3 == polygons[j].vertex1) {
				cntr++;
			}
			if (polygons[i].vertex3 == polygons[j].vertex2) {
				cntr++;
			}
			if (polygons[i].vertex3 == polygons[j].vertex3) {
				cntr++;
			}


			if (cntr >= 2) {
				polygons[i].neighbours.push_back(&polygons[j]);
				polygons[j].neighbours.push_back(&polygons[i]);
			}
		}
	}
}

void Mask::setupMask() {

	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &VBO);
	glGenBuffers(1, &EBO);


	glBindVertexArray(VAO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);

	glBufferData(GL_ARRAY_BUFFER, this->verticesSize * sizeof(GL_FLOAT), this->vertices, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, verticesLineSize * sizeof(GL_FLOAT), (GLvoid*)0);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(1, 1, GL_FLOAT, GL_FALSE, verticesLineSize * sizeof(GL_FLOAT), (GLvoid*)(3 * sizeof(GL_FLOAT)));
	glEnableVertexAttribArray(1);


	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, this->indicesSize * sizeof(GL_UNSIGNED_INT), this->indices, GL_STATIC_DRAW);

	glBindVertexArray(0);


}

glm::mat4 Mask::getModelMatrix(glm::mat4 modelModel) {
	glm::mat4 model = glm::mat4();
	glm::vec3 LeftEye, RightEye, Nose, modelLeftEye, modelRightEye, modelNose;

	LeftEye = glm::vec3(this->vertices[verticesLineSize * 33], this->vertices[verticesLineSize * 33 + 1], this->vertices[verticesLineSize * 33 + 2]);
	RightEye = glm::vec3(this->vertices[verticesLineSize * 263], this->vertices[verticesLineSize * 263 + 1], this->vertices[verticesLineSize * 263 + 2]);
	Nose = glm::vec3(this->vertices[verticesLineSize * 175], this->vertices[verticesLineSize * 175 + 1], this->vertices[verticesLineSize * 175 + 2]); //Íàñòîÿùèé íîñ ïî àäğåñó 4

	modelLeftEye = glm::vec3(modelModel * glm::vec4(-8.47118, 1.42893, 10.5191, 1.0));
	modelRightEye = glm::vec3(modelModel * glm::vec4(8.47118, 1.42893, 10.5191, 1.0));
	modelNose = glm::vec3(modelModel * glm::vec4(0, -16.8611, 13.7732, 1.0));// Íàñòîÿùèé íîñ 0, -3.9108, 17.6658



	glm::vec3 eyesRotateAxis, noseRotateAxis;
	glm::vec3 maskEye_eyeVector = RightEye - LeftEye; //Âåêòîğ ìåæäó óãîëêàìè ãëàç
	glm::vec3 maskEyes_noseVector = (RightEye + LeftEye) / 2.0f - Nose; //Âåêòîğ ìåæäó ñåğåäèíîé ãëàç è êîí÷èêîì íîñà

	glm::vec3 modelEye_eyeVector = modelRightEye - modelLeftEye;
	glm::vec3 modelEyes_noseVector = (modelRightEye + modelLeftEye) / 2.0f - modelNose;

	float eyesRotateAngle, noseRotateAngle;
	//Óãîë äëÿ âûğàâíèâàíèÿ ëèíèè ãëàç
	eyesRotateAngle = glm::acos(glm::dot(glm::normalize(maskEye_eyeVector), glm::normalize(modelEye_eyeVector)));
	//Îñü äëÿ ïîâîğîòà, ÷òîáû âûğîâíÿòü ëèíèş ãëàç
	eyesRotateAxis = glm::cross(maskEye_eyeVector, modelEye_eyeVector);

	//Ìàòğèöà ïîâîğîòà äëÿ âûğàâíèâàíèÿ ëèíèè ãëàç
	glm::mat4 maskEye_eyeRotateMatrix = glm::rotate(glm::mat4(), glm::degrees(eyesRotateAngle), eyesRotateAxis);
	//Ìàòğèöà ìàñøòàáèğîâàíèÿ äëÿ âûğàâíèâàíèÿ ëèíèè ãëàç
	glm::mat4 maskEye_eyeScaleMatrix = glm::scale(glm::mat4(), glm::vec3(glm::length(modelEye_eyeVector) / glm::length(maskEye_eyeVector)));

	//Âûğîâíÿåì ëèíèş ãëàçà-íîñ äëÿ îñòàâøåãîñÿ ìàñøòàáèğîâàíèÿ
	//maskEyes_noseVector = glm::vec3(glm::translate(model, glm::vec3(-1 * maskVertices[33 * 3], -1 * maskVertices[33 * 3 + 1], -1 * maskVertices[33 * 3 + 2])) * glm::vec4(maskEyes_noseVector, 1.0f));
	maskEyes_noseVector = glm::vec3(maskEye_eyeRotateMatrix * glm::vec4(maskEyes_noseVector, 1.0f));
	maskEyes_noseVector = glm::vec3(maskEye_eyeScaleMatrix * glm::vec4(maskEyes_noseVector, 1.0f));

	noseRotateAngle = glm::acos(glm::dot(glm::normalize(maskEyes_noseVector), glm::normalize(modelEyes_noseVector)));
	noseRotateAxis = glm::cross(maskEyes_noseVector, modelEyes_noseVector);
	glm::vec3 noseScaleVec(modelEyes_noseVector.x / maskEyes_noseVector.x, modelEyes_noseVector.y / maskEyes_noseVector.y, modelEyes_noseVector.z / maskEyes_noseVector.z);

	model = glm::mat4();
	model = glm::translate(model, glm::vec3(translationX, 0.0f, 0.0f));
	model = glm::scale(model, glm::vec3(1.0f));

	//model = glm::rotate(model, currentTime * /*7*/0, glm::vec3(0.0f, 1.0f, 0.0f));

	model = glm::translate(model, modelLeftEye);
	float noseScale = glm::length(modelEyes_noseVector) / glm::length(maskEyes_noseVector);
	model = glm::scale(model, glm::vec3(1.0f, noseScale, noseScale));
	model = glm::rotate(model, glm::degrees(noseRotateAngle), glm::vec3(noseRotateAxis.x, 0.0f, 0.0f));
	model = glm::scale(model, glm::vec3(glm::length(modelEye_eyeVector) / glm::length(maskEye_eyeVector)));
	model = glm::rotate(model, glm::degrees(eyesRotateAngle), eyesRotateAxis);
	model = glm::translate(model, glm::vec3(-1 * this->vertices[33 * verticesLineSize], -1 * this->vertices[33 * verticesLineSize + 1], -1 * this->vertices[33 * verticesLineSize + 2]));

	return model;
}

void Mask::Draw(Shader shader) {
	
	shader.Use();

	glBindVertexArray(this->VAO);
	glDrawElements(GL_TRIANGLES, this->indicesSize, GL_UNSIGNED_INT, 0);
	glBindVertexArray(0);

}

PyObject* Mask::run_py(std::string fPath) {


	PyObject* pName, * pModule, * pFunc;
	PyObject* pArgs, * pValue, * sys, * sys_path, * folder_path;

	PyObject* result = NULL;
	int argc = 1;//êîë-âî àğãóìåíòîâ â ôóíêöèè


	Py_Initialize();
	sys = PyImport_ImportModule("sys");
	sys_path = PyObject_GetAttrString(sys, "path");
	folder_path = PyUnicode_FromString((const char*)"py_modules");
	PyList_Append(sys_path, folder_path);
	pName = PyUnicode_FromString("pyfile");

	/* Îøèáêà ïğîâåğêè pName ïğîïóùåíà */

	pModule = PyImport_Import(pName);
	Py_DECREF(pName);

	if (pModule != NULL) {
		pFunc = PyObject_GetAttrString(pModule, "get_face_landmarks");
		/* pFunc - ıòî íîâàÿ ññûëêà */

		if (pFunc && PyCallable_Check(pFunc)) {
			pArgs = PyTuple_New(argc);

			pValue = PyUnicode_FromString(fPath.c_str());
			if (!pValue) {
				Py_DECREF(pArgs);
				Py_DECREF(pModule);
				fprintf(stderr, "Îøèáêà â ïğåîáğàçîâàíèè àğãóìåíòà\n");
				return 0;
			}
			/* ññûëêà pValue çäåñü êğàä¸òñÿ:  */
			PyTuple_SetItem(pArgs, 0, pValue);

			result = PyObject_CallObject(pFunc, pArgs);


			Py_DECREF(pArgs);

		}
		else {
			if (PyErr_Occurred())
				PyErr_Print();
			fprintf(stderr, "Íå íàéäåíà ôóíêöèÿ \"%s\"\n", "get_face_landmarks");
		}
		Py_XDECREF(pFunc);
		Py_DECREF(pModule);
	}
	else {
		PyErr_Print();
		fprintf(stderr, "Íå çàãğóæåí ôàéë \"%s\"\n", "pyfile");
		return 0;
	}

	if (!result) {
		fprintf(stderr, "ÎØÈÁÊÀ! Python ôóíêöèÿ íå âûïîëíåíà");
	}

	return result;

}

GLfloat* Mask::getVertices_fromPy(PyObject* pyVertices, int& resultSize) {
	resultSize = PyList_Size(pyVertices) * verticesLineSize;
	int size = PyList_Size(pyVertices);
	GLfloat* result = new GLfloat[size * verticesLineSize];

	for (int i = 0; i < size; i++) {
		PyObject* vertexPy = PyList_GetItem(pyVertices, i);

		glm::vec3 vertex = {
			float(PyFloat_AsDouble(PyList_GetItem(vertexPy, 0))),
			float(PyFloat_AsDouble(PyList_GetItem(vertexPy, 2))),//Ìåíÿåì y è z ìåñòàìè, òê èçîáğàæåíèå çàêîäèğîâàíî èíà÷å
			float(- PyFloat_AsDouble(PyList_GetItem(vertexPy, 1))),
		};

		result[verticesLineSize * i] = vertex[0];
		result[verticesLineSize * i + 1] = vertex[1];
		result[verticesLineSize * i + 2] = vertex[2];
		result[verticesLineSize * i + 3] = 0;//Ïîêàçàòåëü îòâåğíóòîñòè ïîëèãîíà (0- åñëè îòâåğíóò, 1- åñëè ïîâåğíóò)

		this->verticesVector.push_back(vertex);
	}
	std::cout << "Òî÷êè Ñ++" << "\n" << result[0] << "\t" << result[1] << "\t" << result[2] << "\t" << result[3] << "\n" << result[4] << "\t" << result[5] << "\t" << result[6] << "\t" << result[7];
	return result;
}

GLuint* Mask::getIndices(std::vector<std::pair<int, int>> tess, int& size) {
	size = tess.size();
	GLuint* indices = new GLuint[size];
	for (int i = 0; i < size; i++) {
		indices[i] = tess[i].first;
	}
	return indices;
}

//std::vector<std::vector<int>> get_indices(std::vector<std::pair<int, int>> tess) 

// {
//	std::vector<std::vector<int>> indices;
//	int c = 0;
//	for (int i = 0; i < tess.size() - 1; i++) {
//		
//		for (int j = i + 1; j < tess.size(); j++) {
//			if (tess[i].first == tess[j].second && tess[j].first == tess[i].second) {
//				tess.erase(tess.begin() + j);
//				/*tess.erase(tess.begin() + i);
//				i--;*/
//				c++;
//				break;
//			}
//		}
//	}
//	//std::cout << "\n\n" << c << "\n\n";
//	//std::cout << "\n\nstd::vector<std::pair<int, int>> TESSELATION{\n";
//	//int cntr = 0;
//	//for (int i = 0; i < tess.size(); i++) {
//	//	std::cout << "std::pair<int, int>(" << tess[i].first << ", " << tess[i].second << "), ";
//	//	cntr++;
//	//	if (cntr == 5) {
//	//		std::cout << "\n";
//	//		cntr = 0;
//	//	}
//	//}
//
//	for (int i = 0; i < tess.size() - 2; i++) {
//		int ver1 = tess[i].first;
//		int ver2 = tess[i].second;
//		for (int j = i + 1; j < tess.size() - 1; j++) { //öèêë óãëóáëÿåòñÿ, åñëè äâà îòğåçêà ñîâïàëè, ïğè÷åì ñîâïàäåíèå âñåãäà âèäà pretendent1.first == ver1
//			std::pair<int, int> pretendent1 = tess[j];
//			if (pretendent1.first == ver1) {
//				//pass
//			}
//			else if (pretendent1.first == ver2) {
//				int temp = ver2;
//				ver2 = ver1;
//				ver1 = temp;
//			}
//			else if (pretendent1.second == ver1) {
//				int temp = pretendent1.second;
//				pretendent1.second = pretendent1.first;
//				pretendent1.first = temp;
//			}
//			else if (pretendent1.second == ver2) {
//				int temp = pretendent1.second;
//				pretendent1.second = pretendent1.first;
//				pretendent1.first = temp;
//
//				temp = ver2;
//				ver2 = ver1;
//				ver1 = temp;
//			}
//			else continue; //÷àñòü öèêëà íèæå âûïîëíÿåòñÿ ëèøü åñëè íàñòóïèëî ñîîòâåòñòâèå
//
//			int ver3 = pretendent1.second;
//			for (int k = j + 1; k < tess.size(); k++) {
//				std::pair<int, int> pretendent2 = tess[k];
//				if ((pretendent2.first == ver2 || pretendent2.second == ver2) && (pretendent2.first == ver3 || pretendent2.second == ver3)) {
//					std::vector<int> g = { ver1, ver2, ver3 };
//					indices.push_back(g);
//				}
//			}
//		}
//	}
//
//
//
//	return indices;
//}

//Finding mask spots on face2.jpg

/*for (int i = 0; i < PyList_Size(pyVertices); i++) {

	if (round(maskVertices[3 * i] * 1000000) == 351587 && round(maskVertices[3 * i + 1] * 1000000) == 550666 && round(maskVertices[3 * i + 2] * 1000000) == -20504)
		std::cout << "left eye: " << i << "\n";

	if (round(maskVertices[3 * i] * 1000000) == 642918 && round(maskVertices[3 * i + 1] * 1000000) == 544982 && round(maskVertices[3 * i + 2] * 1000000) == -25497)
		std::cout << "right eye: " << i << "\n";

	if (round(maskVertices[3 * i] * 1000000) == 496295 && round(maskVertices[3 * i + 1] * 1000000) == 430833 && round(maskVertices[3 * i + 2] * 1000000) == 113203)
		std::cout << "nose: " << i << "\n";
}*/