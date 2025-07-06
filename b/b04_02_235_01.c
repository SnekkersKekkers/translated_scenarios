BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(2,255,4,2,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040223501_02_000");
MsgDisp("Sassa","Is it fine that I'm morbidly curious
about it because it's scary?");
MsgSel("Scary things are fun too?","Does it seem like something is calling out to us?","It's not scary because I'm with｛颯砂＊＊｝");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,2);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040223501_02_010");
    MsgDisp("Sassa","IT definitely doesn't look that way...");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,2);
    ChMouth(2,0);
    ChMotion(2,5);
    VoicePlay("B040223501_02_020");
    MsgDisp("Sassa","S-Stop.
That was the scariest thing so far.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040223501_02_030");
    MsgDisp("Sassa","Thank you. 
I'm happy even if that was a lie.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
