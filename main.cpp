#include <iostream>
using namespace std;

int main ()
{
    int i;
    cin >> i;
    int l1P;
    int l2P;
    int l3P;
    int l4P;
    char g1;
    char g2;
    int l1D;
    int l2D;
    int l3D;
    int l4D;

    int aWin = 0;
    int aLose = 0;
    int aDraw = 0;

    int bWin = 0;
    int bLose = 0;
    int bDraw = 0;

    int cWin = 0;
    int cLose = 0;
    int cDraw = 0;

    int dWin = 0;
    int dLose = 0;
    int dDraw = 0;

    int eWin = 0;
    int eLose = 0;
    int eDraw = 0;

    int g1Hier = 10;
    int g2Hier = 10;

    while (i > 0)
    {
        cin >> g1;
        cin >> l1P;
        cin >> l2P;
        cin >> l3P;
        cin >> l4P;
        cin >> g2;
        cin >> l1D;
        cin >> l2D;
        cin >> l3D;
        cin >> l4D;

        g1Hier = 10;
        g2Hier = 10;

        if (l1P == l2P && l2P == l3P && l3P == l4P )
        {
            g1Hier = 1;
        }
        else
        {
            if ((l1P == l2P && l3P == l4P) || (l1P == l3P && l2P == l4P) || (l1P == l4P && l2P == l3P))
            {
                g1Hier = 3;
            }
            else
            {
                if ((l1P == l2P && l2P == l3P) || (l1P == l2P && l2P== l4P) || (l2P == l3P && l3P == l4P) || (l1P == l3P && l3P == l4P))
                {
                    g1Hier = 4;
                }
                else
                {
                    if (((l1P == l2P) && (l1P != l3P) && (l1P != l4P)) || ((l1P == l3P) && (l1P != l2P) && (l1P != l4P)) || ((l1P == l4P) && (l1P != l2P) && (l1P != l3P)) || ((l2P == l3P) && (l2P != l1P) && (l2P != l4P)) || ((l2P == l4P) && (l2P != l3P) && (l2P != l1P)) || ((l3P == l4P) && (l3P != l1P) && (l3P != l2P)))
                    {
                        g1Hier = 5;
                    }
                    else
                    {
                        g1Hier = 2;
                    }
                }
            }
        }

        if (l1D == l2D && l2D == l3D && l3D == l4D)
        {
            g2Hier = 1;
        }
        else
        {
            if ((l1D == l2D && l3D == l4D) || (l1D == l3D && l2D == l4D) || (l1D == l4D && l2D == l3D))
            {
                g2Hier = 3;
            }
            else
            {
                if ((l1D == l2D && l2D == l3D) || (l1D == l2D && l2D == l4D) || (l2D == l3D && l3D == l4D) || (l1D == l3D && l3D == l4D))
                {
                    g2Hier = 4;
                }
                else
                {
                    if (((l1D == l2D) && (l1D != l3D) && (l1D != l4D)) || ((l1D == l3D) && (l1D != l2D) && (l1D != l4D)) || ((l1D == l4D) && (l1D != l2D) && (l1D != l3D)) || ((l2D == l3D) && (l2D != l1D) && (l2D != l4D)) || ((l2D == l4D) && (l2D != l3D) && (l2D != l1D)) || ((l3D == l4D) && (l3D != l1D) && (l3D != l2D)))
                    {
                        g2Hier = 5;
                    }
                    else
                    {
                        g2Hier = 2;
                    }
                }
            }

        }

        if ( g1Hier < g2Hier) //tylko winy 1 gracza
        {
            if (g1 == 'a')
            {
                aWin = aWin + 1;
                if (g2 == 'b')
                {
                    bLose = bLose + 1;
                }
                else
                {
                    if (g2 == 'c')
                    {
                        cLose = cLose + 1;
                    }
                    else
                    {
                        if (g2 == 'd')
                        {
                            dLose = dLose + 1;
                        }
                        else
                        {
                            if (g2 == 'e')
                                eLose = eLose + 1;
                        }
                    }

                }
            }

            if (g1 == 'c')
            {
                cWin = cWin + 1;
                if (g2 == 'a')
                {
                    aLose = aLose + 1;
                }
                else
                {
                    if (g2 == 'b')
                    {
                        bLose = bLose + 1;
                    }
                    else
                    {
                        if (g2 == 'd')
                        {
                            dLose = dLose + 1;
                        }
                        else
                        {
                            if (g2 == 'e') {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if (g1 == 'b')
            {
                bWin = bWin + 1;
                if (g2 == 'a')
                {
                    aLose = aLose + 1;
                }
                else
                {
                    if (g2 == 'c')
                    {
                        cLose = cLose + 1;
                    }
                    else
                    {
                        if (g2 == 'd')
                        {
                            dLose = dLose + 1;
                        }
                        else
                        {
                            if (g2 == 'e')
                            {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if (g1 == 'd')
            {
                dWin = dWin + 1;
                if (g2 == 'a')
                {
                    aLose = aLose + 1;
                }
                else
                {
                    if (g2 == 'b')
                    {
                        bLose = bLose + 1;
                    }
                    else
                    {
                        if (g2 == 'c')
                        {
                            cLose = cLose + 1;
                        }
                        else {
                            if (g2 == 'e')
                            {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if (g1 == 'e')
            {
                eWin = eWin + 1;
                if (g2 == 'a')
                {
                    aLose = aLose + 1;
                }
                else
                {
                    if (g2 == 'b')
                    {
                        bLose = bLose + 1;
                    }
                    else
                    {
                        if (g2 == 'c')
                        {
                            cLose = cLose + 1;
                        }
                        else
                        {
                            if (g2 == 'd')
                            {
                                dLose = dLose + 1;
                            }
                        }
                    }
                }
            }

        }
        if ( g2Hier < g1Hier) //tylko winy 2 gracza
        {
            if (g2 == 'a')
            {
                aWin = aWin + 1;
                if (g1 == 'b')
                {
                    bLose = bLose + 1;
                }
                else
                {
                    if (g1 == 'c')
                    {
                        cLose = cLose + 1;
                    }
                    else
                    {
                        if (g1 == 'd')
                        {
                            dLose = dLose + 1;
                        }
                        else
                        {
                            if (g1 == 'e')
                                eLose = eLose + 1;
                        }
                    }

                }
            }

            if (g2 == 'c')
            {
                cWin = cWin + 1;
                if (g1 == 'a')
                {
                    aLose = aLose + 1;
                }
                else
                {
                    if (g1 == 'b')
                    {
                        bLose = bLose + 1;
                    }
                    else
                    {
                        if (g1 == 'd')
                        {
                            dLose = dLose + 1;
                        }
                        else
                        {
                            if (g1 == 'e')
                            {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if (g2 == 'b')
            {
                bWin = bWin + 1;
                if (g1 == 'a')
                {
                    aLose = aLose + 1;
                }
                else
                {
                    if (g1 == 'c')
                    {
                        cLose = cLose + 1;
                    }
                    else
                    {
                        if (g1 == 'd')
                        {
                            dLose = dLose + 1;
                        }
                        else
                        {
                            if (g1 == 'e')
                            {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if (g2 == 'd')
            {
                dWin = dWin + 1;
                if (g1 == 'a')
                {
                    aLose = aLose + 1;
                }
                else
                {
                    if (g1 == 'b')
                    {
                        bLose = bLose + 1;
                    }
                    else
                    {
                        if (g1 == 'c')
                        {
                            cLose = cLose + 1;
                        }
                        else
                        {
                            if (g1 == 'e')
                            {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if (g2 == 'e')
            {
                eWin = eWin + 1;
                if (g1 == 'a')
                {
                    aLose = aLose + 1;
                }
                else
                {
                    if (g1 == 'b')
                    {
                        bLose = bLose + 1;
                    }
                    else
                    {
                        if (g1 == 'c')
                        {
                            cLose = cLose + 1;
                        } else
                        {
                            if (g1 == 'd')
                            {
                                dLose = dLose + 1;
                            }
                        }
                    }
                }
            }

        }
        int sumaP;
        sumaP = l1P + l2P + l3P + l4P;
        int sumaD;
        sumaD = l1D + l2D + l3D + l4D;

        if ((g1Hier == 1) && (g2Hier == 1)) //g1 i g2 maja po 4 takie same liczby
        {
            if (sumaP == sumaD)
            {
                if (g1 == 'a') {
                    aDraw = aDraw + 1;
                    if (g2 == 'b') {
                        bDraw = bDraw + 1;
                    } else {
                        if (g2 == 'c') {
                            cDraw = cDraw + 1;
                        } else {
                            if (g2 == 'd') {
                                dDraw = dDraw + 1;
                            } else {
                                if (g2 == 'e') {
                                    eDraw = eDraw + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'b') {
                    bDraw = bDraw + 1;
                    if (g2 == 'a') {
                        aDraw = aDraw + 1;
                    } else {
                        if (g2 == 'c') {
                            cDraw = cDraw + 1;
                        } else {
                            if (g2 == 'd') {
                                dDraw = dDraw + 1;
                            } else {
                                if (g2 == 'e') {
                                    eDraw = eDraw + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'c') {
                    cDraw = cDraw + 1;
                    if (g2 == 'b') {
                        bDraw = bDraw + 1;
                    } else {
                        if (g2 == 'a') {
                            aDraw = aDraw + 1;
                        } else {
                            if (g2 == 'd') {
                                dDraw = dDraw + 1;
                            } else {
                                if (g2 == 'e') {
                                    eDraw = eDraw + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'd') {
                    dDraw = dDraw + 1;
                    if (g2 == 'b') {
                        bDraw = bDraw + 1;
                    } else {
                        if (g2 == 'c') {
                            cDraw = cDraw + 1;
                        } else {
                            if (g2 == 'a') {
                                aDraw = aDraw + 1;
                            } else {
                                if (g2 == 'e') {
                                    eDraw = eDraw + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'e') {
                    eDraw = eDraw + 1;
                    if (g2 == 'b') {
                        bDraw = bDraw + 1;
                    } else {
                        if (g2 == 'c') {
                            cDraw = cDraw + 1;
                        } else {
                            if (g2 == 'd') {
                                dDraw = dDraw + 1;
                            } else {
                                if (g2 == 'a') {
                                    aDraw = aDraw + 1;
                                }
                            }
                        }
                    }
                }
            }
            if (sumaP > sumaD) {
                if (g1 == 'a') {
                    aWin = aWin + 1;
                    if (g2 == 'b') {
                        bLose = bLose + 1;
                    } else {
                        if (g2 == 'c') {
                            cLose = cLose + 1;
                        } else {
                            if (g2 == 'd') {
                                dLose = dLose + 1;
                            } else {
                                if (g2 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'b') {
                    bWin = bWin + 1;
                    if (g2 == 'a') {
                        aLose = aLose + 1;
                    } else {
                        if (g2 == 'c') {
                            cLose = cLose + 1;
                        } else {
                            if (g2 == 'd') {
                                dLose = dLose + 1;
                            } else {
                                if (g2 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'c') {
                    cWin = cWin + 1;
                    if (g2 == 'b') {
                        bLose = bLose + 1;
                    } else {
                        if (g2 == 'a') {
                            aLose = aLose + 1;
                        } else {
                            if (g2 == 'd') {
                                dLose = dLose + 1;
                            } else {
                                if (g2 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'd') {
                    dWin = dWin + 1;
                    if (g2 == 'b') {
                        bLose = bLose + 1;
                    } else {
                        if (g2 == 'c') {
                            cLose = cLose + 1;
                        } else {
                            if (g2 == 'a') {
                                aLose = aLose + 1;
                            } else {
                                if (g2 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'e') {
                    eWin = eWin + 1;
                    if (g2 == 'b') {
                        bLose = bLose + 1;
                    } else {
                        if (g2 == 'c') {
                            cLose = cLose + 1;
                        } else {
                            if (g2 == 'a') {
                                aLose = aLose + 1;
                            } else {
                                if (g2 == 'd') {
                                    dLose = dLose + 1;
                                }
                            }
                        }
                    }
                }

            }
            if (sumaP < sumaD) {
                if (g1 == 'a') {
                    aLose = aLose + 1;
                    if (g2 == 'b') {
                        bWin = bWin + 1;
                    } else {
                        if (g2 == 'c') {
                            cWin = cWin + 1;
                        } else {
                            if (g2 == 'd') {
                                dWin = dWin + 1;
                            } else {
                                if (g2 == 'e') {
                                    eWin = eWin + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'b') {
                    bLose = bLose + 1;
                    if (g2 == 'a') {
                        aWin = aWin + 1;
                    } else {
                        if (g2 == 'c') {
                            cWin = cWin + 1;
                        } else {
                            if (g2 == 'd') {
                                dWin = dWin + 1;
                            } else {
                                if (g2 == 'e') {
                                    eWin = eWin + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'c') {
                    cLose = cLose + 1;
                    if (g2 == 'b') {
                        bWin = bWin + 1;
                    } else {
                        if (g2 == 'a') {
                            aWin = aWin + 1;
                        } else {
                            if (g2 == 'd') {
                                dWin = dWin + 1;
                            } else {
                                if (g2 == 'e') {
                                    eWin = eWin + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'd') {
                    dLose = dLose + 1;
                    if (g2 == 'b') {
                        bWin = bWin + 1;
                    } else {
                        if (g2 == 'c') {
                            cWin = cWin + 1;
                        } else {
                            if (g2 == 'a') {
                                aWin = aWin + 1;
                            } else {
                                if (g2 == 'e') {
                                    eWin = eWin + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'e') {
                    eLose = eLose + 1;
                    if (g2 == 'b') {
                        bWin = bWin + 1;
                    } else {
                        if (g2 == 'c') {
                            cWin = cWin + 1;
                        } else {
                            if (g2 == 'a') {
                                aWin = aWin + 1;
                            } else {
                                if (g2 == 'd') {
                                    dWin = dWin + 1;
                                }
                            }
                        }
                    }
                }

            }
        }
        int wartoscTrojki1pierwsza;
        int wartoscTrojki2pierwsza;
        int wartoscTrojki1druga;
        int wartoscTrojki2druga;
        int trojka1;
        int trojka2;

        if ((g1Hier == 4) && (g2Hier == 4))
        {
            wartoscTrojki1pierwsza = (3 * l1P);
            wartoscTrojki2pierwsza = (3 * l3P);
            wartoscTrojki1druga = (3 * l1D);
            wartoscTrojki2druga = (3 * l3D);

            if (l1P == l2P)
            {
                trojka1 = wartoscTrojki1pierwsza;
            }
            else
            {
                trojka1 = wartoscTrojki2pierwsza;
            }

            if (l1D == l2D)
            {
                trojka2 = wartoscTrojki1druga;
            }
            else
            {
                trojka2 = wartoscTrojki2druga;
            }
            //trojka1 = wartoscTrojki1pierwsza = wartoscTrojki2pierwsza;
            //trojka2 = wartoscTrojki1druga = wartoscTrojki2druga;

            if ((g1 == 'a') && (trojka1 > trojka2)) {
                aWin = aWin + 1;
                if (g2 == 'b') {
                    bLose = bLose + 1;
                } else {
                    if (g2 == 'c') {
                        cLose = cLose + 1;
                    } else {
                        if (g2 == 'd') {
                            dLose = dLose + 1;
                        } else {
                            if (g2 == 'e') {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if ((g1 == 'b') && (trojka1 > trojka2)) {
                bWin = bWin + 1;

                if (g2 == 'a') {
                    aLose = aLose + 1;
                } else {
                    if (g2 == 'c') {
                        cLose = cLose + 1;
                    } else {
                        if (g2 == 'd') {
                            dLose = dLose + 1;
                        } else {
                            if (g2 == 'e') {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }

            if ((g1 == 'c') && (trojka1 > trojka2)) {
                cWin = cWin + 1;

                if (g2 == 'b') {
                    bLose = bLose + 1;
                } else {
                    if (g2 == 'a') {
                        aLose = aLose + 1;
                    } else {
                        if (g2 == 'd') {
                            dLose = dLose + 1;
                        } else {
                            if (g2 == 'e') {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if ((g1 == 'd') && (trojka1 > trojka2)) {
                dWin = dWin + 1;

                if (g2 == 'b') {
                    bLose = bLose + 1;
                } else {
                    if (g2 == 'c') {
                        cLose = cLose + 1;
                    } else {
                        if (g2 == 'a') {
                            aLose = aLose + 1;
                        } else {
                            if (g2 == 'e') {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }

            if ((g1 == 'e') && (trojka1 > trojka2)) {
                eWin = eWin + 1;

                if (g2 == 'b') {
                    bLose = bLose + 1;
                } else {
                    if (g2 == 'c') {
                        cLose = cLose + 1;
                    } else {
                        if (g2 == 'd') {
                            dLose = dLose + 1;
                        } else {
                            if (g2 == 'a') {
                                aLose = aLose + 1;
                            }
                        }
                    }
                }
            }

            if ((g2 == 'a') && (trojka1 < trojka2)) {
                aWin = aWin + 1;

                if (g1 == 'b') {
                    bLose = bLose + 1;
                } else {
                    if (g1 == 'c') {
                        cLose = cLose + 1;
                    } else {
                        if (g1 == 'd') {
                            dLose = dLose + 1;
                        } else {
                            if (g1 == 'e') {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if ((g2 == 'b') && (trojka1 < trojka2)) {
                bWin = bWin + 1;

                if (g1 == 'a') {
                    aLose = aLose + 1;
                } else {
                    if (g1 == 'c') {
                        cLose = cLose + 1;
                    } else {
                        if (g1 == 'd') {
                            dLose = dLose + 1;
                        } else {
                            if (g1 == 'e') {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if ((g2 == 'c') && (trojka1 < trojka2)) {
                cWin = cWin + 1;

                if (g1 == 'b') {
                    bLose = bLose + 1;
                } else {
                    if (g1 == 'a') {
                        aLose = aLose + 1;
                    } else {
                        if (g1 == 'd') {
                            dLose = dLose + 1;
                        } else {
                            if (g1 == 'e') {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if ((g2 == 'd') && (trojka1 < trojka2))
            {
                dWin = dWin + 1;

                if (g1 == 'b') {
                    bLose = bLose + 1;
                } else {
                    if (g1 == 'c') {
                        cLose = cLose + 1;
                    } else {
                        if (g1 == 'a') {
                            aLose = aLose + 1;
                        } else {
                            if (g1 == 'e') {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if ((g2 == 'e') && (trojka1 < trojka2)) {
                eWin = eWin + 1;

                if (g1 == 'b') {
                    bLose = bLose + 1;
                } else {
                    if (g1 == 'c') {
                        cLose = cLose + 1;
                    } else {
                        if (g1 == 'd') {
                            dLose = dLose + 1;
                        } else {
                            if (g1 == 'a') {
                                aLose = aLose + 1;
                            }
                        }
                    }
                }
            }
            if ((g1 == 'a') && (trojka1 == trojka2) && (sumaP == sumaD))
            {
                aDraw = aDraw + 1;
                if (g2 == 'b')
                {
                    bDraw = bDraw + 1;
                }
                else
                {
                    if (g2 == 'c')
                    {
                        cDraw = cDraw + 1;
                    }
                    else
                    {
                        if (g2 == 'd')
                        {
                            dDraw = dDraw + 1;
                        }
                        else
                        {
                            if (g2 == 'e')
                            {
                                eDraw = eDraw + 1;
                            }
                        }
                    }
                }
            }
            if ((g1 == 'b')  && (trojka1 == trojka2) && (sumaP == sumaD)) {
                bDraw = bDraw + 1;
                if (g2 == 'a') {
                    aDraw = aDraw + 1;
                } else {
                    if (g2 == 'c') {
                        cDraw = cDraw + 1;
                    } else {
                        if (g2 == 'd') {
                            dDraw = dDraw + 1;
                        } else {
                            if (g2 == 'e') {
                                eDraw = eDraw + 1;
                            }
                        }
                    }
                }
            }
            if ((g1 == 'c') && (trojka1 == trojka2) && (sumaP == sumaD)) {
                cDraw = cDraw + 1;
                if (g2 == 'b') {
                    bDraw = bDraw + 1;
                } else {
                    if (g2 == 'a') {
                        aDraw = aDraw + 1;
                    } else {
                        if (g2 == 'd') {
                            dDraw = dDraw + 1;
                        } else {
                            if (g2 == 'e') {
                                eDraw = eDraw + 1;
                            }
                        }
                    }
                }
            }
            if ((g1 == 'd') && (trojka1 == trojka2) && (sumaP == sumaD)) {
                dDraw = dDraw + 1;
                if (g2 == 'b') {
                    bDraw = bDraw + 1;
                } else {
                    if (g2 == 'c') {
                        cDraw = cDraw + 1;
                    } else {
                        if (g2 == 'a') {
                            aDraw = aDraw + 1;
                        } else {
                            if (g2 == 'e') {
                                eDraw = eDraw + 1;
                            }
                        }
                    }
                }
            }
            if ((g1 == 'e') && (trojka1 == trojka2) && (sumaP == sumaD)) {
                eDraw = eDraw + 1;
                if (g2 == 'b') {
                    bDraw = bDraw + 1;
                } else {
                    if (g2 == 'c') {
                        cDraw = cDraw + 1;
                    } else {
                        if (g2 == 'd') {
                            dDraw = dDraw + 1;
                        } else {
                            if (g2 == 'a') {
                                aDraw = aDraw + 1;
                            }
                        }
                    }
                }
            }
            if ((g1 == 'a') && (trojka1 == trojka2) && (sumaP > sumaD))
            {
                aWin = aWin + 1;
                if (g2 == 'b')
                {
                    bLose = bLose + 1;
                }
                else {
                    if (g2 == 'c') {
                        cLose = cLose + 1;
                    } else {
                        if (g2 == 'd') {
                            dLose = dLose + 1;
                        } else {
                            if (g2 == 'e') {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if ((g1 == 'b') && (trojka1 == trojka2) && (sumaP > sumaD))
            {
                bWin = bWin + 1;
                if (g2 == 'a')
                {
                    aLose = aLose + 1;
                }
                else {
                    if (g2 == 'c') {
                        cLose = cLose + 1;
                    } else {
                        if (g2 == 'd') {
                            dLose = dLose + 1;
                        } else {
                            if (g2 == 'e') {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if ((g1 == 'c') && (trojka1 == trojka2) && (sumaP > sumaD))
            {
                cWin = cWin + 1;
                if (g2 == 'b')
                {
                    bLose = bLose + 1;
                }
                else {
                    if (g2 == 'a') {
                        aLose = aLose + 1;
                    } else {
                        if (g2 == 'd') {
                            dLose = dLose + 1;
                        } else {
                            if (g2 == 'e') {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if ((g1 == 'd') && (trojka1 == trojka2) && (sumaP > sumaD))
            {
                dWin = dWin + 1;
                if (g2 == 'b')
                {
                    bLose = bLose + 1;
                }
                else {
                    if (g2 == 'c') {
                        cLose = cLose + 1;
                    } else {
                        if (g2 == 'a') {
                            aLose = aLose + 1;
                        } else {
                            if (g2 == 'e') {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }if ((g1 == 'e') && (trojka1 == trojka2) && (sumaP > sumaD))
            {
                eWin = eWin + 1;
                if (g2 == 'b')
                {
                    bLose = bLose + 1;
                }
                else {
                    if (g2 == 'c') {
                        cLose = cLose + 1;
                    } else {
                        if (g2 == 'd') {
                            dLose = dLose + 1;
                        } else {
                            if (g2 == 'a') {
                                aLose = aLose + 1;
                            }
                        }
                    }
                }
            }
            if ((g2 == 'a') && (trojka1 == trojka2) && (sumaP < sumaD))
            {
                aWin = aWin + 1;
                if (g1 == 'b')
                {
                    bLose = bLose + 1;
                }
                else {
                    if (g1 == 'c') {
                        cLose = cLose + 1;
                    } else {
                        if (g1 == 'd') {
                            dLose = dLose + 1;
                        } else {
                            if (g1 == 'e') {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if ((g2 == 'b') && (trojka1 == trojka2) && (sumaP < sumaD))
            {
                bWin = bWin + 1;
                if (g1 == 'a')
                {
                    aLose = aLose + 1;
                }
                else {
                    if (g1 == 'c') {
                        cLose = cLose + 1;
                    } else {
                        if (g1 == 'd') {
                            dLose = dLose + 1;
                        } else {
                            if (g1 == 'e') {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if ((g2 == 'c') && (trojka1 == trojka2) && (sumaP < sumaD))
            {
                cWin = cWin + 1;
                if (g1 == 'b')
                {
                    bLose = bLose + 1;
                }
                else {
                    if (g1 == 'a') {
                        aLose = aLose + 1;
                    } else {
                        if (g1 == 'd') {
                            dLose = dLose + 1;
                        } else {
                            if (g1 == 'e') {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if ((g2 == 'd') && (trojka1 == trojka2) && (sumaP < sumaD))
            {
                dWin = dWin + 1;
                if (g1 == 'b')
                {
                    bLose = bLose + 1;
                }
                else {
                    if (g1 == 'c') {
                        cLose = cLose + 1;
                    } else {
                        if (g1 == 'a') {
                            aLose = aLose + 1;
                        } else {
                            if (g1 == 'e') {
                                eLose = eLose + 1;
                            }
                        }
                    }
                }
            }
            if ((g2 == 'e') && (trojka1 == trojka2) && (sumaP < sumaD))
            {
                eWin = eWin + 1;
                if (g1 == 'b')
                {
                    bLose = bLose + 1;
                }
                else {
                    if (g1 == 'c') {
                        cLose = cLose + 1;
                    } else {
                        if (g1 == 'd') {
                            dLose = dLose + 1;
                        } else {
                            if (g1 == 'a') {
                                aLose = aLose + 1;
                            }
                        }
                    }
                }
            }
        }
        int wartoscParyP = 0;
        int wartoscParyD = 0;

        if ((g1Hier == 5) && (g2Hier == 5)) {
            if ((l1P == l2P) || (l1P == l3P) || (l1P == l4P)) {
                wartoscParyP = (2 * l1P);
            } else {
                if ((l2P == l3P) || (l2P == l4P)) {
                    wartoscParyP = (2 * l2P);
                } else {
                    if (l3P == l4P) {
                        wartoscParyP = (2 * l3P);
                    }
                }
            }
            if ((l1D == l2D) || (l1D == l3D) || (l1D == l4D)) {
                wartoscParyD = (2 * l1D);
            } else {
                if ((l2D == l3D) || (l2D == l4D)) {
                    wartoscParyD = (2 * l2D);
                } else {
                    if (l3D == l4D) {
                        wartoscParyD = (2 * l3D);
                    }
                }
            }
            if (wartoscParyP > wartoscParyD) {
                if (g1 == 'a') {
                    aWin = aWin + 1;
                    if (g2 == 'b') {
                        bLose = bLose + 1;
                    } else {
                        if (g2 == 'c') {
                            cLose = cLose + 1;
                        } else {
                            if (g2 == 'd') {
                                dLose = dLose + 1;
                            } else {
                                if (g2 == 'e')
                                    eLose = eLose + 1;
                            }
                        }

                    }
                }
                if (g1 == 'c') {
                    cWin = cWin + 1;
                    if (g2 == 'a') {
                        aLose = aLose + 1;
                    } else {
                        if (g2 == 'b') {
                            bLose = bLose + 1;
                        } else {
                            if (g2 == 'd') {
                                dLose = dLose + 1;
                            } else {
                                if (g2 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'b') {
                    bWin = bWin + 1;
                    if (g2 == 'a') {
                        aLose = aLose + 1;
                    } else {
                        if (g2 == 'c') {
                            cLose = cLose + 1;
                        } else {
                            if (g2 == 'd') {
                                dLose = dLose + 1;
                            } else {
                                if (g2 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'd') {
                    dWin = dWin + 1;
                    if (g2 == 'a') {
                        aLose = aLose + 1;
                    } else {
                        if (g2 == 'b') {
                            bLose = bLose + 1;
                        } else {
                            if (g2 == 'c') {
                                cLose = cLose + 1;
                            } else {
                                if (g2 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'e') {
                    eWin = eWin + 1;
                    if (g2 == 'a') {
                        aLose = aLose + 1;
                    } else {
                        if (g2 == 'b') {
                            bLose = bLose + 1;
                        } else {
                            if (g2 == 'c') {
                                cLose = cLose + 1;
                            } else {
                                if (g2 == 'd') {
                                    dLose = dLose + 1;
                                }
                            }
                        }
                    }
                }
            }
            if (wartoscParyP < wartoscParyD)
            {
                if (g2 == 'a') {
                    aWin = aWin + 1;
                    if (g1 == 'b') {
                        bLose = bLose + 1;
                    } else {
                        if (g1 == 'c') {
                            cLose = cLose + 1;
                        } else {
                            if (g1 == 'd') {
                                dLose = dLose + 1;
                            } else {
                                if (g1 == 'e')
                                    eLose = eLose + 1;
                            }
                        }

                    }
                }
                if (g2 == 'c') {
                    cWin = cWin + 1;
                    if (g1 == 'a') {
                        aLose = aLose + 1;
                    } else {
                        if (g1 == 'b') {
                            bLose = bLose + 1;
                        } else {
                            if (g1 == 'd') {
                                dLose = dLose + 1;
                            } else {
                                if (g1 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }
                if (g2 == 'b') {
                    bWin = bWin + 1;
                    if (g1 == 'a') {
                        aLose = aLose + 1;
                    } else {
                        if (g1 == 'c') {
                            cLose = cLose + 1;
                        } else {
                            if (g1 == 'd') {
                                dLose = dLose + 1;
                            } else {
                                if (g1 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }
                if (g2 == 'd') {
                    dWin = dWin + 1;
                    if (g1 == 'a') {
                        aLose = aLose + 1;
                    } else {
                        if (g1 == 'b') {
                            bLose = bLose + 1;
                        } else {
                            if (g1 == 'c') {
                                cLose = cLose + 1;
                            } else {
                                if (g1 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }
                if (g2 == 'e') {
                    eWin = eWin + 1;
                    if (g1 == 'a') {
                        aLose = aLose + 1;
                    } else {
                        if (g1 == 'b') {
                            bLose = bLose + 1;
                        } else {
                            if (g1 == 'c') {
                                cLose = cLose + 1;
                            } else {
                                if (g1 == 'd') {
                                    dLose = dLose + 1;
                                }
                            }
                        }
                    }
                }
            }
            if (wartoscParyP == wartoscParyD)
            {
                if ((g1 == 'a') && (sumaP == sumaD)) {
                    aDraw = aDraw + 1;
                    if (g2 == 'b') {
                        bDraw = bDraw + 1;
                    } else {
                        if (g2 == 'c') {
                            cDraw = cDraw + 1;
                        } else {
                            if (g2 == 'd') {
                                dDraw = dDraw + 1;
                            } else {
                                if (g2 == 'e') {
                                    eDraw = eDraw + 1;
                                }
                            }
                        }
                    }
                }

                if ((g1 == 'b')  && (sumaP == sumaD))
                {
                    bDraw = bDraw + 1;
                    if (g2 == 'a')
                    {
                        aDraw = aDraw + 1;
                    }
                    else
                    {
                        if (g2 == 'c')
                        {
                            cDraw = cDraw + 1;
                        }
                        else
                        {
                            if (g2 == 'd')
                            {
                                dDraw = dDraw + 1;
                            }
                            else
                            {
                                if (g2 == 'e')
                                {
                                    eDraw = eDraw + 1;
                                }
                            }
                        }
                    }
                }

                if ((g1 == 'c') && (sumaP == sumaD))
                {
                    cDraw = cDraw + 1;
                    if (g2 == 'b')
                    {
                        bDraw = bDraw + 1;
                    }
                    else
                    {
                        if (g2 == 'a')
                        {
                            aDraw = aDraw + 1;
                        }
                        else
                        {
                            if (g2 == 'd')
                            {
                                dDraw = dDraw + 1;
                            }
                            else
                            {
                                if (g2 == 'e')
                                {
                                    eDraw = eDraw + 1;
                                }
                            }
                        }
                    }
                }
                if ((g1 == 'd') && (sumaP == sumaD))
                {
                    dDraw = dDraw + 1;
                    if (g2 == 'b') {
                        bDraw = bDraw + 1;
                    } else {
                        if (g2 == 'c') {
                            cDraw = cDraw + 1;
                        } else {
                            if (g2 == 'a') {
                                aDraw = aDraw + 1;
                            } else {
                                if (g2 == 'e') {
                                    eDraw = eDraw + 1;
                                }
                            }
                        }
                    }
                }
                if ((g1 == 'e') && (sumaP == sumaD)) {
                    eDraw = eDraw + 1;
                    if (g2 == 'b') {
                        bDraw = bDraw + 1;
                    } else {
                        if (g2 == 'c') {
                            cDraw = cDraw + 1;
                        } else {
                            if (g2 == 'd') {
                                dDraw = dDraw + 1;
                            } else {
                                if (g2 == 'a') {
                                    aDraw = aDraw + 1;
                                }
                            }
                        }
                    }
                }
                if ((g1 == 'a') && (sumaP > sumaD)) {
                    aWin = aWin + 1;
                    if (g2 == 'b') {
                        bLose = bLose + 1;
                    } else {
                        if (g2 == 'c') {
                            cLose = cLose + 1;
                        } else {
                            if (g2 == 'd') {
                                dLose = dLose + 1;
                            } else {
                                if (g2 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }

                if ((g1 == 'b')  && (sumaP > sumaD))
                {
                    bWin = bWin + 1;
                    if (g2 == 'a')
                    {
                        aLose = aLose + 1;
                    }
                    else
                    {
                        if (g2 == 'c')
                        {
                            cLose = cLose + 1;
                        }
                        else
                        {
                            if (g2 == 'd')
                            {
                                dLose = dLose + 1;
                            }
                            else
                            {
                                if (g2 == 'e')
                                {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }

                if ((g1 == 'c') && (sumaP > sumaD))
                {
                    cWin = cWin + 1;
                    if (g2 == 'b')
                    {
                        bLose = bLose + 1;
                    }
                    else
                    {
                        if (g2 == 'a')
                        {
                            aLose = aLose + 1;
                        }
                        else
                        {
                            if (g2 == 'd')
                            {
                                dLose = dLose + 1;
                            }
                            else
                            {
                                if (g2 == 'e')
                                {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }
                if ((g1 == 'd') && (sumaP > sumaD))
                {
                    dWin = dWin + 1;
                    if (g2 == 'b') {
                        bLose = bLose + 1;
                    } else {
                        if (g2 == 'c') {
                            cLose = cLose + 1;
                        } else {
                            if (g2 == 'a') {
                                aLose = aLose + 1;
                            } else {
                                if (g2 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }
                if ((g1 == 'e') && (sumaP > sumaD)) {
                    eWin = eWin + 1;
                    if (g2 == 'b') {
                        bLose = bLose + 1;
                    } else {
                        if (g2 == 'c') {
                            cLose = cLose + 1;
                        } else {
                            if (g2 == 'd') {
                                dLose = dLose + 1;
                            } else {
                                if (g2 == 'a') {
                                    aLose = aLose + 1;
                                }
                            }
                        }
                    }
                }
                if ((g1 == 'a') && (sumaP < sumaD)) {
                    aLose = aLose + 1;
                    if (g2 == 'b') {
                        bWin = bWin + 1;
                    } else {
                        if (g2 == 'c') {
                            cWin = cWin + 1;
                        } else {
                            if (g2 == 'd') {
                                dWin = dWin + 1;
                            } else {
                                if (g2 == 'e') {
                                    eWin = eWin + 1;
                                }
                            }
                        }
                    }
                }

                if ((g1 == 'b')  && (sumaP < sumaD))
                {
                    bLose = bLose + 1;
                    if (g2 == 'a')
                    {
                        aWin = aWin + 1;
                    }
                    else
                    {
                        if (g2 == 'c')
                        {
                            cWin = cWin + 1;
                        }
                        else
                        {
                            if (g2 == 'd')
                            {
                                dWin = dWin + 1;
                            }
                            else
                            {
                                if (g2 == 'e')
                                {
                                    eWin = eWin + 1;
                                }
                            }
                        }
                    }
                }

                if ((g1 == 'c') && (sumaP < sumaD))
                {
                    cLose = cLose + 1;
                    if (g2 == 'b')
                    {
                        bWin = bWin + 1;
                    }
                    else
                    {
                        if (g2 == 'a')
                        {
                            aWin  = aWin + 1;
                        }
                        else
                        {
                            if (g2 == 'd')
                            {
                                dWin = dWin + 1;
                            }
                            else
                            {
                                if (g2 == 'e')
                                {
                                    eWin = eWin + 1;
                                }
                            }
                        }
                    }
                }
                if ((g1 == 'd') && (sumaP < sumaD))
                {
                    dLose = dLose + 1;
                    if (g2 == 'b') {
                        bWin = bWin + 1;
                    } else {
                        if (g2 == 'c') {
                            cWin = cWin + 1;
                        } else {
                            if (g2 == 'a') {
                                aWin = aWin + 1;
                            } else {
                                if (g2 == 'e') {
                                    eWin = eWin + 1;
                                }
                            }
                        }
                    }
                }
                if ((g1 == 'e') && (sumaP < sumaD)) {
                    eLose = eLose + 1;
                    if (g2 == 'b') {
                        bWin = bWin + 1;
                    } else {
                        if (g2 == 'c') {
                            cWin = cWin + 1;
                        } else {
                            if (g2 == 'd') {
                                dWin = dWin + 1;
                            } else {
                                if (g2 == 'a') {
                                    aWin = aWin + 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((g1Hier == 2) && (g2Hier == 2))
        {
            if (g1 == 'a')
            {
                aDraw = aDraw + 1;
                if (g2 == 'b')
                {
                    bDraw = bDraw + 1;
                } else
                {
                    if (g2 == 'c')
                    {
                        cDraw = cDraw + 1;
                    } else
                    {
                        if (g2 == 'd')
                        {
                            dDraw = dDraw + 1;
                        }
                        else
                        {
                            if (g2 == 'e')
                            {
                                eDraw = eDraw + 1;
                            }
                        }
                    }
                }
            }
            if (g1 == 'b') {
                bDraw = bDraw + 1;
                if (g2 == 'a') {
                    aDraw = aDraw + 1;
                } else {
                    if (g2 == 'c') {
                        cDraw = cDraw + 1;
                    } else {
                        if (g2 == 'd') {
                            dDraw = dDraw + 1;
                        } else {
                            if (g2 == 'e') {
                                eDraw = eDraw + 1;
                            }
                        }
                    }
                }
            }
            if (g1 == 'c') {
                cDraw = cDraw + 1;
                if (g2 == 'b') {
                    bDraw = bDraw + 1;
                } else {
                    if (g2 == 'a') {
                        aDraw = aDraw + 1;
                    } else {
                        if (g2 == 'd') {
                            dDraw = dDraw + 1;
                        } else {
                            if (g2 == 'e') {
                                eDraw = eDraw + 1;
                            }
                        }
                    }
                }
            }
            if (g1 == 'd') {
                dDraw = dDraw + 1;
                if (g2 == 'b') {
                    bDraw = bDraw + 1;
                } else {
                    if (g2 == 'c') {
                        cDraw = cDraw + 1;
                    } else {
                        if (g2 == 'a') {
                            aDraw = aDraw + 1;
                        } else {
                            if (g2 == 'e') {
                                eDraw = eDraw + 1;
                            }
                        }
                    }
                }
            }
            if (g1 == 'e')
            {
                eDraw = eDraw + 1;
                if (g2 == 'b')
                {
                    bDraw = bDraw + 1;
                }
                else
                {
                    if (g2 == 'c')
                    {
                        cDraw = cDraw + 1;
                    }
                    else
                    {
                        if (g2 == 'd')
                        {
                            dDraw = dDraw + 1;
                        }
                        else
                        {
                            if (g2 == 'a')
                            {
                                aDraw = aDraw + 1;
                            }
                        }
                    }
                }

            }
        }
        int najwiekszaParaP = 0;
        int najwiekszaParaD = 0;
        if ((g1Hier == 3) && (g2Hier == 3))
        {
            if (l1P > l2P)
            {
                najwiekszaParaP = l1P;
            }
            else
            {
                if (l2P > l1P)
                {
                    najwiekszaParaP = l2P;
                }
                else
                {
                    if (l2P > l3P)
                    {
                        najwiekszaParaP = l2P;
                    }
                    else
                    {
                        if (l3P > l2P)
                        {
                            najwiekszaParaP = l3P;
                        }
                    }
                }
            }
            if (l1D > l2D)
            {
                najwiekszaParaD = l1D;
            }
            else
            {
                if (l2D > l1D)
                {
                    najwiekszaParaD = l2D;
                }
                else
                {
                    if (l2D > l3D)
                    {
                        najwiekszaParaD = l2D;
                    }
                    else
                    {
                        if (l3D > l2D)
                        {
                            najwiekszaParaD = l3D;
                        }
                    }
                }
            }
            if (najwiekszaParaP > najwiekszaParaD)
            {
                if (g1 == 'a')
                {
                    aWin = aWin + 1;
                    if (g2 == 'b') {
                        bLose = bLose + 1;
                    } else {
                        if (g2 == 'c') {
                            cLose = cLose + 1;
                        } else {
                            if (g2 == 'd') {
                                dLose = dLose + 1;
                            } else {
                                if (g2 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'c') {
                    cWin = cWin + 1;
                    if (g2 == 'a') {
                        aLose = aLose + 1;
                    } else {
                        if (g2 == 'b') {
                            bLose = bLose + 1;
                        } else {
                            if (g2 == 'd') {
                                dLose = dLose + 1;
                            } else {
                                if (g2 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'b') {
                    bWin = bWin + 1;
                    if (g2 == 'a') {
                        aLose = aLose + 1;
                    } else {
                        if (g2 == 'c') {
                            cLose = cLose + 1;
                        } else {
                            if (g2 == 'd') {
                                dLose = dLose + 1;
                            } else {
                                if (g2 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'd') {
                    dWin = dWin + 1;
                    if (g2 == 'a') {
                        aLose = aLose + 1;
                    } else {
                        if (g2 == 'b') {
                            bLose = bLose + 1;
                        } else {
                            if (g2 == 'c') {
                                cLose = cLose + 1;
                            } else {
                                if (g2 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'e') {
                    eWin = eWin + 1;
                    if (g2 == 'a') {
                        aLose = aLose + 1;
                    } else {
                        if (g2 == 'b') {
                            bLose = bLose + 1;
                        } else {
                            if (g2 == 'c') {
                                cLose = cLose + 1;
                            } else {
                                if (g2 == 'd') {
                                    dLose = dLose + 1;
                                }
                            }
                        }
                    }
                }
            }
            if (najwiekszaParaP < najwiekszaParaD)
            {
                if (g1 == 'a')
                {
                    aLose = aLose + 1;
                    if (g2 == 'b') {
                        bWin = bWin + 1;
                    } else {
                        if (g2 == 'c') {
                            cWin = cWin + 1;
                        } else {
                            if (g2 == 'd') {
                                dWin = dWin + 1;
                            } else {
                                if (g2 == 'e') {
                                    eWin = eWin + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'c') {
                    cLose = cLose + 1;
                    if (g2 == 'a') {
                        aWin = aWin + 1;
                    } else {
                        if (g2 == 'b') {
                            bWin = bWin + 1;
                        } else {
                            if (g2 == 'd') {
                                dWin = dWin + 1;
                            } else {
                                if (g2 == 'e') {
                                    eWin = eWin + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'b') {
                    bLose = bLose + 1;
                    if (g2 == 'a') {
                        aWin = aWin + 1;
                    } else {
                        if (g2 == 'c') {
                            cWin = cWin + 1;
                        } else {
                            if (g2 == 'd') {
                                dWin = dWin + 1;
                            } else {
                                if (g2 == 'e') {
                                    eWin = eWin + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'd') {
                    dLose = dLose + 1;
                    if (g2 == 'a') {
                        aWin = aWin + 1;
                    } else {
                        if (g2 == 'b') {
                            bWin = bWin + 1;
                        } else {
                            if (g2 == 'c') {
                                cWin = cWin + 1;
                            } else {
                                if (g2 == 'e') {
                                    eWin = eWin + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'e') {
                    eLose = eLose + 1;
                    if (g2 == 'a') {
                        aWin = aWin + 1;
                    } else {
                        if (g2 == 'b') {
                            bWin = bWin + 1;
                        } else {
                            if (g2 == 'c') {
                                cWin = cWin + 1;
                            } else {
                                if (g2 == 'd') {
                                    dWin = dWin + 1;
                                }
                            }
                        }
                    }
                }
            }
            if ((najwiekszaParaP == najwiekszaParaD) && (sumaP == sumaD))
            {
                if (g1 == 'a') {
                    aDraw = aDraw + 1;
                    if (g2 == 'b') {
                        bDraw = bDraw + 1;
                    } else {
                        if (g2 == 'c') {
                            cDraw = cDraw + 1;
                        } else {
                            if (g2 == 'd') {
                                dDraw = dDraw + 1;
                            } else {
                                if (g2 == 'e') {
                                    eDraw = eDraw + 1;
                                }
                            }
                        }
                    }
                }

                if (g1 == 'b') {
                    bDraw = bDraw + 1;
                    if (g2 == 'a') {
                        aDraw = aDraw + 1;
                    } else {
                        if (g2 == 'c') {
                            cDraw = cDraw + 1;
                        } else {
                            if (g2 == 'd') {
                                dDraw = dDraw + 1;
                            } else {
                                if (g2 == 'e') {
                                    eDraw = eDraw + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'c') {
                    cDraw = cDraw + 1;
                    if (g2 == 'b') {
                        bDraw = bDraw + 1;
                    } else {
                        if (g2 == 'a') {
                            aDraw = aDraw + 1;
                        } else {
                            if (g2 == 'd') {
                                dDraw = dDraw + 1;
                            } else {
                                if (g2 == 'e') {
                                    eDraw = eDraw + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'd') {
                    dDraw = dDraw + 1;
                    if (g2 == 'b') {
                        bDraw = bDraw + 1;
                    } else {
                        if (g2 == 'c') {
                            cDraw = cDraw + 1;
                        } else {
                            if (g2 == 'a') {
                                aDraw = aDraw + 1;
                            } else {
                                if (g2 == 'e') {
                                    eDraw = eDraw + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'e') {
                    eDraw = eDraw + 1;
                    if (g2 == 'b') {
                        bDraw = bDraw + 1;
                    } else {
                        if (g2 == 'c') {
                            cDraw = cDraw + 1;
                        } else {
                            if (g2 == 'd') {
                                dDraw = dDraw + 1;
                            } else {
                                if (g2 == 'a') {
                                    aDraw = aDraw + 1;
                                }
                            }
                        }
                    }
                }
            }
            if (najwiekszaParaP == najwiekszaParaD && (sumaP > sumaD))
            {
                if (g1 == 'a') {
                    aWin = aWin + 1;
                    if (g2 == 'b') {
                        bLose = bLose + 1;
                    } else {
                        if (g2 == 'c') {
                            cLose = cLose + 1;
                        } else {
                            if (g2 == 'd') {
                                dLose = dLose + 1;
                            } else {
                                if (g2 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }



                if (g1 == 'b')
                {
                    bWin = bWin + 1;
                    if (g2 == 'a') {
                        aLose = aLose + 1;
                    } else {
                        if (g2 == 'c') {
                            cLose = cLose + 1;
                        } else {
                            if (g2 == 'd') {
                                dLose = dLose + 1;
                            } else {
                                if (g2 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }


                if (g1 == 'c')
                {
                    cWin = cWin + 1;
                    if (g2 == 'b') {
                        bLose = bLose + 1;
                    } else {
                        if (g2 == 'a') {
                            aLose = aLose + 1;
                        } else {
                            if (g2 == 'd') {
                                dLose = dLose + 1;
                            } else {
                                if (g2 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }

                if (g1 == 'd')
                {
                    dWin = dWin + 1;
                    if (g2 == 'b') {
                        bLose = bLose + 1;
                    } else {
                        if (g2 == 'c') {
                            cLose = cLose + 1;
                        } else {
                            if (g2 == 'a') {
                                aLose = aLose + 1;
                            } else {
                                if (g2 == 'e') {
                                    eLose = eLose + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'e')
                {
                    eWin = eWin + 1;
                    if (g2 == 'b') {
                        bLose = bLose + 1;
                    } else {
                        if (g2 == 'c') {
                            cLose = cLose + 1;
                        } else {
                            if (g2 == 'd') {
                                dLose = dLose + 1;
                            } else {
                                if (g2 == 'a') {
                                    aLose = aLose + 1;
                                }
                            }
                        }
                    }
                }
            }
            if (najwiekszaParaP == najwiekszaParaD && (sumaP < sumaD)) {
                if (g1 == 'a') {
                    aLose = aLose + 1;
                    if (g2 == 'b') {
                        bWin = bWin + 1;
                    } else {
                        if (g2 == 'c') {
                            cWin = cWin + 1;
                        } else {
                            if (g2 == 'd') {
                                dWin = dWin + 1;
                            } else {
                                if (g2 == 'e') {
                                    eWin = eWin + 1;
                                }
                            }
                        }
                    }
                }


                if (g1 == 'b') {
                    bLose = bLose + 1;
                    if (g2 == 'a') {
                        aWin = aWin + 1;
                    } else {
                        if (g2 == 'c') {
                            cWin = cWin + 1;
                        } else {
                            if (g2 == 'd') {
                                dWin = dWin + 1;
                            } else {
                                if (g2 == 'e') {
                                    eWin = eWin + 1;
                                }
                            }
                        }
                    }
                }

                if (g1 == 'c') {
                    cLose = cLose + 1;
                    if (g2 == 'b') {
                        bWin = bWin + 1;
                    } else {
                        if (g2 == 'a') {
                            aWin = aWin + 1;
                        } else {
                            if (g2 == 'd') {
                                dWin = dWin + 1;
                            } else {
                                if (g2 == 'e') {
                                    eWin = eWin + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'd') {
                    dLose = dLose + 1;
                    if (g2 == 'b') {
                        bWin = bWin + 1;
                    } else {
                        if (g2 == 'c') {
                            cWin = cWin + 1;
                        } else {
                            if (g2 == 'a') {
                                aWin = aWin + 1;
                            } else {
                                if (g2 == 'e') {
                                    eWin = eWin + 1;
                                }
                            }
                        }
                    }
                }
                if (g1 == 'e') {
                    eLose = eLose + 1;
                    if (g2 == 'b') {
                        bWin = bWin + 1;
                    } else {
                        if (g2 == 'c') {
                            cWin = cWin + 1;
                        } else {
                            if (g2 == 'd') {
                                dWin = dWin + 1;
                            } else {
                                if (g2 == 'a') {
                                    aWin = aWin + 1;
                                }
                            }
                        }
                    }
                }
            }


        }






        i = i - 1;
    }
    double iloscGierA;
    double wygraneA;
    double przegraneA;
    double remisyA;

    double iloscGierB;
    double wygraneB;
    double remisyB;
    double przegraneB;

    double iloscGierC;
    double wygraneC;
    double przegraneC;
    double remisyC;

    double iloscGierD;
    double wygraneD;
    double przegraneD;
    double remisyD;

    double iloscGierE;
    double wygraneE;
    double przegraneE;
    double remisyE;

    iloscGierA = aWin + aLose + aDraw;
    wygraneA = (aWin / iloscGierA) * 100;
    przegraneA = (aLose / iloscGierA) * 100;
    remisyA = (aDraw / iloscGierA) * 100;

    iloscGierB = bWin + bLose + bDraw;
    przegraneB = (bLose / iloscGierB) * 100;
    wygraneB = (bWin / iloscGierB) * 100;
    remisyB = (bDraw / iloscGierB) * 100;

    iloscGierC = cWin + cLose + cDraw;
    przegraneC = (cLose / iloscGierC) * 100;
    wygraneC = (cWin / iloscGierC) * 100;
    remisyC = (cDraw / iloscGierC) * 100;

    iloscGierD = dWin + dLose + dDraw;
    przegraneD = (dLose / iloscGierD) * 100;
    wygraneD = (dWin / iloscGierD) * 100;
    remisyD = (dDraw / iloscGierD) * 100;

    iloscGierE = eWin + eLose + eDraw;
    przegraneE = (eLose / iloscGierE) * 100;
    wygraneE = (eWin / iloscGierE) * 100;
    remisyE = (eDraw / iloscGierE) * 100;


    if (iloscGierA != 0)
    {
        cout << "gracz a" << endl;
        if (aWin != 0)
        {
            cout << "    wygrane: " << wygraneA << "%" << endl;
        }
        if (aDraw != 0)
        {
            cout << "    remisy: " << remisyA << "%" << endl;
        }
        if (aLose != 0)
        {
            cout << "    przegrane: " << przegraneA << "%" << endl;
        }
        cout << endl;
    }
    if (iloscGierB != 0)
    {
        cout << "gracz b" << endl;
        if (bWin != 0)
        {
            cout << "    wygrane: " << wygraneB << "%" << endl;
        }
        if (bDraw != 0)
        {
            cout << "    remisy: " << remisyB << "%" << endl;
        }
        if (bLose != 0)
        {
            cout << "    przegrane: " << przegraneB << "%" << endl;
        }
        cout << endl;
    }
    if (iloscGierC != 0)
    {
        cout << "gracz c" << endl;
        if (cWin != 0)
        {
            cout << "    wygrane: " << wygraneC << "%" << endl;
        }
        if (cDraw != 0)
        {
            cout << "    remisy: " << remisyC << "%" << endl;
        }
        if (cLose != 0)
        {
            cout << "    przegrane: " << przegraneC << "%" << endl;
        }
        cout << endl;
    }
    if (iloscGierD != 0)
    {
        cout << "gracz d" << endl;
        if (dWin != 0)
        {
            cout << "    wygrane: " << wygraneD << "%" << endl;
        }
        if (dDraw != 0)
        {
            cout << "    remisy: " << remisyD << "%" << endl;
        }
        if (dLose != 0)
        {
            cout << "    przegrane: " << przegraneD << "%" << endl;
        }
        cout << endl;
    }
    if (iloscGierE != 0)
    {
        cout << "gracz e" << endl;
        if (eWin != 0)
        {
            cout << "    wygrane: " << wygraneE << "%" << endl;
        }
        if (eDraw != 0)
        {
            cout << "    remisy: " << remisyE << "%" << endl;
        }
        if (eLose != 0)
        {
            cout << "    przegrane: " << przegraneE << "%" << endl;
        }
        cout << endl;
    }
    return 0;
}