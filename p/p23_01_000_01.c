BGMStop(1.7);
Wait(60,0);
BGOpen("sc740",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgClose();
    ChOpen(1,30,0,0,0,#1,#1,0,0);
    VoicePlay("P230100001_01_000");
    MsgDisp("Kazama","Phew, I've fixed the pumpkin carriage
wheel first.");
    MsgDisp("主人公","Good work.
I hope it holds up until the end.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("P230100001_01_010");
    MsgDisp("Kazama","Right.
This must be how a parent feels watching
after their own child.");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    VoicePlay("P230100001_47_000");
    MsgDisp("Broadcast","We will now begin Habataki High School's
play.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P230100001_01_020");
    MsgDisp("Kazama","Alright, concentrate.
We'll reinforce it during the next scene.");
    MsgDisp("主人公","Yeah, I got it.");
    MsgClose();
    ScrFadeOut(0,0);
    ChEyeOpenLevel(1,#1);
    ChMouthOpenLevel(1,#1);
    ChCheek(1,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
