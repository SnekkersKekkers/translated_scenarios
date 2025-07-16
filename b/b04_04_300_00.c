BGOpen("bh410",0);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
VoicePlay("B040430000_04_000");
MsgDisp("Nanatsumori","Just hang your coat up anywhere.
I'll bring you something to drink.");
MsgSel("This is a wonderful room!","This is a very boyish room","...It sure is a unique room, isn't it?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040430000_04_010");
    MsgDisp("Nanatsumori","Is that so?
This is my first time bringing a girl up
here, so it's kinda embarrassing.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,0);
    ChMouth(4,2);
    ChMotion(4,2,1);
    VoicePlay("B040430000_04_020");
    MsgDisp("Nanatsumori","It's a bit messy, but it's not unclean,
okay?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("B040430000_04_030");
    MsgDisp("Nanatsumori","Well, I'll take that as a compliment.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
