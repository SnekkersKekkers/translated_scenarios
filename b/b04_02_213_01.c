BGOpen("tr220",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040221301_02_000");
MsgDisp("Sassa","Seems like you can feed them a snack.");
MsgSel("I want to give some to the doggies","I want to give some to the kitties!","What about snacks for humans?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,0);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040221301_02_010");
    MsgDisp("Sassa","Alright alright.
Big dogs are cool but, small ones are nice
too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040221301_02_020");
    MsgDisp("Sassa","Yeah.
Meat for dogs, fish for cats.
The flavour is different.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,0);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040221301_02_030");
    MsgDisp("Sassa","Haha, you'll have to wait for now.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
