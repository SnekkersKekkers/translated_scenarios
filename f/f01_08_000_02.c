MsgSel("Ask to walk home together","Ask to go to a cafe","Go home alone");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(8,6)){
        case 0:
        case 1:
        case 2:
        MsgDisp("主人公","｛大地＊＊｝!");
        MsgClose();
        BGMPlay("BGM_C08_DAICHI_A",0.01);
        ChLayout(1);
        ChOpen(8,254,0,0,0,#1,#1,0,0);
        ChEye(8,3);
        ChMouth(8,3);
        VoicePlay("F010800002_08_000");
        MsgDisp("Shirahane","Ah...
I really met ya.");
        MsgDisp("主人公","What are you doing here?
And... how about we walk home together?");
        break ;
        case 3:
        MsgDisp("主人公","｛大地＊＊｝!");
        MsgClose();
        BGMPlay("BGM_C08_DAICHI_A",0.01);
        ChLayout(1);
        ChOpen(8,254,0,0,0,#1,#1,0,0);
        ChEye(8,3);
        ChMouth(8,3);
        ChMotion(8,3,1);
        VoiceEVSPlay(8);
        VoicePlay("F010800002_08_010");
        MsgDisp("Shirahane","｛主人公｝, I found ya!");
        MsgDisp("主人公","Were you waiting for me?
Then, let's go home together.");
        break ;
        case 4:
        case 5:
        MsgDisp("主人公","｛大地＊＊｝!");
        MsgClose();
        BGMPlay("BGM_C08_DAICHI_A",0.01);
        ChLayout(1);
        ChOpen(8,254,0,0,0,#1,#1,0,0);
        ChEye(8,3);
        ChMouth(8,0);
        ChCheek(8,3);
        VoiceEVSPlay(8);
        VoicePlay("F010800002_08_020");
        MsgDisp("Shirahane","｛主人公｝.");
        MsgDisp("主人公","｛大地＊＊｝, I found you.
Should we walk home together?");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    MsgDisp("主人公","｛大地＊＊｝!");
    MsgClose();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    ChOpen(8,254,0,0,0,#1,#1,0,0);
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
ChCheek(8,0);
