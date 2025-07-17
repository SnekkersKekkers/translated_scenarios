ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ChCheek(2,10);
VoicePlay("B060200013_02_000");
MsgDisp("Sassa","Hey, you know...
Do you have a bit more time?");
MsgSel("Sure, it's fine","Sorry, today is a bit...");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    ChCheek(2,0);
    VoicePlay("B060200013_02_010");
    MsgDisp("Sassa","Okay, there's somewhere I want to take
you!
Let's go!");
    MsgDispSksp(0);
    MsgClose();
    ScrFadeOut(0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    ChCheek(2,0);
    break ;
    case 1:
    ChEye(2,2);
    ChMouth(2,0);
    ChMotion(2,4);
    ChCheek(2,0);
    VoicePlay("B060200013_02_020");
    MsgDisp("Sassa","Oh, I see...
Haha, I got a little greedy.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(I feel kind of bad...)");
    MsgClose();
    ScrFadeOut(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
