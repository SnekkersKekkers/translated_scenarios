BGOpen("wf610",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040506200_05_000");
MsgDisp("Hiiragi","Habataki City has an endless supply of
tourist attractions.");
MsgSel("The air is chilly, and feels nice","I wonder if the water is deep here?","The water's surface is shining blue, like a jewel...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,3);
    VoicePlay("B040506200_05_010");
    MsgDisp("Hiiragi","Yes, the contrast between this and the
beach is amazing.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040506200_05_020");
    MsgDisp("Hiiragi","Ah, 
don't get too close.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,3);
    VoicePlay("B040506200_05_030");
    MsgDisp("Hiiragi","Yes, it's a deep indigo blue.
Or maybe it's closer to purple.
I like this color.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
