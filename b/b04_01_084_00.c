BGOpen("fp200",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040108400_01_000");
MsgDisp("Kazama","I wonder if you can see autumn leaves like
this so close to the city?");
MsgSel("The leaves are reflected in the clear water","It's like the leaves are floating in mid-air","I want to walk all the way around the pond");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040108400_01_010");
    MsgDisp("Kazama","Yeah, it's like a mirror, being reflected
upside down.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040108400_01_020");
    MsgDisp("Kazama","It looks that way because the water is so
transparent.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040108400_01_030");
    MsgDisp("Kazama","...Sheesh, what would you be doing, going
around in circles like that?
Being out with you isn't so bad, though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
