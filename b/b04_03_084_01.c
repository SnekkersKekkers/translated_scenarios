BGOpen("fp200",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
ScrFadeIn(0);
VoicePlay("B040308401_03_000");
MsgDisp("Honda","Hey, look.
The leaves of the broad leaf tree 
are falling into the pond.");
MsgSel("The color-changing leaves are pretty!","I wonder if it'll dirty the pond water?","The firefly habitat is wonderful in the fall too");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,4);
    ChEye(3,0);
    ChMotion(3,0);
    VoicePlay("B040308401_03_010");
    MsgDisp("Honda","Yep yep, It's amazing that you can't tell
whether the autumn colours are reflected
on the water's surface...or fallen leaves
are actually floating on the water.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040308401_03_020");
    MsgDisp("Honda","The fallen leaves will become food for the
little snails, and then these snails will
be eaten by the firefly larvae. Hey, the
cycle is complete huh?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("B040308401_03_030");
    MsgDisp("Honda","Yeah, it's a scene that can 
only be seen in this time of year.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
