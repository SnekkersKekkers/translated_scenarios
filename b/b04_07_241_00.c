BGOpen("tr510",0);
ChLayout(1);
ChSet(7,0,1);
ScrFadeIn(0);
VoicePlay("B040724100_07_000");
MsgDisp("Mikage","Feel free to try anything!
Anything is fine!");
MsgSel("Then, I'd like to milk a cow...","I want to shear a sheep!","The smell is intense...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B040724100_07_010");
    MsgDisp("Mikage","It's harder than you think.
Go and experience the value of
milk yourself.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,5);
    VoicePlay("B040724100_07_020");
    MsgDisp("Mikage","Oh, be careful not to cause injury.
...On the sheep, that is.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B040724100_07_030");
    MsgDisp("Mikage","What's that?
This is the best perfume.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
