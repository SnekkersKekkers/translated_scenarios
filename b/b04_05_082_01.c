BGOpen("fp200",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,4);
ChMotion(5,4);
VoicePlay("B040508201_05_000");
MsgDisp("Hiiragi","The wind feels nice.
The trees are swaying.");
MsgSel("As expected of a power spot.","Shall we walk around the spring?","The fireflies live in a nice place huh");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("B040508201_05_010");
    MsgDisp("Hiiragi","There's rumours you can 
hear one's inner voice yes?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,3);
    VoicePlay("B040508201_05_020");
    MsgDisp("Hiiragi","Let's do that.
I was curious as to where 
the spring water gushes out.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("B040508201_05_030");
    MsgDisp("Hiiragi","Yes.
Habataki city is an exceedingly nice place
to live in for fireflies, yes?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
