BGOpen("wf400",1);
ChLayout(1);
ChOpen(7,254,0,0,3,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B040704500_07_000");
MsgDisp("Mikage","As expected, this is the citizen 
theatre troupe that Habataki City
can be proud of.");
MsgSel("It doesn't seem like I can return to reality...","The stage decorations are pretty. ","I'll give them a tip");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040704500_07_010");
    MsgDisp("Mikage","Me too.
If I suddenly break into song, 
please stop me!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040704500_07_020");
    MsgDisp("Mikage","Looks like you've learned a lot.
I think so too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("B040704500_07_030");
    MsgDisp("Mikage","Don't give it to them.
You're not supposed to give or receive 
money during class field trips, right～?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
