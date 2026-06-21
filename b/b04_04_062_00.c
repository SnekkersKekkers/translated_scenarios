BGOpen("wf610",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,3);
ScrFadeIn(0);
VoicePlay("B040406200_04_000");
MsgDisp("Nanatsumori","Oh...
This feels like going into another world.");
MsgSel("The air feels so nice and cool.","Is the water deep here?","The water's surface shines blue like a jewel...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040406200_04_010");
    MsgDisp("Nanatsumori","That's right, but is that the first thing
you say when you see this view?");
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
    MsgDisp("Nanatsumori","It looks like it's completely paved with
Paraiba tourmalines and sapphires...
The Earth is amazing.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
