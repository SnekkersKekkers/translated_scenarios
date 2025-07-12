MsgClose();
ChOpen(5,255,4,0,4,#1,#1,0,0);
VoicePlay("B040502300_05_000");
MsgDisp("Hiiragi","You can always feel the 
salty sea breeze here.
I like it.");
MsgSel("It's a popular date spot.","Ah, a black-tailed gull!","I also like it.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(5,2);
    ChMotion(5,0);
    VoicePlay("B040502300_05_010");
    MsgDisp("Hiiragi","I see.
So it's a place everyone likes,
before I voiced my opinion.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(5,0);
    VoicePlay("B040502300_05_020");
    MsgDisp("Hiiragi","Yes, they ride the wind well.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040502300_05_030");
    MsgDisp("Hiiragi","That's most important.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
