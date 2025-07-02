BGOpen("fp200",0);
ChLayout(1);
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B040808201_08_000");
MsgDisp("Shirahane","The water surface is sparkling,
it's truly beautiful.");
MsgSel("Want to read some poetry?","It's super magical...","Fair words will not fill the belly!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(8,2);
    ChMouth(8,5);
    ChMotion(8,4,1);
    VoicePlay("B040808201_08_010");
    MsgDisp("Shirahane","Eh∋
Don't dump something that 
unreasonable onto me...");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(8,3);
    ChMouth(8,0);
    ChMotion(8,2,1);
    VoicePlay("B040808201_08_020");
    MsgDisp("Shirahane","Right.
Looking at it makes me feel like I've
transported to another world.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("B040808201_08_030");
    MsgDisp("Shirahane","Are you hungry?
Actually... me too.
Let's get something to eat!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
