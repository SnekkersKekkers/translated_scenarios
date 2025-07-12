MsgSel("Ask to walk home together","Ask to go to a cafe","Go home alone");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        MsgDisp("主人公","｛本多＊＊｝.");
        MsgClose();
        BGMPlay("BGM_C03_HONDA_A",0.01);
        ChOpen(3,254,0,0,4,#1,#1,0,0);
        VoicePlay("F010300002_03_000");
        MsgDisp("Honda","Hm? Do you need something?");
        MsgDisp("主人公","How about we go home together today?");
        break ;
        case 3:
        MsgDisp("主人公","｛本多＊＊｝.");
        MsgClose();
        BGMPlay("BGM_C03_HONDA_A",0.01);
        ChOpen(3,254,4,0,3,#1,#1,0,0);
        VoicePlay("F010300002_03_010");
        MsgDisp("Honda","Hm?　What's up?");
        break ;
        case 4:
        case 5:
        MsgDisp("主人公","｛本多＊＊｝.");
        MsgClose();
        BGMPlay("BGM_C03_HONDA_A",0.01);
        ChOpen(3,254,3,3,3,#1,#1,0,0);
        VoicePlay("F010300002_03_020");
        MsgDisp("Honda","Yeah, what is it?");
        MsgDisp("主人公","How about we go home together today?");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    MsgDisp("主人公","｛本多＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C03_HONDA_A",0.01);
    ChOpen(3,254,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","Hey, how about we go to a cafe?");
    break ;
    case 2:
    MsgDisp("主人公","Well, it's fine...
I'll go home alone.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
