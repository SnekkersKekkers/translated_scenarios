BGOpen("tr520",0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040324200_03_000");
MsgDisp("Honda","Cooking over charcoal makes food taste so
much better!");
MsgSel("｛本多＊＊｝, I'm counting on you♪","Camping means ＢＢＱ! ","It seems like it would be a lot of trouble...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(3,2);
    ChMouth(3,2);
    ChMotion(3,0,1);
    VoicePlay("B040324200_03_010");
    MsgDisp("Honda","Really? Why? I don't think it's any fun
unless you do it yourself.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040324200_03_020");
    MsgDisp("Honda","Right right, Let's start with making a
fire without a match!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,0);
    ChMouth(3,2);
    ChMotion(3,2);
    VoicePlay("B040324200_03_030");
    MsgDisp("Honda","Huh?
Maybe I can't enjoy that part～");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
