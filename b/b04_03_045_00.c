BGOpen("wf400",1);
ChLayout(1);
ChOpen(3,253,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was great!","Today's event was okay..","Today's event was a letdown.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("B040304500_03_000");
    MsgDisp("Honda","Yeah, it went by so fast. The stage
direction was impressive, wasn't it?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040304500_03_010");
    MsgDisp("Honda","Really? I thought it was good. 
What part was just okay for you?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(3,2);
    ChMouth(3,2);
    ChMotion(3,1);
    VoicePlay("B040304500_03_020");
    MsgDisp("Honda","Huh... Were you really watching the 
same performance as me?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
