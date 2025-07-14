BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ScrFadeIn(0);
ChMotion(6,4,1);
VoicePlay("B040622100_06_000");
MsgDisp("Himuro","You can see the whole of Habataki City in
one glance.");
MsgSel("It's a nice view!","I get tired of looking at it","I feel like Ishikawa Gouemon");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040622100_06_010");
    MsgDisp("Himuro","Well, it is pretty high.
It's not bad to enjoy the view.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(6,1);
    ChMouth(6,1);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040622100_06_020");
    MsgDisp("Himuro","Why did you come here then?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("B040622100_06_030");
    MsgDisp("Himuro","Would you say it's \"A great view\"?
Your joke is smart and funny.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
