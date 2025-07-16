BGOpen("tr510",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ScrFadeIn(0);
VoicePlay("B040224100_02_000");
MsgDisp("Sassa","When there's this much space, it makes me
want to dash.");
MsgSel("It feels nice to be surrounded by nature!","...There's nothing here.","That cow keeps looking over here...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040224100_02_010");
    MsgDisp("Sassa","Yeah.
Well, with that we end up wondering what
to do.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040224100_02_020");
    MsgDisp("Sassa","That's rightー.
Isn't running the only option?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040224100_02_030");
    MsgDisp("Sassa","Heyー.
Do you need something?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
