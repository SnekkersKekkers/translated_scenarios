BGOpen("wf610",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,3);
ScrFadeIn(0);
VoicePlay("B040406200_04_000");
MsgDisp("Nanatsumori","Oh...
This feels like going into another world.");
MsgSel("The air here is cool and refreshing","I wonder if the water here is deep?","The water glows blue like a jewel...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040406200_04_010");
    MsgDisp("Nanatsumori","That's right, but
Is that the first thing you
say when you see this view?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("B040406200_04_020");
    MsgDisp("Nanatsumori","Is it not deep?
You can't even see the bottom.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040406200_04_030");
    MsgDisp("Nanatsumori","It looks like it's completely covered with
paraiba tourmalines and sapphires... Earth
is amazing.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
