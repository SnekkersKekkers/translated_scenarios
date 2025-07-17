BGMPlay("BGM_SPORTS_DAY",0.01);
BGOpen("sc760",0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,30,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020600001_06_000");
    MsgDisp("Himuro","Well, the other team was more in sync.");
    MsgDisp("主人公","(I lost...
I wish I tried harder.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,30,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020600001_06_010");
    MsgDisp("Himuro","You fought hard, huh?");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("O020600001_06_020");
    MsgDisp("Himuro","You were the clear winner when it comes to
desperation.");
    MsgDisp("主人公","(I lost...
I wish I tried harder.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,30,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020600001_06_030");
    MsgDisp("Himuro","...You crying?");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("O020600001_06_040");
    MsgDisp("Himuro","It's really childish to be so frustrated
that you start crying.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("O020600001_06_050");
    MsgDisp("Himuro","That's enough, I thought your team would
win, you know?");
    MsgDisp("主人公","...Yeah, thanks.");
    ChEye(6,3);
    ChMouth(6,4);
    ChMotion(6,3);
    ChEyeOpenLevel(6,0);
    VoicePlay("O020600001_06_060");
    MsgDisp("Himuro","It was a good match.
Good work.");
    MsgDisp("主人公","(I lost...
I wish I tried harder.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
