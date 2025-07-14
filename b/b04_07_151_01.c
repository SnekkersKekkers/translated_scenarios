BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ScrFadeIn(0);
VoicePlay("B040715101_07_000");
MsgDisp("Mikage","No matter how many games you play, it's
great. To think that just throwing a heavy
ball is so much fun.");
MsgSel("You'll get muscle pain.","If you can throw it straight, that is","It's a great body workout!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040715101_07_010");
    MsgDisp("Mikage","That's it, that's it.
I don't get muscle pain that often.
I look forward to it～!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040715101_07_020");
    MsgDisp("Mikage","Watch carefully, okay～?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040715101_07_030");
    MsgDisp("Mikage","So you can have fun while getting fit.
Bowling is awesome.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
