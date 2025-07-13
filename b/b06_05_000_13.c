ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B060500013_05_000");
MsgDisp("Hiiragi","Do you still have time after this?");
MsgSel("Sure, it's fine","Sorry, today's a bit......");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,3);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B060500013_05_010");
    MsgDisp("Hiiragi","Good.
Let's stay together a bit longer then.");
    MsgDispSksp(0);
    MsgClose();
    ScrFadeOut(0);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    ChCheek(5,0);
    break ;
    case 1:
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    ChEyeOpenLevel(5,9);
    VoicePlay("B060500013_05_020");
    MsgDisp("Hiiragi","I see.
That's it for today then.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(Sorry for refusing......)");
    MsgClose();
    ScrFadeOut(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
