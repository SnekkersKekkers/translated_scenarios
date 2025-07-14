BGOpen("wf221",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040602200_06_000");
MsgDisp("Himuro","Feeling the sea breeze is so relaxing.");
MsgSel("The sea really is grand...","Makes you want to go on a trip around the world like this doesn't it?","Look, the sea birds are so cute▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("B040602200_06_010");
    MsgDisp("Himuro","It's the source of life after all.
Undoubtedly, it's the greatest thing on
earth.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040602200_06_020");
    MsgDisp("Himuro","With the size of this ship, that would be
impossible.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040602200_06_030");
    MsgDisp("Himuro","Definitely. I'll never get tired of seeing
it, seeing you in such high spirits.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
