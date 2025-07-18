BGOpen("wf221",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040502201_05_000");
MsgDisp("Hiiragi","It's windy today.");
MsgSel("It feels nice huh","Shall we go in the cabin!","｛柊＊＊＊｝'s hair is blowing");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("B040502201_05_010");
    MsgDisp("Hiiragi","Yes, but it's a bit sticky, isn't it?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(5,4);
    VoicePlay("B040502201_05_020");
    MsgDisp("Hiiragi","Sounds good.
Let's explore inside the ship.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040502201_05_030");
    MsgDisp("Hiiragi","Heheh, your hair is also being played with
by the wind.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
