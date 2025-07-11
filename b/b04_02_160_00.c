BGOpen("ne330",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
ScrFadeIn(0);
VoicePlay("B040216000_02_000");
MsgDisp("Sassa","What to play is up to you.");
MsgSel("I want to challenge the coin pusher!","How about taking on the quiz game?","Do you want to try the compatibility horoscope?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040216000_02_010");
    MsgDisp("Sassa","Ehhh, I think I can do that too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040216000_02_020");
    MsgDisp("Sassa","That's fine.
Depending on the genre, even I won't lose?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040216000_02_030");
    MsgDisp("Sassa","I guess the game console will tell our
fortunes...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
