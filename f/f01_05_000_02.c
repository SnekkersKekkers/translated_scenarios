MsgSel("Ask to walk home together","Ask to go to a cafe","Go home alone");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        MsgDisp("主人公","｛柊＊＊＊｝.");
        MsgClose();
        BGMPlay("BGM_C05_HIIRAGI_A",0.01);
        ChOpen(5,254,0,0,0,#1,#1,0,0);
        VoicePlay("F010500002_05_000");
        MsgDisp("Hiiragi","Yes. What is it?");
        MsgDisp("主人公","If it's okay, how about we walk home
together?");
        break ;
        case 3:
        MsgDisp("主人公","｛柊＊＊＊｝.");
        MsgClose();
        BGMPlay("BGM_C05_HIIRAGI_A",0.01);
        ChOpen(5,254,0,0,4,#1,#1,0,0);
        VoicePlay("F010500002_05_010");
        MsgDisp("Hiiragi","Are you going home as well?");
        MsgDisp("主人公","Yep.
If its okay, how about we walk home
together?");
        break ;
        case 4:
        case 5:
        MsgDisp("主人公","｛柊＊＊＊｝.");
        MsgClose();
        BGMPlay("BGM_C05_HIIRAGI_A",0.01);
        ChOpen(5,254,0,4,4,#1,#1,0,0);
        VoicePlay("F010500002_05_020");
        MsgDisp("Hiiragi","Meeting others unexpectedly after the bell
rings is one of the greatest pleasures
of high school life. You, especially.");
        MsgDisp("主人公","Hehe.
How about we walk home together?");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    MsgDisp("主人公","｛柊＊＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,254,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","How about we go to a cafe instead?");
    break ;
    case 2:
    MsgDisp("主人公","Well, okay...
I'll go home alone.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
