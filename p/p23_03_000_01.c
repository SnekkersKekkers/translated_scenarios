BGMStop(1.7);
Wait(60,0);
BGOpen("sc740",0);
MsgClose();
ChOpen(3,30,1,0,3,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0,60);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    break ;
    case 4:
    case 5:
    VoicePlay("P230300001_03_000");
    MsgDisp("Honda","Hooray!
The set was well-put together,");
    MsgDisp("主人公","Good work.
Seems like we made it in time.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,3,1);
    VoicePlay("P230300001_03_010");
    MsgDisp("Honda","Can you believe the wall
fell over at the last rehearsal?
Haha.");
    MsgDisp("主人公","Hey, this is no laughing matter?
But, thanks for fixing it.");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("P230300001_03_020");
    MsgDisp("Honda","Maybe the blend of adhesive wasn't good?
I played around with it a lot,
mixing dyes to make it less noticeable.");
    MsgDisp("主人公","Hehe.
But it was like an experiment;
it was a lot of fun.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P230300001_03_030");
    MsgDisp("Honda","Yeah. But it's a good thing it broke
during rehearsal.");
    VoicePlay("P230300000_47_000");
    MsgDisp("Broadcast","Habataki High School's play will begin
shortly.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("P230300001_03_040");
    MsgDisp("Honda","I guess the rest will have to be fixed
during scene changes?
Hey, let's enjoy the show.");
    MsgDisp("主人公","(Alright, now all that's left is
to wish the show is a success!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(3,-1);
ChCheek(3,0);
