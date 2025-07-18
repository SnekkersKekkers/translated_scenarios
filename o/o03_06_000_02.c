BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,30,2,1,0,0,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030600002_06_000");
    MsgDisp("Himuro","...I didn't expect this result.
How humiliating.");
    MsgDisp("主人公","(Ugh...
Last...
We weren't in sync at all.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,30,2,0,0,0,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030600002_06_010");
    MsgDisp("Himuro","Haa...
We weren't in sync at all.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("O030600002_06_020");
    MsgDisp("Himuro","Are we incompatible?");
    MsgDisp("主人公","(Ugh...
Last...
We weren't in sync at all.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,30,2,2,0,0,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030600002_06_030");
    MsgDisp("Himuro","...Haa.");
    MsgDisp("主人公","｛氷室＊＊｝, sorry...
I couldn't match you well.");
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("O030600002_06_040");
    MsgDisp("Himuro","You don't have to apologize.
I couldn't match you either.");
    ChEye(6,2);
    ChMouth(6,2);
    ChMotion(6,2);
    VoicePlay("O030600002_06_050");
    MsgDisp("Himuro","Even though I was pretty confident that I
would be able to match with you...");
    MsgDisp("主人公","(｛氷室＊＊｝...
We weren't in sync at all.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
