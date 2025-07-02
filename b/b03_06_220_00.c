BGOpen("tr300",0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030622000_06_000");
MsgDisp("Himuro","The pride of the city, Habataki
Castle, huh......");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B030622000_06_010");
MsgDisp("Himuro","So, what do you want to do?");
MsgSel("I want to go to the tower","Let's check out the exhibition");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B030622000_06_020");
    MsgDisp("Himuro","That's right.
It would be cool to have a nice view.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B030622000_06_030");
    MsgDisp("Himuro","Even the weekends are a chance to
learn, huh.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
