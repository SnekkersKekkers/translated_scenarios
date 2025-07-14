BGOpen("wf400",1);
ChLayout(1);
ChOpen(2,253,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was good!","Today's event was okay.","Today's event was awful.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040204200_02_000");
    MsgDisp("Sassa","The trapeze was awesome.
That part where they almost fell was
staged, right?∋");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040204200_02_010");
    MsgDisp("Sassa","I guess...... That clown dragged us around
and made us do different things......
Well, it was still a good experience.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,2);
    VoicePlay("B040204200_02_020");
    MsgDisp("Sassa","Seriously? I guess I was the only one
having a lot of fun......");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
