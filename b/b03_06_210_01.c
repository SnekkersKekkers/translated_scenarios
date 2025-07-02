BGOpen("tr200",0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Want to check out the Gift Store?","Don't ask");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B030621001_06_000");
    MsgDisp("Himuro","Eh......why.");
    MsgDisp("主人公","Why......?");
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,2);
    ChMotion(6,1);
    VoicePlay("B030621001_06_010");
    MsgDisp("Himuro","Sigh......Got it.
Let's go quickly.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B030621001_06_020");
    MsgDisp("Himuro","What are you doing?
Let's go.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
