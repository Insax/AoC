#include <iostream>
#include <vector>
#include "Module.h"
#include "Rocket.h"

int main() {
    std::vector<long> input;
    input.push_back(54032);
    input.push_back(64433);
    input.push_back(71758);
    input.push_back(133884);
    input.push_back(76994);
    input.push_back(99596);
    input.push_back(90491);
    input.push_back(89188);
    input.push_back(142280);
    input.push_back(127352);
    input.push_back(62127);
    input.push_back(79849);
    input.push_back(96049);
    input.push_back(56527);
    input.push_back(148029);
    input.push_back(81386);
    input.push_back(149827);
    input.push_back(105377);
    input.push_back(91970);
    input.push_back(98708);
    input.push_back(88611);
    input.push_back(99785);
    input.push_back(99229);
    input.push_back(88460);
    input.push_back(80396);
    input.push_back(70097);
    input.push_back(91784);
    input.push_back(81733);
    input.push_back(75671);
    input.push_back(106787);
    input.push_back(77196);
    input.push_back(132234);
    input.push_back(98698);
    input.push_back(115243);
    input.push_back(119574);
    input.push_back(142851);
    input.push_back(58964);
    input.push_back(137814);
    input.push_back(127695);
    input.push_back(92139);
    input.push_back(106277);
    input.push_back(51240);
    input.push_back(121351);
    input.push_back(78316);
    input.push_back(129472);
    input.push_back(65201);
    input.push_back(116068);
    input.push_back(72803);
    input.push_back(52582);
    input.push_back(135433);
    input.push_back(87619);
    input.push_back(68096);
    input.push_back(116952);
    input.push_back(106437);
    input.push_back(70517);
    input.push_back(69840);
    input.push_back(89863);
    input.push_back(134618);
    input.push_back(83823);
    input.push_back(113436);
    input.push_back(103779);
    input.push_back(134819);
    input.push_back(107928);
    input.push_back(138503);
    input.push_back(82509);
    input.push_back(90104);
    input.push_back(98001);
    input.push_back(76202);
    input.push_back(136238);
    input.push_back(66426);
    input.push_back(74030);
    input.push_back(55075);
    input.push_back(124163);
    input.push_back(57133);
    input.push_back(79908);
    input.push_back(109977);
    input.push_back(66903);
    input.push_back(125400);
    input.push_back(130961);
    input.push_back(149293);
    input.push_back(99203);
    input.push_back(120307);
    input.push_back(142403);
    input.push_back(50262);
    input.push_back(52854);
    input.push_back(70851);
    input.push_back(142213);
    input.push_back(77567);
    input.push_back(149144);
    input.push_back(144582);
    input.push_back(58138);
    input.push_back(61765);
    input.push_back(116209);
    input.push_back(128192);
    input.push_back(137436);
    input.push_back(101406);
    input.push_back(69037);
    input.push_back(107389);
    input.push_back(112389);
    input.push_back(124402);

    Rocket rocket = Rocket(input);
    std::cout << rocket.calculateFuelRequirement();
}