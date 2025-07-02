BGOpen("tr510",0);
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040524100_05_000");
MsgDisp("Hiiragi","The wind feels nice.");
MsgSel("The feeling of being surrounded by nature is great!","...It's a place with nothing there.","That cow keeps looking this way...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("B040524100_05_010");
    MsgDisp("Hiiragi","Yes, a great opportunity.
Let's take our time and enjoy
ourselves today.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,0);
    VoicePlay("B040524100_05_020");
    MsgDisp("Hiiragi","Not at all. They've got horseback riding,
milking experiences, gift shops—
they're doing their best");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("B040524100_05_030");
    MsgDisp("Hiiragi","The goats and horses... are looking 
at us. We're the ones in the way,
let's go greet them.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
