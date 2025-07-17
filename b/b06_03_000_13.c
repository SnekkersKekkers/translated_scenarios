ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("B060300013_03_000");
MsgDisp("Honda","Hey, do you have time?
To take a little detour.");
MsgSel("Sure, it's okay.","Sorry, today's a bit...");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    MsgDispSksp(1,3);
    VoicePlay("B060300013_03_010");
    MsgDisp("Honda","Yay!
Let's go then.");
    MsgDispSksp(0);
    MsgClose();
    ScrFadeOut(0);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    ChCheek(3,0);
    break ;
    case 1:
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,2);
    VoicePlay("B060300013_03_020");
    MsgDisp("Honda","I see.
I understand.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(3);
    MsgDisp("主人公","(Was it wrong to say no...?)");
    MsgClose();
    ScrFadeOut(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
