BGOpen("fp210",0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ChEyeOpenLevel(3,8);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040308101_03_000");
MsgDisp("Honda","The blizzard of falling cherry blossoms is
nice. I'm captivated by it.");
MsgSel("It's really like pink snow","Ah, it's falling into my mouth","There's like 3 centimetres thick of fallen snow");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B040308101_03_010");
    MsgDisp("Honda","Yep yep, they're largish snow 
flakes with well-developed crystals. ");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,3);
    ChMouth(3,1);
    ChMotion(3,5);
    VoicePlay("B040308101_03_020");
    MsgDisp("Honda","Haha!
Awaaa, It's fallen into my mouth too... 
No, I swallowed it∋");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040308101_03_030");
    MsgDisp("Honda","Yep yep.
Over there, there's fresh snow that 
no one has stepped on!");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
