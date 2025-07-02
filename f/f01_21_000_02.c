ChLayout(1);
MsgSel("Ask to walk home together","Ask to go to a cafe","Go home alone");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(21,6)){
        case 0:
        case 1:
        case 2:
        MsgDisp("主人公","｛みちる＊｝.");
        MsgClose();
        BGMPlay("BGM_C21_MICHIRU_A",0.01);
        ChOpen(21,254,0,0,0,-1,-1,0,0);
        VoicePlay("F012100002_21_000");
        MsgDisp("Michiru","Mari, are you going home now?");
        MsgDisp("主人公","Yes.
If it's alright, how about we walk home
together?");
        break ;
        case 3:
        MsgDisp("主人公","｛みちる＊｝.");
        MsgClose();
        BGMPlay("BGM_C21_MICHIRU_A",0.01);
        ChOpen(21,254,0,0,3,-1,-1,0,0);
        VoicePlay("F012100002_21_010");
        MsgDisp("Michiru","Oh, Mari.
What a coincidence, right?");
        MsgDisp("主人公","Mhm.
If it's alright, how about we walk home
together?");
        break ;
        case 4:
        case 5:
        MsgDisp("主人公","｛みちる＊｝.");
        MsgClose();
        BGMPlay("BGM_C21_MICHIRU_A",0.01);
        ChOpen(21,254,3,3,3,-1,-1,0,0);
        VoicePlay("F012100002_21_020");
        MsgDisp("Michiru","Hehe, Mari.");
        MsgDisp("主人公","Hey, why don't we walk home together?");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    MsgDisp("主人公","｛みちる＊｝.");
    MsgClose();
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    Wait(15,0);
    ChOpen(21,254,0,0,0,-1,-1,0,0);
    MsgDisp("主人公","Hey, how about we go to a cafe?");
    break ;
    case 2:
    MsgDisp("主人公","Oh, okay...
I'll go home alone.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
ChEyeOpenLevel(21,-1);
ChMouthOpenLevel(21,-1);
ChCheek(21,0);
