BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040123101_01_000");
MsgDisp("Kazama","The intensity at the front sure is
different.");
MsgSel("Yeah, we were lucky.","the wind was so strong my hair got all messed up","I think something fell into my mouth...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,4);
    ChCheek(1,5);
    VoicePlay("B040123101_01_010");
    MsgDisp("Kazama","That's right.
Seeing you so happy, makes me happy too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040123101_01_020");
    MsgDisp("Kazama","Haha, that's fine.
I don't think that kind of hairstyle looks
bad.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040123101_01_030");
    MsgDisp("Kazama","What was it? Open your mouth a bit, come
on. Aaahー.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
