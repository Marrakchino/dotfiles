Vim�UnDo� *��,��uo7Fd�'*�M}C��KP�$���e!   f                                   X�\    _�                              ����                                                                                                                                                                                                                                                                                                                                                             X�\    �   c   e            }�   b   d              return c;�   `   b          2    Complex c = new Complex( (float)R, (float)I );�   ^   `              I = Math.sin( radA ) * M;�   ]   _              R = Math.cos( radA ) * M;�   [   ]          $    double radA = (A * Math.PI)/180;�   Z   \              double I;�   Y   [              double R;�   X   Z            {�   W   Y            public Complex cx()�   V   X             */�   T   V              </p>�   S   U          8    in double precision and then rounds down to a float.�   R   T          6    the real and imaginary parts of the complex number�   Q   S          6    For a more accurate answer, this function computes�   P   R              <p>�   N   P              </p>�   M   O              angles in radians.�   L   N          -    in degrees.  The Java trig functions take�   K   M          /    Note that the angle stored in the phasor is�   J   L              <p>�   I   K          
    </pre>�   H   J                 mag * cos(angle) = R�   G   I                 cos(angle) = R / mag�   F   H          	    <pre>�   E   G              </p>�   D   F              and�   C   E              <p>�   B   D          
    </pre>�   A   C                 mag * sin(angle) = I�   @   B                 sin(angle) = I / mag�   ?   A          	    <pre>�   >   @              </p>�   =   ?          ,    This function uses the trig. identities:�   <   >              <p>�   :   <          ,  /** return the complex form of the phasor �   8   :          $  public float angle() { return A; }�   7   9          '  /** return the angle of the phasor */�   6   8          )  public void angle( float a ) { A = a; }�   5   7          $  /** set the angle of the phasor */�   3   5          "  public float mag() { return M; }�   2   4            /** return the magnitude */�   1   3          '  public void mag( float m ) { M = m; }�   0   2            /** set the magnitude */�   .   0            } �   -   /              A = c.angle();�   ,   .              M = c.mag();�   +   -            {�   *   ,            public Phasor( Complex c )�   )   +             */�   (   *          3   Construct a phasor object from a complex object.�   '   )            /**�   &   (            �   $   &            }�   #   %          
    A = a;�   "   $          
    M = m;�   !   #            {�       "          #  public Phasor( float m, float a )�      !             */�                 )      an angle.  The angle is in degrees �                4  /** Construct a phasor object from a magnitude and�                  }�                    A = 0.0f;�                    M = 0.0f;�                  {�                  public Phasor()�                @  private float A;  // Angle of the magnitude vector, in degrees�                   private float M;  // magnitude�                 */�                </p>�                4   and a phasor can be formed form a complex number.�                E   complex number, since a complex number can be formed from a phasor�                B   consists of a magnitude and an angle.  It is complementary to a�                >   a one dimensional matrix, so the term "phasor".  The phasor�                F   sometimes called a vector.  However, the term vector also refers to�   
             F   book <i>Understanding Digital Signal Processing</i>.  A "phasor" is�   	             E   This class follows the naming convention in Richard Lyon's stellar�      
          <p>�                </p>�                P   A container for magnitude and angle (which complements the complex container)�                <p>5��