ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("B060100013_01_000");
MsgDisp("Kazama","Hey, you still good on time?");
MsgSel("Yeah, I'm good.","Sorry, today is a bit...");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B060100013_01_010");
    MsgDisp("Kazama","Let's take a little detour, then.");
    MsgDispSksp(1,3);
    MsgDisp("主人公","Yeah!");
    MsgDispSksp(0);
    MsgClose();
    ScrFadeOut(0);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ChCheek(1,0);
    break ;
    case 1:
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B060100013_01_020");
    MsgDisp("Kazama","I see...
I understand.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    MsgDisp("主人公","(I wonder if it was bad to turn him down?)");
    MsgClose();
    ScrFadeOut(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
