BGOpen("ho100",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_001");
SEWait();
SEPlay("EV_SE_DOOR_022");
SEWait();
ChOpen(3,255,0,0,0,#1,#1,0,0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S060300000_03_000");
    MsgDisp("Honda","Happy New Year!
Are you ready?");
    MsgDisp("主人公","Happy New Year.
Yep, I'm fine.
It's finished.");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoiceEVSPlay(3);
    VoicePlay("S060300000_03_010");
    MsgDisp("Honda","｛主人公｝, sorry for the wait.
Happy New Year!");
    MsgDisp("主人公","Happy New Year.
I'm ready to go.");
    break ;
    case 4:
    case 5:
    ChSet(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("S060300000_03_020");
    MsgDisp("Honda","Happy New Year!");
    MsgDisp("主人公","Happy New Year.");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("S060300000_03_030");
    MsgDisp("Honda","Hehe.
You're the first person I've seen this
year apart from my family.");
    MsgDisp("主人公","Oh, I think it's the same for me.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S060300000_03_040");
    MsgDisp("Honda","Yesss!
I'm so happy I walked all the way here.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChEyeOpenLevel(3,#1);
ChCheek(3,0);
