BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(6,255,0,0,4,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040623101_06_000");
MsgDisp("Himuro","It was lucky that we got to ride at the
front.");
MsgSel("The view was wonderful!","Ehh∋　More like unlucky","Double the thrill...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,3);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040623101_06_010");
    MsgDisp("Himuro","It was like a special seat.
Both the breeze and view were excellent.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040623101_06_020");
    MsgDisp("Himuro","Why?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040623101_06_030");
    MsgDisp("Himuro","I understand how you feel, but to say it
was doubled is a bit of an exaggeration
no?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
