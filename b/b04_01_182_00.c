BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(1,253,0,0,3,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so huh","Today's movie was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040118200_01_000");
    MsgDisp("Kazama","Yeah, a masterpiece of Japanese 
horror was born.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040118200_01_010");
    MsgDisp("Kazama","It feels like it was made with ideas
and passion, I like this 
sort of thing.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040118200_01_020");
    MsgDisp("Kazama","I see. So it was no good.
Isn't that fine? People will either
love this or hate this.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
