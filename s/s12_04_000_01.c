BGOpen("ho000",0);
ChLayout(1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    MsgDisp("主人公","Thank you for walking me home.");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("S120400001_04_000");
    MsgDisp("Nanatsumori","No problem.");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("S120400001_04_010");
    MsgDisp("Nanatsumori","Promise me that you won't eat too 
much rice cake this year, okay?");
    MsgDisp("主人公","Yessir!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("S120400001_04_020");
    MsgDisp("Nanatsumori","Seeya.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    MsgClose();
    ChClose(4,0,30);
    Wait(30);
    MsgDisp("主人公","(A New Year, huh...
I wonder what type of year this will be?)");
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("S120400001_04_030");
    MsgDisp("Nanatsumori","......It's time.");
    MsgDisp("主人公","It was fun hanging out with you!");
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,2,1);
    VoicePlay("S120400001_04_040");
    MsgDisp("Nanatsumori","Ahh.
It's not enough somehow......");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("S120400001_04_050");
    MsgDisp("Nanatsumori","......
Negativity isn't good first thing in the
New Year.");
    MsgDisp("主人公","Hehe!
We'll see each other again soon, right?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("S120400001_04_060");
    MsgDisp("Nanatsumori","Absolutely.
Bye then.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    MsgClose();
    ChClose(4,0,30);
    Wait(30);
    MsgDisp("主人公","(I hope this year will be good
as well......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
