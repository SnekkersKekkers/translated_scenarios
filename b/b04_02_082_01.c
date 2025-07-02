BGOpen("fp200",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040208201_02_000");
MsgDisp("Sassa","When I come to the waterfront, 
I want to throw stones.");
MsgSel("That's dangerous!","Stone skipping is fun, huh","Let's have a contest to see how many times we can get it to skip!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040208201_02_010");
    MsgDisp("Sassa","Do I look like I lack 
that much common sense?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040208201_02_020");
    MsgDisp("Sassa","Heehー, you know? It seems like there's
even a world tournament for it. Next time
let's do it at a river.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040208201_02_030");
    MsgDisp("Sassa","Sounds good. But we can't do it here.
But stone skipping is fun. When I was 
little I even had my own personal stone.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
