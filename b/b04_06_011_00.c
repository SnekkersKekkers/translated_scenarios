BGOpen("wf110",0);
ChLayout(1);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040601100_06_000");
MsgDisp("Himuro","This is quite a nice view.
...Yeah, not bad.");
MsgSel("Waa! The horizon looks like it's shining!","I wonder if we can see your house,｛氷室＊＊｝?","It's so high up that I'm frozen with fear...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040601100_06_010");
    MsgDisp("Himuro","Hmm, that outlook isn't bad.
It's definitely beautiful.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040601100_06_020");
    MsgDisp("Himuro","...What's the point of looking for it?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,1);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040601100_06_030");
    MsgDisp("Himuro","You have a fear of heights?
You should have said so
before we came up.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
