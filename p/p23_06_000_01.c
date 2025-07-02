BGMStop(1.7);
Wait(60,0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Phew, I somehow made it in time...)");
    MsgClose();
    ChOpen(6,30,0,0,0,-1,-1,0,0);
    VoicePlay("P230600001_06_000");
    MsgDisp("Himuro","We were able to make quite an impressive 
set, weren't we?");
    MsgDisp("主人公","We barely just made it though.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P230600001_06_010");
    MsgDisp("Himuro","After this, all that's left is 
to watch over it until it ends safely.
It'd be nice if there were no failures.");
    MsgDisp("主人公","It'll be alright.
Everyone gave it their best!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P230600001_06_020");
    MsgDisp("Himuro","Ah, right.");
    VoicePlay("P230600001_47_000");
    MsgDisp("Broadcast","Habataki High School's play will begin
shortly.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P230600001_06_030");
    MsgDisp("Himuro","Ah, it's starting.");
    MsgDisp("主人公","Yeah, isn't it a special seat?");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0,1);
    VoicePlay("P230600001_06_040");
    MsgDisp("Himuro","Well, 
you can literally see the backstage.");
    MsgDisp("主人公","Hehe.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChEye(6,0);
ChMouth(6,0);
ChEyeOpenLevel(6,-1);
ChCheek(6,0);
