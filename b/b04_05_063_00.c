BGOpen("wf620",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,4);
ChMotion(5,2);
VoicePlay("B040506300_05_000");
MsgDisp("Hiiragi","Doesn't the winter sea give off the image
of a strict father?");
MsgSel("We have the winter sea to ourselves!","The winter sea is miserable...","The winter sea has lots of delicious things♪");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,2);
    ChMotion(5,0);
    VoicePlay("B040506300_05_010");
    MsgDisp("Hiiragi","Did you not hear it 
over the sound of the waves?
\"Doesn't the winter sea give off
the image of a strict father?\"");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChMotion(5,4);
    VoicePlay("B040506300_05_020");
    MsgDisp("Hiiragi","Indeed,
that's one way to see it.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,0);
    VoicePlay("B040506300_05_030");
    MsgDisp("Hiiragi","Umm,
did you listen to what I said?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
