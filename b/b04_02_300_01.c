BGOpen("bh210",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ScrFadeIn(0);
VoicePlay("B040230001_02_000");
MsgDisp("Sassa","It's quite barren huh?");
MsgSel("There's a lot of trophies huh?","I want to see｛颯砂＊＊｝'s albums'","There's a lot of green huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040230001_02_010");
    MsgDisp("Sassa","This isn't really my taste
I only display trophies from 
competitions I'm interested in.");
    MsgDispBGSksp(1,2);
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
    VoicePlay("B040230001_02_020");
    MsgDisp("Sassa","That's fine, it's my middle school album.
Well, I'm the biggest one there though,");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040230001_02_030");
    MsgDisp("Sassa","Yeah, I like green.
Whenever I'm buying something, 
I end up choosing it in green.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
