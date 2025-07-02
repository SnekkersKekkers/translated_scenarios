MsgSel("Ask to walk home together","Ask to go to a cafe","Go home alone");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        MsgDisp("主人公","｛七ツ森＊｝.");
        MsgClose();
        BGMPlay("BGM_C04_NANA_A",0.01);
        ChNanaType(0);
        ChOpen(4,254,0,0,0,-1,-1,0,0);
        VoicePlay("F010400002_04_000");
        MsgDisp("Nanatsumori","What?");
        MsgDisp("主人公","If it's okay, how about we walk home 
together?");
        break ;
        case 3:
        MsgDisp("主人公","｛七ツ森＊｝.");
        MsgClose();
        BGMPlay("BGM_C04_NANA_A",0.01);
        ChNanaType(0);
        ChOpen(4,254,0,0,4,-1,-1,0,0);
        VoicePlay("F010400002_04_010");
        MsgDisp("Nanatsumori","Yo.
Are you going home right now?");
        MsgDisp("主人公","Yeah.
If its okay, how about we walk home
together?");
        break ;
        case 4:
        case 5:
        MsgDisp("主人公","｛七ツ森＊｝.");
        MsgClose();
        BGMPlay("BGM_C04_NANA_A",0.01);
        ChNanaType(0);
        ChOpen(4,254,0,0,3,-1,-1,0,0);
        VoicePlay("F010400002_04_020");
        MsgDisp("Nanatsumori","Yo. You made it.");
        MsgDisp("主人公","Hehe, you made it, too.
Well then, how about we walk together?");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    MsgDisp("主人公","｛七ツ森＊｝.");
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,-1,-1,0,0);
    MsgDisp("主人公","Hey, how about we go to a cafe?");
    break ;
    case 2:
    MsgDisp("主人公","Well, okay...
I'll go home alone.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
