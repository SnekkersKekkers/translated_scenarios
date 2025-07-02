BGOpen("wf221",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040202201_02_000");
MsgDisp("Sassa","The tides seem high today.");
MsgSel("It's windy, huh?","You should hold on","Do you not like being at sea?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040202201_02_010");
    MsgDisp("Sassa","I guess you're right.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1,1);
    VoicePlay("B040202201_02_020");
    MsgDisp("Sassa","I'm completely fine.
I can even stand on my tippy toes.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,0);
    VoicePlay("B040202201_02_030");
    MsgDisp("Sassa","Eh?
Does it seem that way?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
