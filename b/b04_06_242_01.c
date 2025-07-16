BGOpen("tr520",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ScrFadeIn(0);
VoicePlay("B040624201_06_000");
MsgDisp("Himuro","I wonder if negative ions are being
emitted...");
MsgSel("Take a deep breath!","It's so healing...","Is it from me?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0,1);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040624201_06_010");
    MsgDisp("Himuro","Hu... haaa..
Yeah, the water is fresh.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040624201_06_020");
    MsgDisp("Himuro","You look sleepy.
You're so easy to understand");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,5);
    VoicePlay("B040624201_06_030");
    MsgDisp("Himuro","Pfft... what's with that?
But if it's you, that's possible");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
