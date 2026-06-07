BGOpen("fp210",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
ScrFadeIn(0);
VoicePlay("B040208101_02_000");
MsgDisp("Sassa","It really does look like snow, huh?
It kinda gets me pumped.");
MsgSel("Yeah, it's totally like a cherry blossom blizzard!","｛Sassa＊＊｝ looks like he's about to run.","Don't just look up?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040208101_02_010");
    MsgDisp("Sassa","Truly, people in the olden days had a way
with words.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040208101_02_020");
    MsgDisp("Sassa","Don't make me sound like a dog reacting on reflex.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    ChCheek(2,10);
    VoicePlay("B040208101_02_030");
    MsgDisp("Sassa","Umm...
Are you asking me to look at you?");
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
