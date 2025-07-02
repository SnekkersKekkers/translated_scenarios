BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(6,255,0,0,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040623501_06_000");
MsgDisp("Himuro","Why do the ghosts look like that?");
MsgSel("It's because we don't understand it that it's scary","To frighten?","There's no reasoning for it.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("B040623501_06_010");
    MsgDisp("Himuro","Yeah, agreed.
I wonder if it would be scary if we
understood it. That's 
an excellent viewpoint.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040623501_06_020");
    MsgDisp("Himuro","Even so, it's not reasonable.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,1);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040623501_06_030");
    MsgDisp("Himuro","It's too absurd.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
