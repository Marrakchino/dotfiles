Vim�UnDo� �1	�_f�Dz��ZY��-���	�K�d��)   4   t(){   	          )       )   )   )    X�n    _�                     	        ����                                                                                                                                                                                                                                                                                                                                                             X��     �   	   6         	�   	      
    �                  5�_�                    
        ����                                                                                                                                                                                                                                                                                                                                                             X��    �   3   5          																		done�   1   3          .																		        printf "$moy     \n"�   0   2          (																		    printf "$max     "�   /   1          +																	        printf "$min     "�   .   0          '																	    printf "$infile  "�   ,   .          																        done�   +   -          0															            ((n < min)) && min=$n�   *   ,          +														    for n in "${arr[@]}" ; do�   )   +          "													        min=${arr[0]}�   '   )          													    done�   &   (          -												        ((n > max)) && max=$((n))�   %   '          +										        for n in "${arr[@]}" ; do�   $   &          										    max=${arr[0]}�   #   %          W									        arr=("$((test1))" "$((test2))" "$((test3))" "$((test4))" "$((test5))")�   "   $          									    moy=$(($moy/5))�   !   #          Y								        moy=$(( $((test1)) + $((test2)) + $((test3)) + $((test4)) + $((test5)) ))�       "          =								    #echo "$test1 $test2 $test3 $test4 $test4 $test5"�                 /							        test5=$(do_test $infile $nb_elt)�                +							    test4=$(do_test $infile $nb_elt)�                .						        test3=$(do_test $infile $nb_elt)�                *						    test2=$(do_test $infile $nb_elt)�                -					        test1=$(do_test $infile $nb_elt)�                6					    nb_elt=$(wc -w "$infile" | awk '{print $1;}')�                				do�                8				for infile in `find benchmarks/ -name "*.in" | sort`�                A				printf "                          MIN   MAX   MOY  (en ms)\n"�                				}�                				        echo "$test"  �                0				    test+='0' #on convertit en millisecondes�                O			        test=$(echo "$test" | sed 's/^0*//')  #on supprime les zeros en tete�                ,			    test=${test//.} #on supprime le point�                u		        test=$( /usr/bin/time -f "%e" ./bin/compileBST "$nb_elt" "$infile"  2>&1 1>/dev/null  | cut -d ' ' -f 8- ) �                		    local test�   
             	        local nb_elt=$2�   	             	    local infile=$15�_�                   $   	    ����                                                                                                                                                                                                                                                                                                                                                             X��     �   #   %   6      G	arr=("$((test1))" "$((test2))" "$((test3))" "$((test4))" "$((test5))")5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             X��     �   #   %   6      F	arr=("$(test1))" "$((test2))" "$((test3))" "$((test4))" "$((test5))")5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             X��     �   #   %   6      E	arr=("$(test1)" "$((test2))" "$((test3))" "$((test4))" "$((test5))")5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             X��     �   #   %   6      D	arr=("$test1)" "$((test2))" "$((test3))" "$((test4))" "$((test5))")5�_�      	              $       ����                                                                                                                                                                                                                                                                                                                                                             X��     �   #   %   6      C	arr=("$test1" "$((test2))" "$((test3))" "$((test4))" "$((test5))")5�_�      
           	   $       ����                                                                                                                                                                                                                                                                                                                                                             X��     �   #   %   6      B	arr=("$test1 "$((test2))" "$((test3))" "$((test4))" "$((test5))")5�_�   	              
   $       ����                                                                                                                                                                                                                                                                                                                                                             X�     �   #   %   6      A	arr=("$test1 $((test2))" "$((test3))" "$((test4))" "$((test5))")5�_�   
                 $       ����                                                                                                                                                                                                                                                                                                                                                             X�     �   #   %   6      @	arr=("$test1 $(test2))" "$((test3))" "$((test4))" "$((test5))")5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             X�     �   #   %   6      ?	arr=("$test1 $test2))" "$((test3))" "$((test4))" "$((test5))")5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             X�     �   #   %   6      >	arr=("$test1 $test2)" "$((test3))" "$((test4))" "$((test5))")5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             X�     �   #   %   6      =	arr=("$test1 $test2" "$((test3))" "$((test4))" "$((test5))")5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             X�     �   #   %   6      <	arr=("$test1 $test2 "$((test3))" "$((test4))" "$((test5))")5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             X�     �   #   %   6      ;	arr=("$test1 $test2"$((test3))" "$((test4))" "$((test5))")5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             X�     �   #   %   6      :	arr=("$test1 $test2$((test3))" "$((test4))" "$((test5))")5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             X�     �   #   %   6      9	arr=("$test1 $test2$(test3))" "$((test4))" "$((test5))")5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             X�	     �   #   %   6      :	arr=("$test1 $test2 $(test3))" "$((test4))" "$((test5))")5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             X�
     �   #   %   6      9	arr=("$test1 $test2 $test3))" "$((test4))" "$((test5))")5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             X�     �   #   %   6      5	arr=("$test1 $test2 $test3 $((test4))" "$((test5))")5�_�                    $   "    ����                                                                                                                                                                                                                                                                                                                                                             X�     �   #   %   6      3	arr=("$test1 $test2 $test3 $test4))" "$((test5))")5�_�                    $   $    ����                                                                                                                                                                                                                                                                                                                                                             X�     �   #   %   6      /	arr=("$test1 $test2 $test3 $test4 $((test5))")5�_�                    $   )    ����                                                                                                                                                                                                                                                                                                                                                             X�     �   #   %   6      -	arr=("$test1 $test2 $test3 $test4 $test5))")5�_�                    $   *    ����                                                                                                                                                                                                                                                                                                                                                             X�     �   #   %   6      +	arr=("$test1 $test2 $test3 $test4 $test5")5�_�                    $   *    ����                                                                                                                                                                                                                                                                                                                                                             X�     �   #   %   6      *	arr=("$test1 $test2 $test3 $test4 $test5"5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             X�     �   #   %   6      +	arr=("$test1 $test2 $test3 $test4 $test5")5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             X�     �   #   %   6      ,	arr=("$test1" $test2 $test3 $test4 $test5")5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             X�      �   #   %   6      -	arr=("$test1" "$test2 $test3 $test4 $test5")5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             X�      �   #   %   6      .	arr=("$test1" "$test2" $test3 $test4 $test5")5�_�                     $       ����                                                                                                                                                                                                                                                                                                                                                             X�"     �   #   %   6      /	arr=("$test1" "$test2" "$test3 $test4 $test5")5�_�      !               $   !    ����                                                                                                                                                                                                                                                                                                                                                             X�"     �   #   %   6      0	arr=("$test1" "$test2" "$test3" $test4 $test5")5�_�       "           !   $   (    ����                                                                                                                                                                                                                                                                                                                                                             X�$     �   #   %   6      1	arr=("$test1" "$test2" "$test3" "$test4 $test5")5�_�   !   #           "   $   *    ����                                                                                                                                                                                                                                                                                                                                                             X�$     �   #   %   6      2	arr=("$test1" "$test2" "$test3" "$test4" $test5")5�_�   "   $           #      	    ����                                                                                                                                                                                                                                                                                                                                                             X�&    �          6      	#!/bin/sh5�_�   #   %           $   5        ����                                                                                                                                                                                                                                                                                                                                                             X�0    �   4   5              }5�_�   $   &           %          ����                                                                                                                                                                                                                                                                                                                                                             X�;    �         4      4for infile in `find benchmarks/ -name "*.in" | sort`5�_�   %   '           &   	        ����                                                                                                                                                                                                                                                                                                                                                             X�O     �      
   4      t(){5�_�   &   (           '   	       ����                                                                                                                                                                                                                                                                                                                                                             X�Q     �      
   4      
do_test(){5�_�   '   )           (   	       ����                                                                                                                                                                                                                                                                                                                                                             X�U    �      
   4      	do_tet(){5�_�   (               )   /        ����                                                                                                                                                                                                                                                                                                                                                             X�m    �   .   0          	printf "$infile  "5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             X��     �         6       Description: 5��