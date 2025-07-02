BGOpen("ne340",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040617000_06_000");
MsgDisp("Himuro","...What are we doing in such 
a stuffy place like this?");
MsgSel("I want to hear｛氷室＊＊｝'s beautiful voice","Let's do a duet together.","Please listen to one song of mine.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040617000_06_010");
    MsgDisp("Himuro","That joke isn't funny.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChEyeOpenLevel(6,7);
    VoicePlay("B040617000_06_020");
    MsgDisp("Himuro","...Ha?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040617000_06_030");
    MsgDisp("Himuro","Don't stop at one song, feel free 
to sing to your heart's content.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
