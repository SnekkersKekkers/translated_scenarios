MsgSel("Ask to walk home together","Ask to go to a cafe","Go home alone");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        MsgDisp("主人公","｛風真＊＊｝.");
        MsgClose();
        BGMPlay("BGM_C01_RYOUTA_A",0.01);
        ChOpen(1,254,0,0,0,-1,-1,0,0);
        VoicePlay("F010100002_01_000");
        MsgDisp("Kazama","What?");
        MsgDisp("主人公","If it's okay, can we go home together?");
        break ;
        case 3:
        MsgDisp("主人公","｛風真＊＊｝.");
        MsgClose();
        BGMPlay("BGM_C01_RYOUTA_A",0.01);
        ChOpen(1,254,0,0,3,-1,-1,0,0);
        VoicePlay("F010100002_01_010");
        MsgDisp("Kazama","Oh, are you going now?");
        MsgDisp("主人公","Yeah.
If it's alright, lets go together.");
        break ;
        case 4:
        case 5:
        MsgDisp("主人公","｛風真＊＊｝.");
        MsgClose();
        BGMPlay("BGM_C01_RYOUTA_A",0.01);
        ChOpen(1,254,0,4,3,-1,-1,0,0);
        VoiceEVSPlay(1);
        VoicePlay("F010100002_01_020");
        MsgDisp("Kazama","｛主人公｝.
Are we leaving at the same time again?");
        MsgDisp("主人公","Seems like it.
We're in the same class, after all.
Should we go together?");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    MsgDisp("主人公","｛風真＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,254,0,0,0,-1,-1,0,0);
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
ChEyeOpenLevel(1,-1);
ChMouthOpenLevel(1,-1);
ChCheek(1,0);
