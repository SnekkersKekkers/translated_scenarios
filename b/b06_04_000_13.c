ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
VoicePlay("B060400013_04_000");
MsgDisp("Nanatsumori","...... If you're still good on time, could
you stay with me a bit longer?");
MsgSel("Yeah, that's fine.","Sorry, today is a bit...");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,3);
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,3,1);
    ChCheek(4,7);
    VoicePlay("B060400013_04_010");
    MsgDisp("Nanatsumori","Alright.
... Haha!");
    MsgDispSksp(0);
    MsgClose();
    ScrFadeOut(0);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    ChCheek(4,0);
    break ;
    case 1:
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,2,1);
    VoicePlay("B060400013_04_020");
    MsgDisp("Nanatsumori","... Right.
Then, I'll see you next time.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(4);
    MsgDisp("主人公","(I wonder if it was bat to turn him
down...)");
    MsgClose();
    ScrFadeOut(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
