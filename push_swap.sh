Red='\033[0;31m'
Green='\033[0;32m'
Yellow='\033[0;33m'
Blue='\033[0;34m'
Color_Off='\033[0m'
echo $Blue
make
make clean
mkdir -p result
echo $Color_Off
echo "\nNombre de valeur : 1, 2, 3, 4, 5, 10, 20, 50, 100, 500\n"

ARG="7"
RES=$(./push_swap $ARG | wc -l)
./push_swap $ARG > result/result_1
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo "1\t:\t" '\t' $RES '\t' $TEST '\t' $Yellow check result_1 $Color_Off

ARG="18 -14"
RES=$(./push_swap $ARG | wc -l)
./push_swap $ARG > result/result_2
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo "2\t:\t" '\t' $RES '\t' $TEST '\t' $Yellow check result_2 $Color_Off

ARG="6 18 -14"
RES=$(./push_swap $ARG | wc -l)
./push_swap $ARG > result/result_3
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo "3\t:\t" '\t' $RES '\t' $TEST '\t' $Yellow check result_3 $Color_Off

ARG="6 18 -14 1424321"
RES=$(./push_swap $ARG | wc -l)
./push_swap $ARG > result/result_4
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo "3\t:\t" '\t' $RES '\t' $TEST '\t' $Yellow check result_4 $Color_Off

ARG="-444 350 807 189 555"
RES=$(./push_swap $ARG | wc -l)
./push_swap $ARG > result/result_5
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo "5\t:\t" '\t' $RES '\t' $TEST '\t' $Yellow check result_5 $Color_Off

ARG="496 598 -418 -415 724 -834 -111 -710 -528 111"
RES=$(./push_swap $ARG | wc -l)
./push_swap $ARG > result/result_10
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo "10\t:\t" '\t' $RES '\t' $TEST '\t' $Yellow check result_10 $Color_Off

ARG="-253 904 -590 805 838 212 -50 247 430 336 131 -306 -368 -759 -403 -23 201 -72 480 690"
RES=$(./push_swap $ARG | wc -l)
./push_swap $ARG > result/result_20
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo "20\t:\t" '\t' $RES '\t' $TEST '\t' $Yellow check result_20 $Color_Off

ARG="686 -503 -861 -870 820 -849 -781 -320 68 -987 -635 204 -63 -178 -25 318 -227 510 -964 279 -49 555 -866 51 642 -965 -139 479 597 -348 115 -256 476 737 -880 -143 -399 845 144 -38 360 -860 266 786 439 -793 234 100 -627 557"
RES=$(./push_swap $ARG | wc -l)
./push_swap $ARG > result/result_50
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo "50\t:\t" '\t' $RES '\t' $TEST '\t' $Yellow check result_50 $Color_Off

ARG="925 318 419 730 829 614 391 231 227 328 224 571 861 841 721 726 854 160 619 242 386 735 276 793 469 629 385 863 8 275 709 623 262 545 351 2 157 780 749 233 588 377 91 590 467 110 636 533 482 209 941 355 354 816 492 851 164 283 263 795 397 29 920 205 142 51 768 904 193 225 872 687 197 630 81 211 141 315 138 65 28 643 302 856 953 181 244 405 648 378 685 207 500 567 1 992 217 973 908 395"
RES=$(./push_swap $ARG | wc -l)
./push_swap $ARG > result/result_100
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo "100\t:\t" '\t' $RES '\t' $TEST '\t' $Yellow check result_100 $Color_Off

ARG="-544 -888 -851 871 -545 -824 -502 472 760 747 -591 -815 -852 -286 -765 -556 842 -654 -315 677 283 -618 60 278 940 -292 -454 -215 463 -894 -288 450 481 523 -44 475 597 -872 -374 954 220 178 -659 226 712 85 -275 398 68 765 743 495 535 -838 10 947 927 -468 498 -176 -341 376 873 286 587 402 -53 804 261 803 -581 -1 499 -112 344 169 145 294 262 421 380 -272 119 81 893 -566 550 451 -769 427 -481 -704 877 122 479 -799 -817 533 149 967 934 -120 559 335 104 -289 614 -407 -317 -908 885 887 112 563 990 612 -560 -147 207 239 28 -856 926 230 -623 -91 30 -8 -7 -943 70 -529 -88 -276 157 655 -270 844 -604 414 -870 -135 96 -925 90 715 594 369 -929 57 615 -307 -706 -735 -228 1000 -975 -516 -439 -266 826 -367 49 -738 593 -577 -829 -61 513 575 -906 -621 -458 732 537 -599 -643 22 847 -882 -681 1 -774 232 -370 514 210 -116 789 -253 -274 422 476 812 660 682 -62 662 609 -934 86 544 -87 152 547 -539 -480 377 -896 383 -520 -343 -960 -63 687 -702 67 -149 651 974 -885 -140 -938 -847 621 -42 516 503 388 -421 799 -337 -312 -637 473 367 -13 29 -978 -76 107 470 271 -920 -137 -665 111 -778 702 663 -494 293 -133 25 -198 -329 -154 -958 896 -48 64 -828 -271 161 -358 -806 -956 698 -301 848 392 214 944 -547 471 -814 956 -875 -949 -194 644 -834 142 -227 988 828 568 -816 -162 570 -984 -501 966 781 626 -694 920 -471 750 985 950 164 487 821 -987 -705 -423 872 -491 352 622 -676 -686 407 979 424 766 56 -927 -17 551 245 -195 -962 -603 -571 195 -555 647 -352 -671 -826 -771 -223 874 -403 227 980 701 -385 21 595 211 606 -148 -633 -200 858 115 -968 -217 998 62 351 -663 305 -303 258 936 -726 -841 4 264 882 611 977 -849 -437 -173 116 -284 686 -853 413 -389 -582 946 346 314 253 485 -961 727 98 -369 -433 -310 -144 -365 97 -513 845 395 -428 -517 -339 327 -160 -997 730 890 997 895 -359 324 -901 154 -313 -372 -833 933 -789 742 -394 -145 -598 -231 -775 316 198 591 423 133 52 543 -714 -807 404 -776 960 674 -630 630 303 196 608 -554 -541 -342 -744 -335 -202 884 788 320 -207 -757 -95 948 -398 208 705 -189 -139 -260 82 -865 -22 284 -82 -397 -100 215 -229 74 -18 110 9 151 -31 354 -193 357 910 -340 -832 -151 -486 -647 -40 -601 604 -344 175 -843 -966 187 -883 837 -508 -743 628 854 510 811 363 -128 -972 -666 -880"
RES=$(./push_swap $ARG | wc -l)
./push_swap $ARG > result/result_500
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo "500\t:\t" '\t' $RES '\t' $TEST '\t' $Yellow check result_500 $Color_Off

rm -f push_swap