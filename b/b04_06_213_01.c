BGOpen("tr220",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ScrFadeIn(0);
ChEye(6,3);
ChMouth(6,5);
ChMotion(6,5,1);
VoicePlay("B040621301_06_000");
MsgDisp("Himuro","W-Wait?
Why are thy coming up to me?");
MsgSel("You sure are popular!","Maybe they think you're of the same kind?","They all love Papa Himuro▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    VoicePlay("B040621301_06_010");
    MsgDisp("Himuro","I'm not especially happy.
Really, I'm serious.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChEyeOpenLevel(6,7);
    VoicePlay("B040621301_06_020");
    MsgDisp("Himuro","...What does that mean?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(6,1);
    ChMouth(6,1);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040621301_06_030");
    MsgDisp("Himuro","I've not crossed the species barrier, nor
do I have any children?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
