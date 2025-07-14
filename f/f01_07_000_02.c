MsgSel("Ask to walk home together","Ask to go to a cafe","Go home alone");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        MsgDisp("主人公","｛御影＊＊｝.");
        MsgClose();
        BGMPlay("BGM_C07_MIKAGE_A",0.01);
        ChOpen(7,254,0,0,0,#1,#1,0,0);
        VoicePlay("F010700002_07_000");
        MsgDisp("Mikage","Oh, what is it?");
        MsgDisp("主人公","If it's okay, can we go home together?");
        break ;
        case 3:
        MsgDisp("主人公","｛御影＊＊｝.");
        MsgClose();
        BGMPlay("BGM_C07_MIKAGE_A",0.01);
        ChOpen(7,254,0,0,0,#1,#1,0,0);
        VoicePlay("F010700002_07_010");
        MsgDisp("Mikage","Hm? Do you want something?");
        MsgDisp("主人公","Yes. If it's okay, can we go home
together?");
        break ;
        case 4:
        case 5:
        MsgDisp("主人公","｛御影＊＊｝.");
        MsgClose();
        BGMPlay("BGM_C07_MIKAGE_A",0.01);
        ChOpen(7,254,0,0,0,#1,#1,0,0);
        VoicePlay("SS0007005_07_000");
        MsgDisp("Mikage","Hm? Do you want something?");
        MsgDisp("主人公","Yes. If it's okay, can we go home
together?");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    MsgDisp("主人公","｛御影＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","If it's okay, how about we go to a cafe?");
    break ;
    case 2:
    MsgDisp("主人公","Oh, okay...
I'll go home alone today.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
