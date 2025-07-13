ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B060600013_06_000");
MsgDisp("Himuro","Hey.
Do you still have some time after this?");
MsgSel("Sure, it's fine.","Sorry, today's a bit......");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B060600013_06_010");
    MsgDisp("Himuro","Let's take a detour then.
Is that okay?");
    MsgDispSksp(1,3);
    MsgDisp("主人公","Yeah!");
    MsgDispSksp(0);
    MsgClose();
    ScrFadeOut(0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChCheek(6,0);
    break ;
    case 1:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B060600013_06_020");
    MsgDisp("Himuro","......Ah, I see.
I'm going home then.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(6);
    MsgDisp("主人公","(Was it wrong to say no?)");
    MsgClose();
    ScrFadeOut(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
