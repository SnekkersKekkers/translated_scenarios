MsgSel("Ask to walk home together","Ask to go to a cafe","Go home alone");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(22,6)){
        case 0:
        case 1:
        case 2:
        MsgDisp("主人公","｛ひかる＊｝.");
        MsgClose();
        BGMPlay("BGM_C22_HIKARU_A",0.01);
        ChOpen(22,254,0,0,0,#1,#1,0,0);
        ChEye(22,0);
        ChMouth(22,3);
        ChMotion(22,3,1);
        VoicePlay("F012200002_22_000");
        MsgDisp("Hikaru","Oh, Mari!");
        MsgDisp("主人公","If it's alright, why don't we go home
together?");
        break ;
        case 3:
        MsgDisp("主人公","｛ひかる＊｝.");
        MsgClose();
        BGMPlay("BGM_C22_HIKARU_A",0.01);
        ChOpen(22,254,0,0,0,#1,#1,0,0);
        ChEye(22,0);
        ChMouth(22,3);
        ChMotion(22,3,1);
        VoicePlay("F012200002_22_010");
        MsgDisp("Hikaru","Oh, Mari!
Going home now?");
        MsgDisp("主人公","Yes.
If it's alright, why dont' we go home
together?");
        break ;
        case 4:
        case 5:
        MsgDisp("主人公","｛ひかる＊｝.");
        MsgClose();
        BGMPlay("BGM_C22_HIKARU_A",0.01);
        ChOpen(22,254,0,0,0,#1,#1,0,0);
        ChEye(22,0);
        ChMouth(22,3);
        ChMotion(22,3,1);
        VoicePlay("F012200002_22_020");
        MsgDisp("Hikaru","Mari!
What a coincidence～");
        MsgDisp("主人公","Hehe.
If it's alright, why dont' we go home
together?");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    MsgDisp("主人公","｛ひかる＊｝.");
    MsgClose();
    BGMPlay("BGM_C22_HIKARU_A",0.01);
    ChOpen(22,254,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","How about we go to a cafe?");
    break ;
    case 2:
    MsgDisp("主人公","Oh, I see...
I'll go home alone.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
