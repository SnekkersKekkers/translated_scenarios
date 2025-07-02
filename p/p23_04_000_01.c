MsgClose();
BGMStop(1.7);
Wait(60,0);
BGOpen("sc740",0);
ChLayout(1);
ChNanaType(0);
ChOpen(4,30,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Phew...
I wonder if all the performer's makeup 
are done now?");
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("P230400001_04_000");
    MsgDisp("Nanatsumori","It's done.
Goodd work.");
    MsgDisp("主人公","When it's a fantasy piece, it really keeps
the costume department busy, huh?");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,2,1);
    VoicePlay("P230400001_04_010");
    MsgDisp("Nanatsumori","This performance has a lot of special
effects makeup. It was worth it-.");
    MsgDisp("主人公","Hehe, that's right huh!");
    VoicePlay("P230400001_47_000");
    MsgDisp("Broadcast","Habataki High School's play will begin
shortly.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P230400001_04_020");
    MsgDisp("Nanatsumori","Well. Our work continues until the curtain
falls.");
    MsgDisp("主人公","Yeah, let's give it our all!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
