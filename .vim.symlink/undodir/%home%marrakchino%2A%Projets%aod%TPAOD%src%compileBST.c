Vim�UnDo� ҽ��"Cd��G;�s�/ٲ���R�4�{ �7Cf  ^   ?						opt[TRIANGULAR_MAT_INDEX(i + 1, j, n)]i + occurences_sum;   �   ,      %       %   %   %    X�9    _�                     l       ����                                                                                                                                                                                                                                                                                                                                                             X��     �   k   m  W    5�_�                    m       ����                                                                                                                                                                                                                                                                                                                                                             X��     �   l   o  X      G	/* We also use this method to store the roots of every subtrees, again5�_�                    k        ����                                                                                                                                                                                                                                                                                                                                                             X��     �   j   k           5�_�                    f   P    ����                                                                                                                                                                                                                                                                                                                                                             X�-     �   e   h  X      N	 * time, we therefore avoid using a matrix and avoid cache faults because of    	 * its square  �   e   g  X      Q	 * time, we therefore avoid using a matrix and avoid cache faults because of the5�_�                    g       ����                                                                                                                                                                                                                                                                                                                                                             X�2     �   f   h  X      	 * * its square  5�_�                    g       ����                                                                                                                                                                                                                                                                                                                                                             X�3     �   f   h  X      	 * its square  5�_�                    g       ����                                                                                                                                                                                                                                                                                                                                                             X�5    �   f   h  X      	 * its square  shape5�_�      	              �   ,    ����                                                                                                                                                                                                                                                                                                                                                             X�     �   �   �  X    5�_�                 	   �       ����                                                                                                                                                                                                                                                                                                                                                             X�    �   �   �  Y      )	 * Let's initialize the data structures.5�_�   	      
          {        ����                                                                                                                                                                                                                                                                                                                                                             X     �  B  D          5				printf("%lu ", opt[TRIANGLE_MAT_INDEX(i, j, n)]);�  ;  =          7				printf("%lu ", roots[TRIANGLE_MAT_INDEX(i, j, n)]);�  4  6          9				printf("%lu ", freqsum[TRIANGLE_MAT_INDEX(i, j, n)]);�  '  )          3						opt[TRIANGLE_MAT_INDEX(i, j, n)] = local_opt;�  &  (          -						roots[TRIANGLE_MAT_INDEX(i, j, n)] = j;�  %  '          7					if(opt[TRIANGLE_MAT_INDEX(i, j, n)] > local_opt) {�  !  #          ,						opt[TRIANGLE_MAT_INDEX(i, j - 1, n)] +�              3						opt[TRIANGLE_MAT_INDEX(i, j, n)] = local_opt;�              -						roots[TRIANGLE_MAT_INDEX(i, j, n)] = m;�              7					if(opt[TRIANGLE_MAT_INDEX(i, j, n)] > local_opt) {�              ,						opt[TRIANGLE_MAT_INDEX(m + 1, j, n)] +�              ,						opt[TRIANGLE_MAT_INDEX(i, m - 1, n)] +�   �            ,					roots[TRIANGLE_MAT_INDEX(i, j, n)] = i;�   �   �          *						opt[TRIANGLE_MAT_INDEX(i + 1, j, n)]�   �   �          '					opt[TRIANGLE_MAT_INDEX(i, j, n)] =�   �   �          *					freqsum[TRIANGLE_MAT_INDEX(i, j, n)];�   �   �          =				unsigned long l = roots[TRIANGLE_MAT_INDEX(i + 1, j, n)];�   �   �          =				unsigned long m = roots[TRIANGLE_MAT_INDEX(i, j - 1, n)];�   �   �          5				printf("%lu ", opt[TRIANGLE_MAT_INDEX(i, j, n)]);�   �   �          7				printf("%lu ", roots[TRIANGLE_MAT_INDEX(i, j, n)]);�   �   �          9				printf("%lu ", freqsum[TRIANGLE_MAT_INDEX(i, j, n)]);�   �   �          *					freqsum[TRIANGLE_MAT_INDEX(j, j, n)];�   �   �          /					freqsum[TRIANGLE_MAT_INDEX(i, j - 1, n)] +�   �   �          *				freqsum[TRIANGLE_MAT_INDEX(i, j, n)] =�   �   �          )				freqsum[TRIANGLE_MAT_INDEX(i, i, n)];�   �   �          %			opt[TRIANGLE_MAT_INDEX(i, i, n)] =�   �   �          *			roots[TRIANGLE_MAT_INDEX(i, i, n)] = i;�   �   �          C			fscanf(freq_file, "%lu", &freqsum[TRIANGLE_MAT_INDEX(i, i, n)]);�   �   �          +				roots[TRIANGLE_MAT_INDEX(i, j, n)] = 0;�   �   �          -				freqsum[TRIANGLE_MAT_INDEX(i, j, n)] = 0;�   {   }          7				printf("%lu \n", opt[TRIANGLE_MAT_INDEX(i, j, n)]);�   z   |          )				opt[TRIANGLE_MAT_INDEX(i, j, n)] = 0;5�_�                    �   '    ����                                                                                                                                                                                                                                                                                                                                                             X     �   �   �  Y      '			opt[TRIANGULAR_MAT_INDEX(i, i, n)] =   +				freqsum[TRIANGULAR_MAT_INDEX(i, i, n)];�   �   �  Y      '			opt[TRIANGULAR_MAT_INDEX(i, i, n)] =5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                             X     �   �   �  X      ?	/* Now compute the sum of the occurences for all trees A(i, j)5�_�                    �   3    ����                                                                                                                                                                                                                                                                                                                                                             X     �   �   �  Y      5	 * To do so, we need the sum of A(i, j - 1) only. */5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                             X��     �   �   �  [      	 * */5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                             X��     �   �   �          	 *5�_�                    �   A    ����                                                                                                                                                                                                                                                                                                                                                             X�     �   �   �  Z      L	 * We are going to compute iteratively the costs of all the tree containing5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                             X�     �   �   �  Z      H	 * The belman equation allows us to compute the next set of trees (with5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                             X�!     �   �   �  Z      %	/* We now apply the Bellman equation5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                             X�w     �   �   �  [       				 * make a grat gain of time.5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                             X�x     �   �   �  [      !				 * makes a grat gain of time.5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                             X�z     �   �   �  [      "				 * makes a great gain of time.5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                             X     �   �   �  [      				 * makes a great of time.5�_�                    �        ����                                                                                                                                                                                                                                                                                                                                                             X     �   �   �  [      (				 * makes a great time savingof time.5�_�                       ,    ����                                                                                                                                                                                                                                                                                                                                                             X     �   �    [      ,						opt[TRIANGULAR_MAT_INDEX(i + 1, j, n)]   						+ occurences_sum;�   �    [      ,						opt[TRIANGULAR_MAT_INDEX(i + 1, j, n)]5�_�                      .    ����                                                                                                                                                                                                                                                                                                                                                             X     �      Z      =				 * To do so we check the costs of all tree with different5�_�                          ����                                                                                                                                                                                                                                                                                                                                                             X     �      Z      9				 * root and get the less costy, this basically is the5�_�                      "    ����                                                                                                                                                                                                                                                                                                                                                             X     �      Z      :				 * roots and get the less costy, this basically is the5�_�                          ����                                                                                                                                                                                                                                                                                                                                                             X��     �      Z      =					/* Here we avoid cache fault by using the square matrix,5�_�                          ����                                                                                                                                                                                                                                                                                                                                                             X��     �      [    5�_�                    "       ����                                                                                                                                                                                                                                                                                                                                                             X��     �  !  #  \      D				/* If we computed earlier that we need to test j as last root */5�_�      !              "       ����                                                                                                                                                                                                                                                                                                                                                             X��     �  !  #  \    5�_�       "           !  O       ����                                                                                                                                                                                                                                                                                                                                                             X��     �  N  Q  ]      K	/* Create the generated tree thanks to the computed optimal roots for each5�_�   !   #           "  Q       ����                                                                                                                                                                                                                                                                                                                                                             X��     �  P  R  ^      	 * sub trees5�_�   "   $           #  \       ����                                                                                                                                                                                                                                                                                                                                                             X�     �  \  ^  ^    5�_�   #   %           $   �        ����                                                                                                                                                                                                                                                                                                                                                             X�    �   �   �           5�_�   $               %   �   ,    ����                                                                                                                                                                                                                                                                                                                                                             X�8    �   �     ^      ?						opt[TRIANGULAR_MAT_INDEX(i + 1, j, n)]i + occurences_sum;5�_�   	              
   {        ����                                                                                                                                                                                                                                                                                                                                                             X�G     �   z   |          				opt[g(i, j, n)] = 0;�   {   }          &				printf("%lu \n", opt[g(i, j, n)]);�   �   �          				freqsum[g(i, j, n)] = 0;�   �   �          				roots[g(i, j, n)] = 0;�   �   �          2			fscanf(freq_file, "%lu", &freqsum[g(i, i, n)]);�   �   �          			roots[g(i, i, n)] = i;�   �   �          			opt[g(i, i, n)] =�   �   �          				freqsum[g(i, i, n)];�   �   �          				freqsum[g(i, j, n)] =�   �   �          					freqsum[g(i, j - 1, n)] +�   �   �          					freqsum[g(j, j, n)];�   �   �          (				printf("%lu ", freqsum[g(i, j, n)]);�   �   �          &				printf("%lu ", roots[g(i, j, n)]);�   �   �          $				printf("%lu ", opt[g(i, j, n)]);�   �   �          ,				unsigned long m = roots[g(i, j - 1, n)];�   �   �          ,				unsigned long l = roots[g(i + 1, j, n)];�   �   �          					freqsum[g(i, j, n)];�   �   �          					opt[g(i, j, n)] =�   �   �          						opt[g(i + 1, j, n)]�   �            					roots[g(i, j, n)] = i;�              						opt[g(i, m - 1, n)] +�              						opt[g(m + 1, j, n)] +�              &					if(opt[g(i, j, n)] > local_opt) {�              						roots[g(i, j, n)] = m;�              "						opt[g(i, j, n)] = local_opt;�  !  #          						opt[g(i, j - 1, n)] +�  %  '          &					if(opt[g(i, j, n)] > local_opt) {�  &  (          						roots[g(i, j, n)] = j;�  '  )          "						opt[g(i, j, n)] = local_opt;�  4  6          (				printf("%lu ", freqsum[g(i, j, n)]);�  ;  =          &				printf("%lu ", roots[g(i, j, n)]);�  B  D          $				printf("%lu ", opt[g(i, j, n)]);5��