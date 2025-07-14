BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B030606001_06_000");
MsgDisp("Himuro","What should we do?");
MsgSel("Let's go to the beach!","Why don't we go to the Blue Grotto?");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B030606001_06_010");
    MsgDisp("Himuro","That's good.
You're full of energy.");
    break ;
    case 1:
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B030606001_06_020");
    MsgDisp("Himuro","It's really beautiful over there.
Let's go.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
