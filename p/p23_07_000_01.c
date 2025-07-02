BGMStop(1.7);
Wait(60,0);
BGOpen("sc740",0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    MsgClose();
    ChOpen(7,254,0,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(7);
    VoicePlay("P230700001_07_000");
    MsgDisp("Mikage","｛主人公｝.
How is the Leifeng Pagoda set?");
    MsgDisp("主人公","Ah, ｛御影＊＊｝. It's a bit slanted, but
we somehow made it in time.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("P230700001_07_010");
    MsgDisp("Mikage","Oh, that's good huh?
The slant gives it a more ominous look.");
    MsgDisp("主人公","Hey, this is no laughing matter.
If it collapses, the play will be ruined. 
I'll fix it straight away.");
    VoicePlay("P230700001_47_000");
    MsgDisp("Broadcast","Habataki High School's play will begin
shortly.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P230700001_07_020");
    MsgDisp("Mikage","Alright, let's straighten it up during
scene change.");
    MsgDisp("主人公","Yes!
I hope it holds up until then...!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChEye(7,-1);
ChMouth(7,-1);
