BGOpen("tr220",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040121301_01_000");
MsgDisp("Kazama","It gives you a sense of security that's
different to other animals.");
MsgSel("It's nice to be able to hold and stroke them","t's nice to be able to feed them","Recently, there's been some doggy and kitty cafes.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,0);
    Wait(16,0);
    ChEye(1,3);
    ChMouth(1,3);
    VoicePlay("B040121301_01_010");
    MsgDisp("Kazama","That cat you were holding looked super
annoyed!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040121301_01_020");
    MsgDisp("Kazama","It's said to be high in protein, low in
calories, and made from natural
ingredients. They must be eating better
food than us, right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040121301_01_030");
    MsgDisp("Kazama","It may be fun,
but it must be noisy...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
