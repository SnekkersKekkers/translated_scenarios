BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChLayout(1);
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,2);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
VoicePlay("B040406101_04_000");
MsgDisp("Nanatsumori","Ahー... the beach in mid summer is hot and
dazzling no matter where you are...");
MsgSel("Here, some sunscreen!","Let's aim for a tan!","It sure feels like summer!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040406101_04_010");
    MsgDisp("Nanatsumori","You really are thoughtful/ But, I'm all
prepared, so it's fine.
Thank you.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(4,2);
    VoicePlay("B040406101_04_020");
    MsgDisp("Nanatsumori","I'm not aiming for it.
It'll affect my work.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040406101_04_030");
    MsgDisp("Nanatsumori","Ahー...
When you say that it just makes it even
hotter...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
