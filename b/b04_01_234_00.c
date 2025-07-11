BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B040123400_01_000");
MsgDisp("Kazama","It feels like THE amusement park.");
MsgSel("I was merry like a kid!","We got to experience the centrifrugal force.","The ground is spinning...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040123400_01_010");
    MsgDisp("Kazama","Isn't that nice?
Shall we go on it again?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040123400_01_020");
    MsgDisp("Kazama","Yeah, it's tougher than it looks.
I underestimated it a bit.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0,1);
    VoicePlay("B040123400_01_030");
    MsgDisp("Kazama","Are you alright?
Shall we take a bit of a break?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
