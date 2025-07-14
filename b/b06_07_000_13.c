ChLayout(1);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
VoicePlay("B060700013_07_000");
MsgDisp("Mikage","Hey, should we make a little detour after
this?");
MsgSel("Yes, that's fine.","Sorry, today is a bit...");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2,1);
    VoicePlay("B060700013_07_010");
    MsgDisp("Mikage","Alright, then that's settled.
let's make a quick detour.");
    MsgDispSksp(0);
    MsgClose();
    ScrFadeOut(0);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    ChCheek(7,0);
    break ;
    case 1:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3,1);
    VoicePlay("B060700013_07_020");
    MsgDisp("Mikage","Oh, I see.
be careful on your way home.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    MsgDisp("主人公","Hmmm, I wonder if I shouldn't have turned
him down...)");
    MsgClose();
    ScrFadeOut(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
