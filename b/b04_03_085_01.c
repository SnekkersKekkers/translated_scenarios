BGOpen("fp200",0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040308501_03_000");
MsgDisp("Honda","I've heard the rumours, but the winter
scenery is worth having a look at too.");
MsgSel("The fog is rising huh","It appears as if an immortal mountain wizard will appear","Don't fall into the pond, okay?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040308501_03_010");
    MsgDisp("Honda","The spring's water temperature is higher
than the air temperature. The firefly
larvae must be cheerfully feasting on
snails.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040308501_03_020");
    MsgDisp("Honda","Yep yep! That story is found all over the
world. Things like immortal mountain
wizards, goddesses, appear in Aesop's
Fables and Japanese folklore.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,1);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040308501_03_030");
    MsgDisp("Honda","I won't fall but...The way you said it,
are you expecting something to happen? I
won't do it. That sort of thing...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
