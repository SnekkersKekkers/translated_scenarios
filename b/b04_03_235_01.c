BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(3,255,4,0,3,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040323501_03_000");
MsgDisp("Honda","The performance here
changes without warning, so it's
always tense, which is niceー.");
MsgSel("What's changed?","It's be nice if it was always the same though...","Ah, I noticed that too!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("B040323501_03_010");
    MsgDisp("Honda","Ehhh!
First of all, the route is different!");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040323501_03_020");
    MsgDisp("Honda","Yeah, I know how you feel.
It's also fun to brace yourself
for what's coming, isn't it?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040323501_03_030");
    MsgDisp("Honda","Nice!
After this, let's check
each other's answers!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
