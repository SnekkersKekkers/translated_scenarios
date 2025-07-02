BGOpen("wf221",0);
ChLayout(1);
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0);
ScrFadeIn(0);
ChMotion(8,1,1);
VoicePlay("B040802200_08_000");
MsgDisp("Shirahane","The wind feels nice!
The sea is so vast!");
MsgSel("The oceean really is grand...","I want to go around the world like this","Look the seabirds are so cute▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(8,0);
    ChMouth(8,4);
    ChMotion(8,2,1);
    VoicePlay("B040802200_08_010");
    MsgDisp("Shirahane","Vast and grand...
They mean the same thung don't they?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("B040802200_08_020");
    MsgDisp("Shirahane","Sounds nice!
I want to indulge like that 
every once in a while.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,2,1);
    ChCheek(8,8);
    VoicePlay("B040802200_08_030");
    MsgDisp("Shirahane","They really are～▼
Hey hey, looks like you can feed them, 
so do you wanna do it together?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
