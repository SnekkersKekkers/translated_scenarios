BGOpen("ne340",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040317000_03_000");
MsgDisp("Honda","Everyone likes karaoke, righT?");
MsgSel("I want to hear｛本多＊＊｝'s beautiful voice'","Let's do a duet, the two of us","Please listen to my song");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("B040317000_03_010");
    MsgDisp("Honda","Is that so?
My voice is beautiful?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("B040317000_03_020");
    MsgDisp("Honda","Huh?
But then the listener's role 
will be diminished. Is that okay?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    VoicePlay("B040317000_03_030");
    MsgDisp("Honda","Yep yep, I want to listen!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
