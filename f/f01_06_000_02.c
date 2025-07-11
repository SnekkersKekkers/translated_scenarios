MsgSel("Ask to walk home together","Ask to go to a cafe","Go home alone");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        MsgDisp("主人公","｛氷室＊＊｝.");
        MsgClose();
        BGMPlay("BGM_C06_INORI_A",0.01);
        ChOpen(6,254,0,0,0,-1,-1,0,0);
        VoicePlay("F010600002_06_000");
        MsgDisp("Himuro","What?");
        MsgDisp("主人公","If it's alright, how about we walk home
together?");
        break ;
        case 3:
        MsgDisp("主人公","｛氷室＊＊｝.");
        MsgClose();
        BGMPlay("BGM_C06_INORI_A",0.01);
        ChOpen(6,254,0,0,0,-1,-1,0,0);
        VoicePlay("F010600002_06_010");
        MsgDisp("Himuro","Are you going home now?");
        MsgDisp("主人公","Yes.
If it's alright, we should go together.");
        break ;
        case 4:
        case 5:
        MsgDisp("主人公","｛氷室＊＊｝.");
        MsgClose();
        BGMPlay("BGM_C06_INORI_A",0.01);
        ChOpen(6,254,4,0,0,-1,-1,5,0);
        VoicePlay("F010600002_06_020");
        MsgDisp("Himuro","...What?");
        MsgDisp("主人公","Um, would you want to walk home
together?");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    MsgDisp("主人公","｛氷室＊＊｝.");
    MsgClose();
    ChOpen(6,254,0,0,0,-1,-1,0,0);
    MsgDisp("主人公","Hey, how about we go to a cafe?");
    break ;
    case 2:
    MsgDisp("主人公","Oh, that's fine...
I'll go home alone.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
