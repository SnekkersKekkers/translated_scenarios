MsgSel("Ask to walk home together","Ask to go to a cafe","Go home alone");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        MsgDisp("主人公","｛颯砂＊＊｝.");
        MsgClose();
        BGMPlay("BGM_C02_SASSA_A",0.01);
        ChOpen(2,254,0,0,4,#1,#1,0,0);
        VoicePlay("F010200002_02_000");
        MsgDisp("Sassa","Uh, what's up?");
        MsgDisp("主人公","I was thinking about walking home with
you.");
        break ;
        case 3:
        MsgClose();
        BGMPlay("BGM_C02_SASSA_A",0.01);
        ChOpen(2,254,0,0,4,#1,#1,0,0);
        VoicePlay("F010200002_02_010");
        MsgDisp("Sassa","Right now?");
        MsgDisp("主人公","Yeah. Let's go together.");
        break ;
        case 4:
        case 5:
        MsgClose();
        BGMPlay("BGM_C02_SASSA_A",0.01);
        ChOpen(2,254,3,0,3,#1,#1,0,0);
        VoicePlay("F010200002_02_020");
        MsgDisp("Sassa","Oh, good timing.");
        MsgDisp("主人公","That's great.
Should we go together?");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    MsgDisp("主人公","｛颯砂＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,254,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","Hey, why don't we go to a cafe?");
    break ;
    case 2:
    MsgDisp("主人公","Well, okay...
I guess I'll go home alone.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
