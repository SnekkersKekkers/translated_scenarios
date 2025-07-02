switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","Good morning, ｛颯砂＊＊｝ .");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(2,254,3,0,4,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("Q090200000_02_000");
    MsgDisp("Sassa","｛主人公｝ , Mornin.
Thanks in advance for today!");
    MsgDisp("主人公","Yeah!
Well, let's go.");
    break ;
    case 3:
    MsgDisp("主人公","......Ah, ｛颯砂＊＊｝ !");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(2,254,3,0,4,-1,-1,0,0);
    VoicePlay("Q090200000_02_010");
    MsgDisp("Sassa","Mornin!");
    MsgDisp("主人公","Good morning!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("Q090200000_02_020");
    MsgDisp("Sassa","Let's go already.
Let's have fun today.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛颯砂＊＊｝ , Good morning!");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(2,254,0,0,4,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("Q090200000_02_030");
    MsgDisp("Sassa","｛主人公｝ , Mornin.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,0);
    ChEyeOpenLevel(2,0);
    VoicePlay("Q090200000_02_040");
    MsgDisp("Sassa","You're going sightseeing to the limit
today, aren't you?");
    MsgDisp("主人公","Hehe, like athletics?");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("Q090200000_02_050");
    MsgDisp("Sassa","Yeah, It's the same.
All for one, make sure not to make 
regrets.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("Q090200000_02_060");
    MsgDisp("Sassa","Since I don't know when I can go 
sightseeing in Nagasaki with you again.");
    MsgDisp("主人公","Yeah, that's true.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("Q090200000_02_070");
    MsgDisp("Sassa","Let's have fun.
C'mon, let's go.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
